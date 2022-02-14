
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtw_netdev_priv_indicator {int sizeof_priv; void* priv; } ;
struct net_device {int dummy; } ;


 struct net_device* FUNC_0 (int,int) ;
 struct rtw_netdev_priv_indicator* FUNC_1 (struct net_device*) ;

struct net_device *FUNC_2(int VAR_0, void *VAR_1)
{
 struct net_device *VAR_2;
 struct rtw_netdev_priv_indicator *VAR_3;

 VAR_2 = FUNC_0(sizeof(struct rtw_netdev_priv_indicator), 4);
 if (!VAR_2)
  goto RETURN;

 VAR_3 = FUNC_1(VAR_2);
 VAR_3->priv = VAR_1;
 VAR_3->sizeof_priv = VAR_0;

RETURN:
 return VAR_2;
}
