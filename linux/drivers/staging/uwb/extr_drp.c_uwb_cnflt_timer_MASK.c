
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uwb_cnflt_alien {int cnflt_update_work; TYPE_1__* rc; } ;
struct timer_list {int dummy; } ;
struct TYPE_2__ {int rsv_workq; } ;


 struct uwb_cnflt_alien* VAR_0 ;
 struct uwb_cnflt_alien* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (int ,int *) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(struct timer_list *VAR_2)
{
 struct uwb_cnflt_alien *VAR_3 = FUNC_0(VAR_3, VAR_2, VAR_1);

 FUNC_1(VAR_3->rc->rsv_workq, &VAR_3->cnflt_update_work);
}
