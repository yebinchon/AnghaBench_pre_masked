
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nsim_dev_port {int dummy; } ;
struct nsim_dev {TYPE_1__* nsim_bus_dev; } ;
struct netdevsim {TYPE_1__* nsim_bus_dev; struct nsim_dev_port* nsim_dev_port; struct nsim_dev* nsim_dev; struct net_device* netdev; } ;
struct net_device {int * netdev_ops; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 struct netdevsim* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct net_device*,int *) ;
 struct net_device* FUNC_2 (int,char*,int ,int ) ;
 int FUNC_3 (struct net_device*) ;
 struct netdevsim* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct netdevsim*) ;
 int FUNC_6 (struct netdevsim*) ;
 int FUNC_7 (struct netdevsim*) ;
 int FUNC_8 (struct netdevsim*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 () ;
 int FUNC_11 () ;

struct netdevsim *
FUNC_12(struct nsim_dev *VAR_4, struct nsim_dev_port *VAR_5)
{
 struct net_device *VAR_6;
 struct netdevsim *VAR_7;
 int VAR_8;

 VAR_6 = FUNC_2(sizeof(*VAR_7), "eth%d", VAR_1, VAR_3);
 if (!VAR_6)
  return FUNC_0(-VAR_0);

 VAR_7 = FUNC_4(VAR_6);
 VAR_7->netdev = VAR_6;
 VAR_7->nsim_dev = VAR_4;
 VAR_7->nsim_dev_port = VAR_5;
 VAR_7->nsim_bus_dev = VAR_4->nsim_bus_dev;
 FUNC_1(VAR_6, &VAR_7->nsim_bus_dev->dev);
 VAR_6->netdev_ops = &VAR_2;

 FUNC_10();
 VAR_8 = FUNC_5(VAR_7);
 if (VAR_8)
  goto err_free_netdev;

 FUNC_7(VAR_7);

 VAR_8 = FUNC_9(VAR_6);
 if (VAR_8)
  goto err_ipsec_teardown;
 FUNC_11();

 return VAR_7;

err_ipsec_teardown:
 FUNC_8(VAR_7);
 FUNC_6(VAR_7);
 FUNC_11();
err_free_netdev:
 FUNC_3(VAR_6);
 return FUNC_0(VAR_8);
}
