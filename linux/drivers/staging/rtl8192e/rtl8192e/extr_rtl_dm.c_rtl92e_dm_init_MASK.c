
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r8192_priv {int undecorated_smoothed_pwdb; int gpio_change_rf_wq; int DM_Type; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,void*,struct net_device*) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;
 struct r8192_priv* FUNC_11 (struct net_device*) ;

void FUNC_12(struct net_device *VAR_2)
{
 struct r8192_priv *VAR_3 = FUNC_11(VAR_2);

 VAR_3->DM_Type = VAR_0;

 VAR_3->undecorated_smoothed_pwdb = -1;

 FUNC_5(VAR_2);

 FUNC_10(VAR_2);

 FUNC_2(VAR_2);
 FUNC_9(VAR_2);
 FUNC_3(VAR_2);
 FUNC_6(VAR_2);
 FUNC_7(VAR_2);
 FUNC_4(VAR_2);
 if (FUNC_1(VAR_2))
  FUNC_8(VAR_2);

 FUNC_0(&VAR_3->gpio_change_rf_wq,
         (void *)VAR_1, VAR_2);
}
