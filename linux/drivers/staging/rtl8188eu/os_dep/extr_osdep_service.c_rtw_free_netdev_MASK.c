
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtw_netdev_priv_indicator {int priv; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*) ;
 struct rtw_netdev_priv_indicator* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct net_device *VAR_0)
{
 struct rtw_netdev_priv_indicator *VAR_1;

 if (!VAR_0)
  goto RETURN;

 VAR_1 = FUNC_1(VAR_0);

 if (!VAR_1->priv)
  goto RETURN;

 FUNC_2(VAR_1->priv);
 FUNC_0(VAR_0);

RETURN:
 return;
}
