
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vmxnet3_adapter {int cmd_lock; TYPE_3__* shared; } ;
struct net_device {int features; } ;
typedef int netdev_features_t ;
struct TYPE_4__ {int uptFeatures; } ;
struct TYPE_5__ {TYPE_1__ misc; } ;
struct TYPE_6__ {TYPE_2__ devRead; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct vmxnet3_adapter*,int ,int ) ;
 struct vmxnet3_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

int FUNC_4(struct net_device *VAR_8, netdev_features_t VAR_9)
{
 struct vmxnet3_adapter *VAR_10 = FUNC_1(VAR_8);
 unsigned long VAR_11;
 netdev_features_t VAR_12 = VAR_9 ^ VAR_8->features;

 if (VAR_12 & (VAR_2 | VAR_1 |
         VAR_0)) {
  if (VAR_9 & VAR_2)
   VAR_10->shared->devRead.misc.uptFeatures |=
   VAR_4;
  else
   VAR_10->shared->devRead.misc.uptFeatures &=
   ~VAR_4;


  if (VAR_9 & VAR_1)
   VAR_10->shared->devRead.misc.uptFeatures |=
       VAR_3;
  else
   VAR_10->shared->devRead.misc.uptFeatures &=
       ~VAR_3;

  if (VAR_9 & VAR_0)
   VAR_10->shared->devRead.misc.uptFeatures |=
   VAR_5;
  else
   VAR_10->shared->devRead.misc.uptFeatures &=
   ~VAR_5;

  FUNC_2(&VAR_10->cmd_lock, VAR_11);
  FUNC_0(VAR_10, VAR_7,
           VAR_6);
  FUNC_3(&VAR_10->cmd_lock, VAR_11);
 }
 return 0;
}
