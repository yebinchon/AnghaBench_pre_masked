
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtw_netdev_priv_indicator {void* priv; } ;
struct net_device {int dummy; } ;


 struct net_device* FUNC_0 (int,int) ;
 struct rtw_netdev_priv_indicator* FUNC_1 (struct net_device*) ;

struct net_device *FUNC_2(void *VAR_0)
{
 struct net_device *VAR_1;
 struct rtw_netdev_priv_indicator *VAR_2;

 VAR_1 = FUNC_0(sizeof(struct rtw_netdev_priv_indicator), 4);
 if (!VAR_1)
  goto RETURN;

 VAR_2 = FUNC_1(VAR_1);
 VAR_2->priv = VAR_0;

RETURN:
 return VAR_1;
}
