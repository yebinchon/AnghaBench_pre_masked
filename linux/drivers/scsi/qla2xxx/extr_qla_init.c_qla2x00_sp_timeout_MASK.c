
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct srb_iocb {int (* timeout ) (TYPE_5__*) ;} ;
struct req_que {int ** outstanding_cmds; } ;
struct qla_hw_data {int hardware_lock; } ;
struct TYPE_12__ {struct srb_iocb iocb_cmd; } ;
struct TYPE_14__ {size_t handle; TYPE_3__ u; TYPE_2__* qpair; TYPE_1__* vha; } ;
typedef TYPE_5__ srb_t ;
struct TYPE_13__ {int timer; } ;
struct TYPE_15__ {TYPE_4__ iocb_cmd; } ;
struct TYPE_11__ {struct req_que* req; } ;
struct TYPE_10__ {struct qla_hw_data* hw; } ;


 int FUNC_0 (int ) ;
 TYPE_5__* FUNC_1 (int ,struct timer_list*,int ) ;
 int FUNC_2 () ;
 TYPE_5__* VAR_0 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (TYPE_5__*) ;
 TYPE_6__ VAR_1 ;

void
FUNC_6(struct timer_list *VAR_2)
{
 srb_t *VAR_3 = FUNC_1(VAR_3, VAR_2, VAR_1.iocb_cmd.timer);
 struct srb_iocb *VAR_4;
 struct req_que *VAR_5;
 unsigned long VAR_6;
 struct qla_hw_data *VAR_7 = VAR_3->vha->hw;

 FUNC_0(FUNC_2());
 FUNC_3(&VAR_7->hardware_lock, VAR_6);
 VAR_5 = VAR_3->qpair->req;
 VAR_5->outstanding_cmds[VAR_3->handle] = ((void*)0);
 VAR_4 = &VAR_3->u.iocb_cmd;
 FUNC_4(&VAR_7->hardware_lock, VAR_6);
 VAR_4->timeout(VAR_3);
}
