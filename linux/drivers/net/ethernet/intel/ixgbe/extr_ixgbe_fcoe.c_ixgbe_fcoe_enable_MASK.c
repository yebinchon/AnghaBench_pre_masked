
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {TYPE_1__* netdev_ops; int features; } ;
struct ixgbe_fcoe {int refcnt; } ;
struct ixgbe_adapter {int flags; struct ixgbe_fcoe fcoe; } ;
struct TYPE_2__ {int (* ndo_open ) (struct net_device*) ;int (* ndo_stop ) (struct net_device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int VAR_5 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct ixgbe_adapter*) ;
 int FUNC_4 (struct ixgbe_adapter*) ;
 int FUNC_5 (struct ixgbe_adapter*) ;
 int FUNC_6 (struct net_device*) ;
 struct ixgbe_adapter* FUNC_7 (struct net_device*) ;
 scalar_t__ FUNC_8 (struct net_device*) ;
 int VAR_6 ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;

int FUNC_11(struct net_device *VAR_7)
{
 struct ixgbe_adapter *VAR_8 = FUNC_7(VAR_7);
 struct ixgbe_fcoe *VAR_9 = &VAR_8->fcoe;

 FUNC_0(&VAR_9->refcnt);

 if (!(VAR_8->flags & VAR_1))
  return -VAR_0;

 if (VAR_8->flags & VAR_2)
  return -VAR_0;

 FUNC_1(VAR_5, "Enabling FCoE offload features.\n");

 if (VAR_8->flags & VAR_3)
  FUNC_2(VAR_6, "Enabling FCoE on PF will disable legacy VFs\n");

 if (FUNC_8(VAR_7))
  VAR_7->netdev_ops->ndo_stop(VAR_7);


 FUNC_4(VAR_8);


 VAR_8->flags |= VAR_2;
 VAR_7->features |= VAR_4;
 FUNC_6(VAR_7);


 FUNC_3(VAR_8);
 FUNC_5(VAR_8);

 if (FUNC_8(VAR_7))
  VAR_7->netdev_ops->ndo_open(VAR_7);

 return 0;
}
