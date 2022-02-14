
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int els_logo_pyld_dma; scalar_t__ els_logo_pyld; } ;
struct TYPE_14__ {TYPE_4__ els_logo; } ;
struct srb_iocb {int timer; TYPE_5__ u; } ;
struct TYPE_12__ {struct srb_iocb iocb_cmd; } ;
struct TYPE_16__ {TYPE_2__* vha; int fcport; TYPE_3__ u; } ;
typedef TYPE_7__ srb_t ;
struct TYPE_15__ {int dev; } ;
struct TYPE_11__ {TYPE_1__* hw; } ;
struct TYPE_10__ {TYPE_6__* pdev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,scalar_t__,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_7__*) ;

__attribute__((used)) static void FUNC_4(srb_t *VAR_1)
{
 struct srb_iocb *VAR_2 = &VAR_1->u.iocb_cmd;

 FUNC_2(VAR_1->fcport);

 if (VAR_2->u.els_logo.els_logo_pyld)
  FUNC_1(&VAR_1->vha->hw->pdev->dev, VAR_0,
      VAR_2->u.els_logo.els_logo_pyld,
      VAR_2->u.els_logo.els_logo_pyld_dma);

 FUNC_0(&VAR_2->timer);
 FUNC_3(VAR_1);
}
