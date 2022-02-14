
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wilc_wfi_mon_priv {struct net_device* real_ndev; } ;
struct wilc {struct net_device* monitor_dev; } ;
struct net_device {int needs_free_netdev; int * netdev_ops; scalar_t__* name; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct net_device* FUNC_0 (int) ;
 int FUNC_1 (struct net_device*,char*) ;
 struct wilc_wfi_mon_priv* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 int FUNC_4 (scalar_t__*,char const*,int) ;
 int VAR_2 ;

struct net_device *FUNC_5(struct wilc *VAR_3,
            const char *VAR_4,
            struct net_device *VAR_5)
{
 struct wilc_wfi_mon_priv *VAR_6;


 if (VAR_3->monitor_dev)
  return VAR_3->monitor_dev;

 VAR_3->monitor_dev = FUNC_0(sizeof(struct wilc_wfi_mon_priv));
 if (!VAR_3->monitor_dev)
  return ((void*)0);

 VAR_3->monitor_dev->type = VAR_0;
 FUNC_4(VAR_3->monitor_dev->name, VAR_4, VAR_1);
 VAR_3->monitor_dev->name[VAR_1 - 1] = 0;
 VAR_3->monitor_dev->netdev_ops = &VAR_2;
 VAR_3->monitor_dev->needs_free_netdev = 1;

 if (FUNC_3(VAR_3->monitor_dev)) {
  FUNC_1(VAR_5, "register_netdevice failed\n");
  return ((void*)0);
 }
 VAR_6 = FUNC_2(VAR_3->monitor_dev);
 if (!VAR_6)
  return ((void*)0);

 VAR_6->real_ndev = VAR_5;

 return VAR_3->monitor_dev;
}
