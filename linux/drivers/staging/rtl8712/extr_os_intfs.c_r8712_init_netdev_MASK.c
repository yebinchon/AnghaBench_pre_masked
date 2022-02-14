
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {struct iw_handler_def* wireless_handlers; int watchdog_timeo; int * netdev_ops; } ;
struct iw_handler_def {int dummy; } ;
struct _adapter {scalar_t__ pid; struct net_device* pnetdev; } ;


 int VAR_0 ;
 struct net_device* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct net_device*,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct _adapter*,struct net_device*) ;
 struct _adapter* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int ,char*) ;

struct net_device *FUNC_7(void)
{
 struct _adapter *VAR_4;
 struct net_device *VAR_5;

 VAR_5 = FUNC_0(sizeof(struct _adapter));
 if (!VAR_5)
  return ((void*)0);
 if (FUNC_1(VAR_5, VAR_1) < 0) {
  FUNC_6(VAR_1, "wlan%d");
  FUNC_1(VAR_5, VAR_1);
 }
 VAR_4 = FUNC_3(VAR_5);
 VAR_4->pnetdev = VAR_5;
 FUNC_5("r8712u: register rtl8712_netdev_ops to netdev_ops\n");
 VAR_5->netdev_ops = &VAR_3;
 VAR_5->watchdog_timeo = VAR_0;
 VAR_5->wireless_handlers = (struct iw_handler_def *)
         &VAR_2;
 FUNC_2(VAR_4, VAR_5);
 FUNC_4(VAR_5);
 VAR_4->pid = 0;
 return VAR_5;
}
