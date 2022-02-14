
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct macvlan_dev {int set_features; TYPE_1__* lowerdev; } ;
typedef int netdev_features_t ;
struct TYPE_2__ {int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int,int) ;
 struct macvlan_dev* FUNC_1 (struct net_device*) ;

__attribute__((used)) static netdev_features_t FUNC_2(struct net_device *VAR_4,
           netdev_features_t VAR_5)
{
 struct macvlan_dev *VAR_6 = FUNC_1(VAR_4);
 netdev_features_t VAR_7 = VAR_6->lowerdev->features;
 netdev_features_t VAR_8;

 VAR_5 |= VAR_2;
 VAR_5 &= (VAR_6->set_features | ~VAR_1);
 VAR_8 = VAR_5;

 VAR_7 &= (VAR_5 | ~VAR_3);
 VAR_5 = FUNC_0(VAR_7, VAR_5, VAR_8);
 VAR_5 |= VAR_0;
 VAR_5 &= (VAR_0 | VAR_1);

 return VAR_5;
}
