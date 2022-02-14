
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pwrctrl_priv {int bInSuspend; } ;
struct net_device {int dummy; } ;
struct adapter {int dummy; } ;
struct TYPE_2__ {int hw_init_mutex; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct net_device*) ;
 TYPE_1__* FUNC_2 (struct adapter*) ;
 struct pwrctrl_priv* FUNC_3 (struct adapter*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct net_device*) ;

int FUNC_7(struct net_device *VAR_0)
{
 int VAR_1;
 struct adapter *VAR_2 = (struct adapter *)FUNC_6(VAR_0);
 struct pwrctrl_priv *VAR_3 = FUNC_3(VAR_2);

 if (VAR_3->bInSuspend == 1) {
  FUNC_0("+871x_drv - drv_open, bInSuspend =%d\n", VAR_3->bInSuspend);
  return 0;
 }

 if (FUNC_4(&(FUNC_2(VAR_2)->hw_init_mutex)))
  return -1;

 VAR_1 = FUNC_1(VAR_0);
 FUNC_5(&(FUNC_2(VAR_2)->hw_init_mutex));

 return VAR_1;
}
