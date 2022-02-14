
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct brcmf_cfg80211_info {TYPE_1__* btcoex; } ;
struct TYPE_4__ {int timer_on; int work; int timer; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*) ;

void FUNC_6(struct brcmf_cfg80211_info *VAR_1)
{
 FUNC_2(VAR_0, "enter\n");

 if (!VAR_1->btcoex)
  return;

 if (VAR_1->btcoex->timer_on) {
  VAR_1->btcoex->timer_on = 0;
  FUNC_4(&VAR_1->btcoex->timer);
 }

 FUNC_3(&VAR_1->btcoex->work);

 FUNC_0(VAR_1->btcoex, 0);
 FUNC_1(VAR_1->btcoex);

 FUNC_5(VAR_1->btcoex);
 VAR_1->btcoex = ((void*)0);
}
