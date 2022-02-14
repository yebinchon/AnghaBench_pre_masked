
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pwrctrl_priv {int bips_processing; int bInternalAutoSuspend; int bInSuspend; int bkeepfwalive; scalar_t__ power_mgnt; int bLeisurePs; int bFwCurrentInPSMode; int tog; int btcoex_rfon; int pwr_state_check_timer; scalar_t__ bcn_ant_mode; int smart_ps; scalar_t__ pwr_mode; int cpwm; scalar_t__ rpwm; scalar_t__ LpsIdleCount; scalar_t__ pwr_state_check_cnts; int pwr_state_check_interval; int ips_mode_req; int ips_mode; scalar_t__ ips_leave_cnts; scalar_t__ ips_enter_cnts; int rf_pwrstate; int mutex_lock; } ;
struct TYPE_2__ {int mp_mode; scalar_t__ power_mgnt; int smart_ps; int ips_mode; } ;
struct adapter {TYPE_1__ registrypriv; struct pwrctrl_priv pwrctrlpriv; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int ,int ) ;

void FUNC_2(struct adapter *VAR_5)
{
 struct pwrctrl_priv *VAR_6 = &VAR_5->pwrctrlpriv;

 FUNC_0(&VAR_6->mutex_lock);
 VAR_6->rf_pwrstate = VAR_4;
 VAR_6->ips_enter_cnts = 0;
 VAR_6->ips_leave_cnts = 0;
 VAR_6->bips_processing = 0;

 VAR_6->ips_mode = VAR_5->registrypriv.ips_mode;
 VAR_6->ips_mode_req = VAR_5->registrypriv.ips_mode;

 VAR_6->pwr_state_check_interval = VAR_2;
 VAR_6->pwr_state_check_cnts = 0;
 VAR_6->bInternalAutoSuspend = 0;
 VAR_6->bInSuspend = 0;
 VAR_6->bkeepfwalive = 0;

 VAR_6->LpsIdleCount = 0;
 if (VAR_5->registrypriv.mp_mode == 1)
  VAR_6->power_mgnt = VAR_0;
 else
  VAR_6->power_mgnt = VAR_5->registrypriv.power_mgnt;
 VAR_6->bLeisurePs = (VAR_6->power_mgnt != VAR_0) ? 1 : 0;

 VAR_6->bFwCurrentInPSMode = 0;

 VAR_6->rpwm = 0;
 VAR_6->cpwm = VAR_1;

 VAR_6->pwr_mode = VAR_0;
 VAR_6->smart_ps = VAR_5->registrypriv.smart_ps;
 VAR_6->bcn_ant_mode = 0;

 VAR_6->tog = 0x80;

 VAR_6->btcoex_rfon = 0;

 FUNC_1(&VAR_6->pwr_state_check_timer,
      VAR_3, 0);
}
