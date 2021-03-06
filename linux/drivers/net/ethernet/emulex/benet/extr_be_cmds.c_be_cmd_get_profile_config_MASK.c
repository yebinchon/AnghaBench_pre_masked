
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef size_t u16 ;
struct be_resources {int vf_if_cap_flags; void* max_vfs; } ;
struct be_port_resources {int max_vfs; int nic_pfs; } ;
struct be_port_res_desc {int mc_type; } ;
struct be_pcie_res_desc {int num_vfs; } ;
struct be_nic_res_desc {scalar_t__ link_param; int cap_flags; } ;
struct be_mcc_wrb {int member_0; } ;
struct be_dma_mem {int size; int dma; struct be_cmd_resp_get_profile_config* va; } ;
struct TYPE_4__ {int version; scalar_t__ domain; } ;
struct be_cmd_resp_get_profile_config {int func_param; int desc_count; scalar_t__ type; TYPE_2__ hdr; } ;
struct be_cmd_req_get_profile_config {int func_param; int desc_count; scalar_t__ type; TYPE_2__ hdr; } ;
struct be_adapter {scalar_t__ port_num; size_t pf_num; TYPE_1__* pdev; int mc_type; } ;
struct TYPE_3__ {int dev; } ;


 int CMD_SUBSYSTEM_COMMON ;
 int ENOMEM ;
 int GFP_ATOMIC ;
 int MAX_NIC_FUNCS ;
 int OPCODE_COMMON_GET_PROFILE_CONFIG ;
 scalar_t__ QUERY_MODIFIABLE_FIELDS_TYPE ;
 scalar_t__ RESOURCE_MODIFIABLE ;
 int be_cmd_notify_wait (struct be_adapter*,struct be_mcc_wrb*) ;
 int be_copy_nic_desc (struct be_resources*,struct be_nic_res_desc*) ;
 struct be_nic_res_desc* be_get_func_nic_desc (int ,size_t,size_t) ;
 size_t be_get_nic_pf_num_list (int ,size_t,size_t*) ;
 struct be_pcie_res_desc* be_get_pcie_desc (int ,size_t,size_t) ;
 struct be_port_res_desc* be_get_port_desc (int ,size_t) ;
 struct be_nic_res_desc* be_get_vft_desc (int ,size_t,size_t) ;
 int be_wrb_cmd_hdr_prepare (TYPE_2__*,int ,int ,int,struct be_mcc_wrb*,struct be_dma_mem*) ;
 struct be_cmd_resp_get_profile_config* dma_alloc_coherent (int *,int,int *,int ) ;
 int dma_free_coherent (int *,int,struct be_cmd_resp_get_profile_config*,int ) ;
 int lancer_chip (struct be_adapter*) ;
 void* le16_to_cpu (int ) ;
 int memset (struct be_dma_mem*,int ,int) ;

int be_cmd_get_profile_config(struct be_adapter *adapter,
         struct be_resources *res,
         struct be_port_resources *port_res,
         u8 profile_type, u8 query, u8 domain)
{
 struct be_cmd_resp_get_profile_config *resp;
 struct be_cmd_req_get_profile_config *req;
 struct be_nic_res_desc *vf_res;
 struct be_pcie_res_desc *pcie;
 struct be_port_res_desc *port;
 struct be_nic_res_desc *nic;
 struct be_mcc_wrb wrb = {0};
 struct be_dma_mem cmd;
 u16 desc_count;
 int status;

 memset(&cmd, 0, sizeof(struct be_dma_mem));
 cmd.size = sizeof(struct be_cmd_resp_get_profile_config);
 cmd.va = dma_alloc_coherent(&adapter->pdev->dev, cmd.size, &cmd.dma,
        GFP_ATOMIC);
 if (!cmd.va)
  return -ENOMEM;

 req = cmd.va;
 be_wrb_cmd_hdr_prepare(&req->hdr, CMD_SUBSYSTEM_COMMON,
          OPCODE_COMMON_GET_PROFILE_CONFIG,
          cmd.size, &wrb, &cmd);

 if (!lancer_chip(adapter))
  req->hdr.version = 1;
 req->type = profile_type;
 req->hdr.domain = domain;





 if (query == RESOURCE_MODIFIABLE)
  req->type |= QUERY_MODIFIABLE_FIELDS_TYPE;

 status = be_cmd_notify_wait(adapter, &wrb);
 if (status)
  goto err;

 resp = cmd.va;
 desc_count = le16_to_cpu(resp->desc_count);

 if (port_res) {
  u16 nic_pf_cnt = 0, i;
  u16 nic_pf_num_list[MAX_NIC_FUNCS];

  nic_pf_cnt = be_get_nic_pf_num_list(resp->func_param,
          desc_count,
          nic_pf_num_list);

  for (i = 0; i < nic_pf_cnt; i++) {
   nic = be_get_func_nic_desc(resp->func_param, desc_count,
         nic_pf_num_list[i]);
   if (nic->link_param == adapter->port_num) {
    port_res->nic_pfs++;
    pcie = be_get_pcie_desc(resp->func_param,
       desc_count,
       nic_pf_num_list[i]);
    port_res->max_vfs += le16_to_cpu(pcie->num_vfs);
   }
  }
  goto err;
 }

 pcie = be_get_pcie_desc(resp->func_param, desc_count,
    adapter->pf_num);
 if (pcie)
  res->max_vfs = le16_to_cpu(pcie->num_vfs);

 port = be_get_port_desc(resp->func_param, desc_count);
 if (port)
  adapter->mc_type = port->mc_type;

 nic = be_get_func_nic_desc(resp->func_param, desc_count,
       adapter->pf_num);
 if (nic)
  be_copy_nic_desc(res, nic);

 vf_res = be_get_vft_desc(resp->func_param, desc_count,
     adapter->pf_num);
 if (vf_res)
  res->vf_if_cap_flags = vf_res->cap_flags;
err:
 if (cmd.va)
  dma_free_coherent(&adapter->pdev->dev, cmd.size, cmd.va,
      cmd.dma);
 return status;
}
