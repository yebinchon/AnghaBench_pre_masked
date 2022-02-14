
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virt_wifi_netdev_priv {struct net_device* upperdev; } ;
struct notifier_block {int dummy; } ;
struct net_device {TYPE_1__* rtnl_link_ops; int rx_handler_data; } ;
struct TYPE_2__ {int (* dellink ) (struct net_device*,int *) ;} ;


 int FUNC_0 (int ) ;

 int VAR_0 ;
 int VAR_1 ;
 struct net_device* FUNC_1 (void*) ;
 int FUNC_2 (struct net_device*) ;
 struct virt_wifi_netdev_priv* FUNC_3 (int ) ;
 int FUNC_4 (struct net_device*,int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct notifier_block *VAR_2, unsigned long VAR_3,
      void *VAR_4)
{
 struct net_device *VAR_5 = FUNC_1(VAR_4);
 struct virt_wifi_netdev_priv *VAR_6;
 struct net_device *VAR_7;
 FUNC_0(VAR_1);

 if (!FUNC_2(VAR_5))
  return VAR_0;

 switch (VAR_3) {
 case 128:
  VAR_6 = FUNC_3(VAR_5->rx_handler_data);
  if (!VAR_6)
   return VAR_0;

  VAR_7 = VAR_6->upperdev;

  VAR_7->rtnl_link_ops->dellink(VAR_7, &VAR_1);
  FUNC_5(&VAR_1);
  break;
 }

 return VAR_0;
}
