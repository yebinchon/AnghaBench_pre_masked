
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int features; } ;
typedef int netdev_features_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct net_device*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_5,
     netdev_features_t VAR_6)
{
 netdev_features_t VAR_7 = VAR_5->features;
 int VAR_8 = 0;

 VAR_8 |= FUNC_0(VAR_5, VAR_6, VAR_1,
           VAR_3);
 VAR_8 |= FUNC_0(VAR_5, VAR_6, VAR_2,
           VAR_4);

 if (VAR_8) {
  VAR_5->features = VAR_7;
  return -VAR_0;
 }

 return 0;
}
