
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pwrctrl_priv {int bips_processing; int bInternalAutoSuspend; int bInSuspend; int bkeepfwalive; scalar_t__ power_mgnt; int bLeisurePs; int bFwCurrentInPSMode; int tog; int brpwmtimeout; int wowlan_mode; int wowlan_ap_mode; int pno_inited; int pno_in_resume; int * pno_ssid_list; int * pscan_info; int * pnlo_info; int pwr_state_check_timer; int pwr_rpwm_timer; int rpwmtimeoutwi; struct adapter* adapter; int cpwm_event; scalar_t__ rpwm; scalar_t__ dtim; scalar_t__ bcn_ant_mode; int smart_ps; scalar_t__ pwr_mode; int cpwm; scalar_t__ LpsIdleCount; scalar_t__ pwr_state_check_cnts; int pwr_state_check_interval; int ips_mode_req; int ips_mode; scalar_t__ ips_leave_cnts; scalar_t__ ips_enter_cnts; int rf_pwrstate; int lock; } ;
struct TYPE_2__ {scalar_t__ power_mgnt; int smart_ps; int ips_mode; } ;
struct adapter {TYPE_1__ registrypriv; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int *) ;
 struct pwrctrl_priv* FUNC_1 (struct adapter*) ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct adapter*,int ,int *) ;
 int FUNC_4 (int *,int ,int ) ;

void FUNC_5(struct adapter *VAR_9)
{
 struct pwrctrl_priv *VAR_10 = FUNC_1(VAR_9);

 FUNC_2(&VAR_10->lock);
 VAR_10->rf_pwrstate = VAR_7;
 VAR_10->ips_enter_cnts = 0;
 VAR_10->ips_leave_cnts = 0;
 VAR_10->bips_processing = 0;

 VAR_10->ips_mode = VAR_9->registrypriv.ips_mode;
 VAR_10->ips_mode_req = VAR_9->registrypriv.ips_mode;

 VAR_10->pwr_state_check_interval = VAR_3;
 VAR_10->pwr_state_check_cnts = 0;
 VAR_10->bInternalAutoSuspend = 0;
 VAR_10->bInSuspend = 0;
 VAR_10->bkeepfwalive = 0;

 VAR_10->LpsIdleCount = 0;
 VAR_10->power_mgnt = VAR_9->registrypriv.power_mgnt;
 VAR_10->bLeisurePs = VAR_10->power_mgnt != VAR_1;

 VAR_10->bFwCurrentInPSMode = 0;

 VAR_10->rpwm = 0;
 VAR_10->cpwm = VAR_2;

 VAR_10->pwr_mode = VAR_1;
 VAR_10->smart_ps = VAR_9->registrypriv.smart_ps;
 VAR_10->bcn_ant_mode = 0;
 VAR_10->dtim = 0;

 VAR_10->tog = 0x80;

 FUNC_3(VAR_9, VAR_0, (u8 *)(&VAR_10->rpwm));

 FUNC_0(&VAR_10->cpwm_event, VAR_4, ((void*)0));

 VAR_10->brpwmtimeout = 0;
 VAR_10->adapter = VAR_9;
 FUNC_0(&VAR_10->rpwmtimeoutwi, VAR_8, ((void*)0));
 FUNC_4(&VAR_10->pwr_rpwm_timer, VAR_5, 0);
 FUNC_4(&VAR_10->pwr_state_check_timer,
      VAR_6, 0);

 VAR_10->wowlan_mode = 0;
 VAR_10->wowlan_ap_mode = 0;
}
