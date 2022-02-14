
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* uint64_t ;
struct TYPE_6__ {void* hi; void* lo; } ;
struct scsi_sge {void* sge_len; TYPE_3__ sge_addr; } ;
struct qedf_mp_req {int req_len; int resp_buf_dma; struct scsi_sge* mp_resp_bd; struct scsi_sge* mp_req_bd; int req_buf_dma; int mp_resp_bd_dma; int mp_req_bd_dma; void* resp_buf; void* req_buf; } ;
struct qedf_ioreq {scalar_t__ cmd_type; int data_xfer_len; int mp_req; TYPE_1__* fcport; } ;
struct qedf_ctx {int dbg_ctx; TYPE_2__* pdev; } ;
struct fcp_cmnd {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {struct qedf_ctx* qedf; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int ,char*) ;
 int VAR_3 ;
 void* VAR_4 ;
 void* FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 void* FUNC_4 (int *,void*,int *,int ) ;
 int FUNC_5 (struct qedf_mp_req*,int ,int) ;
 int FUNC_6 (struct qedf_ioreq*) ;

int FUNC_7(struct qedf_ioreq *VAR_5)
{
 struct qedf_mp_req *VAR_6;
 struct scsi_sge *VAR_7;
 struct scsi_sge *VAR_8;
 struct qedf_ctx *VAR_9 = VAR_5->fcport->qedf;
 dma_addr_t VAR_10;
 uint64_t VAR_11;

 FUNC_1(&(VAR_9->dbg_ctx), VAR_3, "Entered.\n");

 VAR_6 = (struct qedf_mp_req *)&(VAR_5->mp_req);
 FUNC_5(VAR_6, 0, sizeof(struct qedf_mp_req));

 if (VAR_5->cmd_type != VAR_2) {
  VAR_6->req_len = sizeof(struct fcp_cmnd);
  VAR_5->data_xfer_len = VAR_6->req_len;
 } else
  VAR_6->req_len = VAR_5->data_xfer_len;

 VAR_6->req_buf = FUNC_4(&VAR_9->pdev->dev, VAR_4,
     &VAR_6->req_buf_dma, VAR_1);
 if (!VAR_6->req_buf) {
  FUNC_0(&(VAR_9->dbg_ctx), "Unable to alloc MP req buffer\n");
  FUNC_6(VAR_5);
  return -VAR_0;
 }

 VAR_6->resp_buf = FUNC_4(&VAR_9->pdev->dev,
     VAR_4, &VAR_6->resp_buf_dma, VAR_1);
 if (!VAR_6->resp_buf) {
  FUNC_0(&(VAR_9->dbg_ctx), "Unable to alloc TM resp "
     "buffer\n");
  FUNC_6(VAR_5);
  return -VAR_0;
 }


 VAR_11 = sizeof(struct scsi_sge);
 VAR_6->mp_req_bd = FUNC_4(&VAR_9->pdev->dev, VAR_11,
     &VAR_6->mp_req_bd_dma, VAR_1);
 if (!VAR_6->mp_req_bd) {
  FUNC_0(&(VAR_9->dbg_ctx), "Unable to alloc MP req bd\n");
  FUNC_6(VAR_5);
  return -VAR_0;
 }

 VAR_6->mp_resp_bd = FUNC_4(&VAR_9->pdev->dev, VAR_11,
     &VAR_6->mp_resp_bd_dma, VAR_1);
 if (!VAR_6->mp_resp_bd) {
  FUNC_0(&(VAR_9->dbg_ctx), "Unable to alloc MP resp bd\n");
  FUNC_6(VAR_5);
  return -VAR_0;
 }


 VAR_10 = VAR_6->req_buf_dma;
 VAR_7 = VAR_6->mp_req_bd;
 VAR_7->sge_addr.lo = FUNC_3(VAR_10);
 VAR_7->sge_addr.hi = FUNC_2(VAR_10);
 VAR_7->sge_len = VAR_4;






 VAR_8 = VAR_6->mp_resp_bd;
 VAR_10 = VAR_6->resp_buf_dma;
 VAR_8->sge_addr.lo = FUNC_3(VAR_10);
 VAR_8->sge_addr.hi = FUNC_2(VAR_10);
 VAR_8->sge_len = VAR_4;

 return 0;
}
