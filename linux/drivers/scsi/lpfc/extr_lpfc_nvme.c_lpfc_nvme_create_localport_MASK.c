
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct nvme_fc_port_info {void* port_name; void* node_name; int port_role; } ;
struct nvme_fc_local_port {scalar_t__ private; int port_num; } ;
struct TYPE_11__ {int wwn; } ;
struct TYPE_12__ {TYPE_3__ u; } ;
struct TYPE_9__ {int wwn; } ;
struct TYPE_10__ {TYPE_1__ u; } ;
struct lpfc_vport {int nvmei_support; struct nvme_fc_local_port* localport; struct lpfc_hba* phba; TYPE_4__ fc_portname; TYPE_2__ fc_nodename; } ;
struct lpfc_nvme_lport {int fc4NvmeLsCmpls; int fc4NvmeLsRequests; int cmpl_ls_err; int cmpl_ls_xb; int cmpl_fcp_err; int cmpl_fcp_xb; int xmt_ls_err; int xmt_ls_abort; int xmt_fcp_abort; int xmt_fcp_wqerr; int xmt_fcp_err; int xmt_fcp_qdepth; int xmt_fcp_bad_ndlp; int xmt_fcp_noxri; struct lpfc_vport* vport; } ;
struct TYPE_13__ {int num_present_cpu; } ;
struct lpfc_hba {scalar_t__ cfg_fcp_io_sched; TYPE_6__* pcidev; TYPE_5__ sli4_hba; int cfg_hdw_queue; scalar_t__ cfg_nvme_seg_cnt; } ;
struct TYPE_15__ {scalar_t__ max_sgl_segments; int max_hw_queues; } ;
struct TYPE_14__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int *,int ) ;
 TYPE_7__ VAR_6 ;
 int FUNC_2 (struct lpfc_vport*,int ,int,char*,int ,struct nvme_fc_local_port*,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct nvme_fc_port_info*,int ,int) ;
 int FUNC_4 (struct nvme_fc_port_info*,TYPE_7__*,int *,struct nvme_fc_local_port**) ;
 void* FUNC_5 (int ) ;

int
FUNC_6(struct lpfc_vport *VAR_7)
{
 int VAR_8 = 0;
 struct lpfc_hba *VAR_9 = VAR_7->phba;
 struct nvme_fc_port_info VAR_10;
 struct nvme_fc_local_port *VAR_11;
 struct lpfc_nvme_lport *VAR_12;




 FUNC_3(&VAR_10, 0, sizeof(struct nvme_fc_port_info));
 VAR_10.port_role = VAR_1;
 VAR_10.node_name = FUNC_5(VAR_7->fc_nodename.u.wwn);
 VAR_10.port_name = FUNC_5(VAR_7->fc_portname.u.wwn);





 VAR_6.max_sgl_segments = VAR_9->cfg_nvme_seg_cnt + 1;


 if (VAR_9->cfg_fcp_io_sched == VAR_5)
  VAR_6.max_hw_queues = VAR_9->cfg_hdw_queue;
 else
  VAR_6.max_hw_queues =
   VAR_9->sli4_hba.num_present_cpu;

 if (!FUNC_0(VAR_0))
  return VAR_8;





 VAR_8 = FUNC_4(&VAR_10, &VAR_6,
      &VAR_7->phba->pcidev->dev, &VAR_11);
 if (!VAR_8) {
  FUNC_2(VAR_7, VAR_2, VAR_3 | VAR_4,
     "6005 Successfully registered local "
     "NVME port num %d, localP x%px, private "
     "x%px, sg_seg %d\n",
     VAR_11->port_num, VAR_11,
     VAR_11->private,
     VAR_6.max_sgl_segments);


  VAR_12 = (struct lpfc_nvme_lport *)VAR_11->private;
  VAR_7->localport = VAR_11;
  VAR_12->vport = VAR_7;
  VAR_7->nvmei_support = 1;

  FUNC_1(&VAR_12->xmt_fcp_noxri, 0);
  FUNC_1(&VAR_12->xmt_fcp_bad_ndlp, 0);
  FUNC_1(&VAR_12->xmt_fcp_qdepth, 0);
  FUNC_1(&VAR_12->xmt_fcp_err, 0);
  FUNC_1(&VAR_12->xmt_fcp_wqerr, 0);
  FUNC_1(&VAR_12->xmt_fcp_abort, 0);
  FUNC_1(&VAR_12->xmt_ls_abort, 0);
  FUNC_1(&VAR_12->xmt_ls_err, 0);
  FUNC_1(&VAR_12->cmpl_fcp_xb, 0);
  FUNC_1(&VAR_12->cmpl_fcp_err, 0);
  FUNC_1(&VAR_12->cmpl_ls_xb, 0);
  FUNC_1(&VAR_12->cmpl_ls_err, 0);
  FUNC_1(&VAR_12->fc4NvmeLsRequests, 0);
  FUNC_1(&VAR_12->fc4NvmeLsCmpls, 0);
 }

 return VAR_8;
}
