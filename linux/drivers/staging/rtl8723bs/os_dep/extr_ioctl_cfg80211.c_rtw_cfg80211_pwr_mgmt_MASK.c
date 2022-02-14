
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtw_wdev_priv {int power_mgmt; } ;
struct adapter {int dummy; } ;


 struct rtw_wdev_priv* FUNC_0 (struct adapter*) ;

inline bool FUNC_1(struct adapter *VAR_0)
{
 struct rtw_wdev_priv *VAR_1 = FUNC_0(VAR_0);
 return VAR_1->power_mgmt;
}
