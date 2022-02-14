
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct qla_hw_data {int * wq; TYPE_2__* isp_ops; scalar_t__ interrupts_on; } ;
struct TYPE_11__ {scalar_t__ init_done; scalar_t__ online; } ;
struct TYPE_13__ {TYPE_1__ flags; scalar_t__ timer_active; struct qla_hw_data* hw; } ;
typedef TYPE_3__ scsi_qla_host_t ;
struct TYPE_12__ {int (* disable_intrs ) (struct qla_hw_data*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (struct qla_hw_data*) ;
 int FUNC_7 (struct qla_hw_data*) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (struct qla_hw_data*) ;

__attribute__((used)) static void
FUNC_11(scsi_qla_host_t *VAR_1)
{
 struct qla_hw_data *VAR_2 = VAR_1->hw;

 FUNC_3(VAR_1, VAR_0 << 16);


 if (VAR_1->timer_active)
  FUNC_8(VAR_1);

 FUNC_2(VAR_1);
 VAR_1->flags.online = 0;


 if (VAR_2->interrupts_on) {
  VAR_1->flags.init_done = 0;
  VAR_2->isp_ops->disable_intrs(VAR_2);
 }

 FUNC_4(VAR_1);

 FUNC_5(VAR_1);


 if (VAR_2->wq) {
  FUNC_1(VAR_2->wq);
  FUNC_0(VAR_2->wq);
  VAR_2->wq = ((void*)0);
 }


 FUNC_7(VAR_2);

 FUNC_9(VAR_1);

 FUNC_6(VAR_2);
}
