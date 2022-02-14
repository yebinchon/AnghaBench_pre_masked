
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct qla_mt_iocb_rqst_fx00 {int flags; } ;
struct qla_hw_data {TYPE_6__* pdev; } ;
struct TYPE_13__ {int * vendor_cmd; } ;
struct TYPE_14__ {TYPE_3__ h_vendor; } ;
struct fc_bsg_request {TYPE_4__ rqst_data; } ;
struct TYPE_17__ {int sg_cnt; int sg_list; } ;
struct TYPE_15__ {int sg_cnt; int sg_list; } ;
struct bsg_job {TYPE_7__ reply_payload; TYPE_5__ request_payload; struct fc_bsg_request* request; } ;
struct TYPE_12__ {struct bsg_job* bsg_job; } ;
struct TYPE_18__ {scalar_t__ type; int fcport; TYPE_2__ u; TYPE_1__* vha; } ;
typedef TYPE_8__ srb_t ;
struct TYPE_16__ {int dev; } ;
struct TYPE_11__ {struct qla_hw_data* hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_8__*) ;

void FUNC_3(srb_t *VAR_7)
{
 struct qla_hw_data *VAR_8 = VAR_7->vha->hw;
 struct bsg_job *VAR_9 = VAR_7->u.bsg_job;
 struct fc_bsg_request *VAR_10 = VAR_9->request;
 struct qla_mt_iocb_rqst_fx00 *VAR_11;

 if (VAR_7->type == VAR_6) {
  VAR_11 = (struct qla_mt_iocb_rqst_fx00 *)
      &VAR_10->rqst_data.h_vendor.vendor_cmd[1];

  if (VAR_11->flags & VAR_4)
   FUNC_0(&VAR_8->pdev->dev,
       VAR_9->request_payload.sg_list,
       VAR_9->request_payload.sg_cnt, VAR_1);

  if (VAR_11->flags & VAR_5)
   FUNC_0(&VAR_8->pdev->dev,
       VAR_9->reply_payload.sg_list,
       VAR_9->reply_payload.sg_cnt, VAR_0);
 } else {
  FUNC_0(&VAR_8->pdev->dev, VAR_9->request_payload.sg_list,
      VAR_9->request_payload.sg_cnt, VAR_1);

  FUNC_0(&VAR_8->pdev->dev, VAR_9->reply_payload.sg_list,
      VAR_9->reply_payload.sg_cnt, VAR_0);
 }

 if (VAR_7->type == VAR_2 ||
     VAR_7->type == VAR_6 ||
     VAR_7->type == VAR_3)
  FUNC_1(VAR_7->fcport);
 FUNC_2(VAR_7);
}
