
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qeth_card {TYPE_1__* gdev; } ;
struct net_device {int features; int wanted_features; int hw_features; struct qeth_card* ml_priv; } ;
typedef int netdev_features_t ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ FUNC_0 (struct qeth_card*) ;
 scalar_t__ FUNC_1 (struct qeth_card*) ;
 int VAR_0 ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct net_device*) ;

void FUNC_4(struct net_device *VAR_1)
{
 struct qeth_card *VAR_2 = VAR_1->ml_priv;
 netdev_features_t VAR_3;

 VAR_3 = VAR_1->features;



 VAR_1->features &= ~VAR_1->hw_features;

 if (FUNC_0(VAR_2) && FUNC_1(VAR_2)) {
  VAR_1->features &= ~VAR_0;
  VAR_1->wanted_features |= VAR_0;
 }
 FUNC_3(VAR_1);
 if (VAR_3 != VAR_1->features)
  FUNC_2(&VAR_2->gdev->dev,
    "Device recovery failed to restore all offload features\n");
}
