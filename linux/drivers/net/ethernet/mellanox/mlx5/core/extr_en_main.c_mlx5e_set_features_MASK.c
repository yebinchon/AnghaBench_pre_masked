
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int features; } ;
typedef int netdev_features_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
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
 int VAR_13 ;
 int VAR_14 ;

int FUNC_1(struct net_device *VAR_15, netdev_features_t VAR_16)
{
 netdev_features_t VAR_17 = VAR_15->features;
 int VAR_18 = 0;




 VAR_18 |= FUNC_0(VAR_15, &VAR_17, VAR_16, VAR_4, VAR_10);
 VAR_18 |= FUNC_0(VAR_15, &VAR_17, VAR_16, VAR_2, VAR_9);




 VAR_18 |= FUNC_0(VAR_15, &VAR_17, VAR_16, VAR_6, VAR_11);
 VAR_18 |= FUNC_0(VAR_15, &VAR_17, VAR_16, VAR_7, VAR_12);
 VAR_18 |= FUNC_0(VAR_15, &VAR_17, VAR_16, VAR_3, VAR_13);




 if (VAR_18) {
  VAR_15->features = VAR_17;
  return -VAR_0;
 }

 return 0;
}
