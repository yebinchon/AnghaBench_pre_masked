
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct scsi_sge {int dummy; } ;
struct qedf_mp_req {int * resp_buf; int resp_buf_dma; int * req_buf; int req_buf_dma; int * mp_resp_bd; int mp_resp_bd_dma; int * mp_req_bd; int mp_req_bd_dma; } ;
struct qedf_ioreq {TYPE_1__* fcport; struct qedf_mp_req mp_req; } ;
struct qedf_ctx {TYPE_2__* pdev; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {struct qedf_ctx* qedf; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int *,int ) ;

__attribute__((used)) static void FUNC_1(struct qedf_ioreq *VAR_1)
{
 struct qedf_mp_req *VAR_2 = &(VAR_1->mp_req);
 struct qedf_ctx *VAR_3 = VAR_1->fcport->qedf;
 uint64_t VAR_4 = sizeof(struct scsi_sge);


 if (VAR_2->mp_req_bd) {
  FUNC_0(&VAR_3->pdev->dev, VAR_4,
      VAR_2->mp_req_bd, VAR_2->mp_req_bd_dma);
  VAR_2->mp_req_bd = ((void*)0);
 }
 if (VAR_2->mp_resp_bd) {
  FUNC_0(&VAR_3->pdev->dev, VAR_4,
      VAR_2->mp_resp_bd, VAR_2->mp_resp_bd_dma);
  VAR_2->mp_resp_bd = ((void*)0);
 }
 if (VAR_2->req_buf) {
  FUNC_0(&VAR_3->pdev->dev, VAR_0,
      VAR_2->req_buf, VAR_2->req_buf_dma);
  VAR_2->req_buf = ((void*)0);
 }
 if (VAR_2->resp_buf) {
  FUNC_0(&VAR_3->pdev->dev, VAR_0,
      VAR_2->resp_buf, VAR_2->resp_buf_dma);
  VAR_2->resp_buf = ((void*)0);
 }
}
