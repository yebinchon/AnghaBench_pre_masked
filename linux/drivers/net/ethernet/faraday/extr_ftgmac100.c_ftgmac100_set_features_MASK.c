
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int features; } ;
struct ftgmac100 {scalar_t__ base; TYPE_1__* netdev; } ;
typedef int netdev_features_t ;
struct TYPE_2__ {int features; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 struct ftgmac100* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_3,
      netdev_features_t VAR_4)
{
 struct ftgmac100 *VAR_5 = FUNC_2(VAR_3);
 netdev_features_t VAR_6 = VAR_3->features ^ VAR_4;

 if (!FUNC_3(VAR_3))
  return 0;


 if (VAR_6 & VAR_2) {
  u32 VAR_7;

  VAR_7 = FUNC_0(VAR_5->base + VAR_1);
  if (VAR_5->netdev->features & VAR_2)
   VAR_7 |= VAR_0;
  else
   VAR_7 &= ~VAR_0;
  FUNC_1(VAR_7, VAR_5->base + VAR_1);
 }

 return 0;
}
