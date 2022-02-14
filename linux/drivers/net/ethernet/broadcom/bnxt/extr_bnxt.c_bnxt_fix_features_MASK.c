
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int features; } ;
struct TYPE_2__ {scalar_t__ vlan; } ;
struct bnxt {int flags; TYPE_1__ vf; } ;
typedef int netdev_features_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct bnxt*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct bnxt*) ;
 struct bnxt* FUNC_2 (struct net_device*) ;

__attribute__((used)) static netdev_features_t FUNC_3(struct net_device *VAR_7,
        netdev_features_t VAR_8)
{
 struct bnxt *VAR_9 = FUNC_2(VAR_7);

 if ((VAR_8 & VAR_6) && !FUNC_1(VAR_9))
  VAR_8 &= ~VAR_6;

 if (VAR_9->flags & VAR_0)
  VAR_8 &= ~(VAR_5 | VAR_2);

 if (!(VAR_8 & VAR_1))
  VAR_8 &= ~VAR_2;

 if (VAR_8 & VAR_2)
  VAR_8 &= ~VAR_5;




 if ((VAR_8 & (VAR_3 | VAR_4)) !=
     (VAR_3 | VAR_4)) {
  if (VAR_7->features & VAR_3)
   VAR_8 &= ~(VAR_3 |
          VAR_4);
  else
   VAR_8 |= VAR_3 |
        VAR_4;
 }
 return VAR_8;
}
