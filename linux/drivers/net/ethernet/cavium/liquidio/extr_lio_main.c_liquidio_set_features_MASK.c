
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
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct net_device*,int ,int) ;
 int FUNC_1 (struct net_device*,int ,int ) ;
 struct lio* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_13,
     netdev_features_t VAR_14)
{
 struct lio *VAR_15 = FUNC_2(VAR_13);

 if ((VAR_14 & VAR_1) &&
     (VAR_15->dev_capability & VAR_1) &&
     !(VAR_13->features & VAR_1))
  FUNC_0(VAR_13, VAR_4,
         VAR_11 | VAR_12);
 else if (!(VAR_14 & VAR_1) &&
   (VAR_15->dev_capability & VAR_1) &&
   (VAR_13->features & VAR_1))
  FUNC_0(VAR_13, VAR_3,
         VAR_11 | VAR_12);




 if (!(VAR_13->features & VAR_2) &&
     (VAR_15->enc_dev_capability & VAR_2) &&
     (VAR_14 & VAR_2))
  FUNC_1(VAR_13,
         VAR_7,
         VAR_6);
 else if ((VAR_13->features & VAR_2) &&
   (VAR_15->enc_dev_capability & VAR_2) &&
   !(VAR_14 & VAR_2))
  FUNC_1(VAR_13, VAR_7,
         VAR_5);

 if ((VAR_14 & VAR_0) &&
     (VAR_15->dev_capability & VAR_0) &&
     !(VAR_13->features & VAR_0))
  FUNC_0(VAR_13, VAR_8,
         VAR_10);
 else if (!(VAR_14 & VAR_0) &&
   (VAR_15->dev_capability & VAR_0) &&
   (VAR_13->features & VAR_0))
  FUNC_0(VAR_13, VAR_8,
         VAR_9);

 return 0;
}
