
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int features; } ;
struct lio {int dev_capability; } ;
typedef int netdev_features_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct lio* FUNC_0 (struct net_device*) ;

__attribute__((used)) static netdev_features_t FUNC_1(struct net_device *VAR_5,
            netdev_features_t VAR_6)
{
 struct lio *VAR_7 = FUNC_0(VAR_5);

 if ((VAR_6 & VAR_2) &&
     !(VAR_7->dev_capability & VAR_2))
  VAR_6 &= ~VAR_2;

 if ((VAR_6 & VAR_0) &&
     !(VAR_7->dev_capability & VAR_0))
  VAR_6 &= ~VAR_0;

 if ((VAR_6 & VAR_3) && !(VAR_7->dev_capability & VAR_3))
  VAR_6 &= ~VAR_3;

 if ((VAR_6 & VAR_4) && !(VAR_7->dev_capability & VAR_4))
  VAR_6 &= ~VAR_4;

 if ((VAR_6 & VAR_1) && !(VAR_7->dev_capability & VAR_1))
  VAR_6 &= ~VAR_1;


 if (!(VAR_6 & VAR_2) && (VAR_5->features & VAR_1) &&
     (VAR_7->dev_capability & VAR_1))
  VAR_6 &= ~VAR_1;

 return VAR_6;
}
