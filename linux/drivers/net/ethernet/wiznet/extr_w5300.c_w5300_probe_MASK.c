
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w5300_priv {int napi; struct net_device* ndev; } ;
struct platform_device {int dev; } ;
struct net_device {int features; int watchdog_timeo; int * ethtool_ops; int * netdev_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*,int *) ;
 struct net_device* FUNC_1 (int) ;
 int FUNC_2 (struct net_device*) ;
 struct w5300_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*,int *,int ,int) ;
 int FUNC_5 (struct platform_device*,struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int VAR_3 ;
 int FUNC_8 (struct platform_device*) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_6)
{
 struct w5300_priv *VAR_7;
 struct net_device *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_1(sizeof(*VAR_7));
 if (!VAR_8)
  return -VAR_0;
 FUNC_0(VAR_8, &VAR_6->dev);
 FUNC_5(VAR_6, VAR_8);
 VAR_7 = FUNC_3(VAR_8);
 VAR_7->ndev = VAR_8;

 VAR_8->netdev_ops = &VAR_5;
 VAR_8->ethtool_ops = &VAR_3;
 VAR_8->watchdog_timeo = VAR_1;
 FUNC_4(VAR_8, &VAR_7->napi, VAR_4, 16);




 VAR_8->features |= VAR_2;

 VAR_9 = FUNC_6(VAR_8);
 if (VAR_9 < 0)
  goto err_register;

 VAR_9 = FUNC_8(VAR_6);
 if (VAR_9 < 0)
  goto err_hw_probe;

 return 0;

err_hw_probe:
 FUNC_7(VAR_8);
err_register:
 FUNC_2(VAR_8);
 return VAR_9;
}
