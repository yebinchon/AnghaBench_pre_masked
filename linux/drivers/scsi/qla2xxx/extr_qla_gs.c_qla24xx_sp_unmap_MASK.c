
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {int * rsp; int rsp_dma; int rsp_allocated_size; int * req; int req_dma; int req_allocated_size; } ;
struct TYPE_15__ {TYPE_3__ ctarg; int els_plogi; } ;
struct srb_iocb {TYPE_4__ u; } ;
struct TYPE_16__ {struct srb_iocb iocb_cmd; } ;
struct TYPE_17__ {int type; int (* free ) (TYPE_6__*) ;TYPE_5__ u; } ;
typedef TYPE_6__ srb_t ;
struct TYPE_18__ {TYPE_2__* hw; } ;
typedef TYPE_7__ scsi_qla_host_t ;
struct TYPE_13__ {TYPE_1__* pdev; } ;
struct TYPE_12__ {int dev; } ;




 int FUNC_0 (int *,int ,int *,int ) ;
 int FUNC_1 (TYPE_7__*,int *) ;
 int FUNC_2 (TYPE_6__*) ;

void FUNC_3(scsi_qla_host_t *VAR_0, srb_t *VAR_1)
{
 struct srb_iocb *VAR_2 = &VAR_1->u.iocb_cmd;

 switch (VAR_1->type) {
 case 128:
  FUNC_1(VAR_0, &VAR_2->u.els_plogi);
  break;
 case 129:
 default:
  if (VAR_1->u.iocb_cmd.u.ctarg.req) {
   FUNC_0(&VAR_0->hw->pdev->dev,
       VAR_1->u.iocb_cmd.u.ctarg.req_allocated_size,
       VAR_1->u.iocb_cmd.u.ctarg.req,
       VAR_1->u.iocb_cmd.u.ctarg.req_dma);
   VAR_1->u.iocb_cmd.u.ctarg.req = ((void*)0);
  }

  if (VAR_1->u.iocb_cmd.u.ctarg.rsp) {
   FUNC_0(&VAR_0->hw->pdev->dev,
       VAR_1->u.iocb_cmd.u.ctarg.rsp_allocated_size,
       VAR_1->u.iocb_cmd.u.ctarg.rsp,
       VAR_1->u.iocb_cmd.u.ctarg.rsp_dma);
   VAR_1->u.iocb_cmd.u.ctarg.rsp = ((void*)0);
  }
  break;
 }

 VAR_1->free(VAR_1);
}
