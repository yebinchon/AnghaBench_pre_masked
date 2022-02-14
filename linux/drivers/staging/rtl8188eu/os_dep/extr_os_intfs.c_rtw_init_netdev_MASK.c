
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * type; } ;
struct net_device {int watchdog_timeo; struct iw_handler_def* wireless_handlers; int * netdev_ops; TYPE_1__ dev; } ;
struct iw_handler_def {int dummy; } ;
struct adapter {struct net_device* pnetdev; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct adapter*,struct net_device*) ;
 struct net_device* FUNC_3 (void*) ;
 int VAR_3 ;
 int VAR_4 ;
 struct adapter* FUNC_4 (struct net_device*) ;
 int VAR_5 ;

struct net_device *FUNC_5(struct adapter *VAR_6)
{
 struct adapter *VAR_7;
 struct net_device *VAR_8 = ((void*)0);

 FUNC_1(VAR_2, VAR_1, ("+init_net_dev\n"));

 if (VAR_6)
  VAR_8 = FUNC_3((void *)VAR_6);

 if (!VAR_8)
  return ((void*)0);

 VAR_8->dev.type = &VAR_5;
 VAR_7 = FUNC_4(VAR_8);
 VAR_7->pnetdev = VAR_8;
 FUNC_0("register rtw_netdev_ops to netdev_ops\n");
 VAR_8->netdev_ops = &VAR_4;
 VAR_8->watchdog_timeo = VAR_0 * 3;
 VAR_8->wireless_handlers = (struct iw_handler_def *)&VAR_3;

 FUNC_2(VAR_7, VAR_8);

 return VAR_8;
}
