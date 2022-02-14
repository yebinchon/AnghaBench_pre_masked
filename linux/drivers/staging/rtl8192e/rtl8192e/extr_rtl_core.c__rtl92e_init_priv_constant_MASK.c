
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rt_pwr_save_ctrl {int RegMaxLPSAwakeIntvl; } ;
struct r8192_priv {TYPE_1__* rtllib; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int PowerSaveControl; } ;


 struct r8192_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_0)
{
 struct r8192_priv *VAR_1 = FUNC_0(VAR_0);
 struct rt_pwr_save_ctrl *VAR_2 = (struct rt_pwr_save_ctrl *)
     &VAR_1->rtllib->PowerSaveControl;

 VAR_2->RegMaxLPSAwakeIntvl = 5;
}
