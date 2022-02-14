
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct beiscsi_hba {int interface_handle; } ;
struct be_dma_mem {struct be_cmd_rel_dhcp_req* va; } ;
struct be_cmd_rel_dhcp_req {int ip_type; int interface_hndl; } ;
struct TYPE_2__ {int addr; } ;
struct be_cmd_get_if_info_resp {TYPE_1__ ip_addr; scalar_t__ dhcp_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct beiscsi_hba*,struct be_dma_mem*,int *,int *,int ) ;
 int FUNC_1 (struct beiscsi_hba*,struct be_cmd_get_if_info_resp*) ;
 int FUNC_2 (struct beiscsi_hba*,int ,struct be_cmd_get_if_info_resp**) ;
 int FUNC_3 (struct beiscsi_hba*,int *,int *,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct beiscsi_hba*,int ,int ,char*,int) ;
 int FUNC_6 (struct beiscsi_hba*,struct be_dma_mem*,int ,int ,int) ;
 int FUNC_7 (struct be_cmd_get_if_info_resp*) ;

int FUNC_8(struct beiscsi_hba *VAR_4, u32 VAR_5,
    u8 *VAR_6, u8 *VAR_7)
{
 struct be_cmd_get_if_info_resp *VAR_8;
 struct be_cmd_rel_dhcp_req *VAR_9;
 struct be_dma_mem VAR_10;
 int VAR_11;

 VAR_11 = FUNC_2(VAR_4, VAR_5, &VAR_8);
 if (VAR_11)
  return VAR_11;

 if (VAR_8->dhcp_state) {
  VAR_11 = FUNC_6(VAR_4, &VAR_10,
    VAR_1,
    VAR_3,
    sizeof(*VAR_9));
  if (VAR_11)
   goto exit;

  VAR_9 = VAR_10.va;
  VAR_9->interface_hndl = VAR_4->interface_handle;
  VAR_9->ip_type = VAR_5;
  VAR_11 = FUNC_0(VAR_4, &VAR_10, ((void*)0), ((void*)0), 0);
  if (VAR_11 < 0) {
   FUNC_5(VAR_4, VAR_2, VAR_0,
        "BG_%d : failed to release existing DHCP: %d\n",
        VAR_11);
   goto exit;
  }
 }


 if (!FUNC_4(VAR_8->ip_addr.addr, VAR_5)) {
  VAR_11 = FUNC_1(VAR_4, VAR_8);
  if (VAR_11)
   goto exit;
 }


 if (VAR_6)
  VAR_11 = FUNC_3(VAR_4, VAR_6, VAR_7, VAR_5);
exit:
 FUNC_7(VAR_8);
 return VAR_11;
}
