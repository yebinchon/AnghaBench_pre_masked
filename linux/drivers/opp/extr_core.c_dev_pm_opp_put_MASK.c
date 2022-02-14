
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dev_pm_opp {TYPE_1__* opp_table; int kref; } ;
struct TYPE_2__ {int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int *) ;

void FUNC_1(struct dev_pm_opp *VAR_1)
{
 FUNC_0(&VAR_1->kref, VAR_0,
         &VAR_1->opp_table->lock);
}
