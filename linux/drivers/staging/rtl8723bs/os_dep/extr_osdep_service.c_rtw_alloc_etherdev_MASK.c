
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtw_netdev_priv_indicator {int sizeof_priv; int priv; } ;
struct net_device {int dummy; } ;


 struct net_device* FUNC_0 (int,int) ;
 int FUNC_1 (struct net_device*) ;
 struct rtw_netdev_priv_indicator* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int) ;

struct net_device *FUNC_4(int VAR_0)
{
 struct net_device *VAR_1;
 struct rtw_netdev_priv_indicator *VAR_2;

 VAR_1 = FUNC_0(sizeof(struct rtw_netdev_priv_indicator), 4);
 if (!VAR_1)
  goto RETURN;

 VAR_2 = FUNC_2(VAR_1);

 VAR_2->priv = FUNC_3(VAR_0);
 if (!VAR_2->priv) {
  FUNC_1(VAR_1);
  VAR_1 = ((void*)0);
  goto RETURN;
 }

 VAR_2->sizeof_priv = VAR_0;
RETURN:
 return VAR_1;
}
