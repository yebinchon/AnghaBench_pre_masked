
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pwm_omap_dmtimer_chip {int dm_timer; TYPE_1__* pdata; } ;
struct TYPE_2__ {int (* start ) (int ) ;int (* disable ) (int ) ;int (* write_counter ) (int ,int ) ;int (* enable ) (int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct pwm_omap_dmtimer_chip *VAR_1)
{
 VAR_1->pdata->enable(VAR_1->dm_timer);
 VAR_1->pdata->write_counter(VAR_1->dm_timer, VAR_0);
 VAR_1->pdata->disable(VAR_1->dm_timer);

 VAR_1->pdata->start(VAR_1->dm_timer);
}
