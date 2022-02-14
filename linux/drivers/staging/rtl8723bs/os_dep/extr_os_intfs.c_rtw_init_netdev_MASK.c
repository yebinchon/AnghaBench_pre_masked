
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int watchdog_timeo; struct iw_handler_def* wireless_handlers; int * netdev_ops; } ;
struct iw_handler_def {int dummy; } ;
struct adapter {struct net_device* pnetdev; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct adapter*,struct net_device*) ;
 int FUNC_3 (char*,struct net_device*) ;
 struct net_device* FUNC_4 (int) ;
 struct net_device* FUNC_5 (int,void*) ;
 int VAR_3 ;
 int VAR_4 ;
 struct adapter* FUNC_6 (struct net_device*) ;

struct net_device *FUNC_7(struct adapter *VAR_5)
{
 struct adapter *VAR_6;
 struct net_device *VAR_7;

 FUNC_1(VAR_2, VAR_1, ("+init_net_dev\n"));

 if (VAR_5 != ((void*)0))
  VAR_7 = FUNC_5(sizeof(struct adapter), (void *)VAR_5);
 else
  VAR_7 = FUNC_4(sizeof(struct adapter));

 FUNC_3("pnetdev = %p\n", VAR_7);
 if (!VAR_7)
  return ((void*)0);

 VAR_6 = FUNC_6(VAR_7);
 VAR_6->pnetdev = VAR_7;



 FUNC_0("register rtw_netdev_ops to netdev_ops\n");
 VAR_7->netdev_ops = &VAR_4;


 VAR_7->watchdog_timeo = VAR_0 * 3;
 VAR_7->wireless_handlers = (struct iw_handler_def *)&VAR_3;


 FUNC_2(VAR_6, VAR_7);

 return VAR_7;
}
