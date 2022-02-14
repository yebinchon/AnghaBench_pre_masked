
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int features; int flags; int dev_addr; TYPE_1__* netdev_ops; } ;
struct macvlan_dev {int flags; int * accel_priv; int port; struct net_device* lowerdev; } ;
struct TYPE_2__ {int (* ndo_dfwd_del_station ) (struct net_device*,int *) ;int * (* ndo_dfwd_add_station ) (struct net_device*,struct net_device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct net_device*,int) ;
 int FUNC_2 (struct net_device*,int) ;
 int FUNC_3 (struct net_device*,int ) ;
 int FUNC_4 (struct net_device*,int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (struct macvlan_dev*) ;
 scalar_t__ FUNC_7 (int ) ;
 struct macvlan_dev* FUNC_8 (struct net_device*) ;
 int * FUNC_9 (struct net_device*,struct net_device*) ;
 int FUNC_10 (struct net_device*,int *) ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_5)
{
 struct macvlan_dev *VAR_6 = FUNC_8(VAR_5);
 struct net_device *VAR_7 = VAR_6->lowerdev;
 int VAR_8;

 if (FUNC_7(VAR_6->port)) {
  if (!(VAR_6->flags & VAR_3)) {
   VAR_8 = FUNC_2(VAR_7, 1);
   if (VAR_8 < 0)
    goto out;
  }
  goto hash_add;
 }

 VAR_8 = -VAR_0;
 if (FUNC_5(VAR_6->port, VAR_5->dev_addr))
  goto out;




 if (VAR_7->features & VAR_4)
  VAR_6->accel_priv =
        VAR_7->netdev_ops->ndo_dfwd_add_station(VAR_7, VAR_5);




 if (FUNC_0(VAR_6->accel_priv)) {
  VAR_6->accel_priv = ((void*)0);
  VAR_8 = FUNC_3(VAR_7, VAR_5->dev_addr);
  if (VAR_8 < 0)
   goto out;
 }

 if (VAR_5->flags & VAR_1) {
  VAR_8 = FUNC_1(VAR_7, 1);
  if (VAR_8 < 0)
   goto del_unicast;
 }

 if (VAR_5->flags & VAR_2) {
  VAR_8 = FUNC_2(VAR_7, 1);
  if (VAR_8 < 0)
   goto clear_multi;
 }

hash_add:
 FUNC_6(VAR_6);
 return 0;

clear_multi:
 if (VAR_5->flags & VAR_1)
  FUNC_1(VAR_7, -1);
del_unicast:
 if (VAR_6->accel_priv) {
  VAR_7->netdev_ops->ndo_dfwd_del_station(VAR_7,
          VAR_6->accel_priv);
  VAR_6->accel_priv = ((void*)0);
 } else {
  FUNC_4(VAR_7, VAR_5->dev_addr);
 }
out:
 return VAR_8;
}
