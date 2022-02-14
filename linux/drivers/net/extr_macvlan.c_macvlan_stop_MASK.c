
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int flags; int dismantle; int dev_addr; TYPE_1__* netdev_ops; } ;
struct macvlan_dev {int flags; int port; int * accel_priv; struct net_device* lowerdev; } ;
struct TYPE_2__ {int (* ndo_dfwd_del_station ) (struct net_device*,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*,struct net_device*) ;
 int FUNC_1 (struct net_device*,int) ;
 int FUNC_2 (struct net_device*,int) ;
 int FUNC_3 (struct net_device*,int ) ;
 int FUNC_4 (struct net_device*,struct net_device*) ;
 int FUNC_5 (struct macvlan_dev*,int) ;
 scalar_t__ FUNC_6 (int ) ;
 struct macvlan_dev* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*,int *) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_3)
{
 struct macvlan_dev *VAR_4 = FUNC_7(VAR_3);
 struct net_device *VAR_5 = VAR_4->lowerdev;

 if (VAR_4->accel_priv) {
  VAR_5->netdev_ops->ndo_dfwd_del_station(VAR_5,
          VAR_4->accel_priv);
  VAR_4->accel_priv = ((void*)0);
 }

 FUNC_4(VAR_5, VAR_3);
 FUNC_0(VAR_5, VAR_3);

 if (FUNC_6(VAR_4->port)) {
  if (!(VAR_4->flags & VAR_2))
   FUNC_2(VAR_5, -1);
  goto hash_del;
 }

 if (VAR_3->flags & VAR_0)
  FUNC_1(VAR_5, -1);

 if (VAR_3->flags & VAR_1)
  FUNC_2(VAR_5, -1);

 FUNC_3(VAR_5, VAR_3->dev_addr);

hash_del:
 FUNC_5(VAR_4, !VAR_3->dismantle);
 return 0;
}
