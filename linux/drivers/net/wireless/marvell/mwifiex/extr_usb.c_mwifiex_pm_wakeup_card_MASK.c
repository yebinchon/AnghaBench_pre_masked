
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mwifiex_adapter {int pm_wakeup_fw_try; int pm_wakeup_card_req; int ps_state; int wakeup_timer; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct mwifiex_adapter *VAR_1)
{

 VAR_1->pm_wakeup_fw_try = 0;
 FUNC_0(&VAR_1->wakeup_timer);
 VAR_1->pm_wakeup_card_req = 0;
 VAR_1->ps_state = VAR_0;

 return 0;
}
