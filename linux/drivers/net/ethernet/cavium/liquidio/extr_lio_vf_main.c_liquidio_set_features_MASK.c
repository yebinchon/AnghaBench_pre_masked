
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int features; } ;
struct lio {int dev_capability; int enc_dev_capability; } ;
typedef int netdev_features_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct net_device*,int ,int) ;
 int FUNC_1 (struct net_device*,int ,int ) ;
 struct lio* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_9,
     netdev_features_t VAR_10)
{
 struct lio *VAR_11 = FUNC_2(VAR_9);

 if (!((VAR_9->features ^ VAR_10) & VAR_0))
  return 0;

 if ((VAR_10 & VAR_0) && (VAR_11->dev_capability & VAR_0))
  FUNC_0(VAR_9, VAR_3,
         VAR_7 | VAR_8);
 else if (!(VAR_10 & VAR_0) &&
   (VAR_11->dev_capability & VAR_0))
  FUNC_0(VAR_9, VAR_2,
         VAR_7 | VAR_8);
 if (!(VAR_9->features & VAR_1) &&
     (VAR_11->enc_dev_capability & VAR_1) &&
     (VAR_10 & VAR_1))
  FUNC_1(VAR_9, VAR_6,
         VAR_5);
 else if ((VAR_9->features & VAR_1) &&
   (VAR_11->enc_dev_capability & VAR_1) &&
   !(VAR_10 & VAR_1))
  FUNC_1(VAR_9, VAR_6,
         VAR_4);

 return 0;
}
