
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


struct TYPE_10__ {int fxiocb_comp; } ;
struct TYPE_11__ {TYPE_2__ fxiocb; } ;
struct TYPE_15__ {scalar_t__ expires; } ;
struct TYPE_13__ {TYPE_3__ u; TYPE_7__ timer; } ;
struct TYPE_12__ {TYPE_5__ iocb_cmd; } ;
struct TYPE_14__ {scalar_t__ type; int start_timer; TYPE_4__ u; TYPE_1__* vha; int free; } ;
typedef TYPE_6__ srb_t ;
struct TYPE_9__ {int hw; } ;


 unsigned long VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_7__*,int ,int ) ;

void FUNC_3(srb_t *VAR_5, unsigned long VAR_6)
{
 FUNC_2(&VAR_5->u.iocb_cmd.timer, VAR_4, 0);
 VAR_5->u.iocb_cmd.timer.expires = VAR_2 + VAR_6 * VAR_0;
 VAR_5->free = VAR_3;
 if (FUNC_0(VAR_5->vha->hw) && VAR_5->type == VAR_1)
  FUNC_1(&VAR_5->u.iocb_cmd.u.fxiocb.fxiocb_comp);
 VAR_5->start_timer = 1;
}
