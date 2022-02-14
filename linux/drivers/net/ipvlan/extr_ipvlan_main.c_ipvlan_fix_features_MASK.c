
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ipvl_dev {int sfeatures; } ;
typedef int netdev_features_t ;


 int VAR_0 ;
 struct ipvl_dev* FUNC_0 (struct net_device*) ;

__attribute__((used)) static netdev_features_t FUNC_1(struct net_device *VAR_1,
          netdev_features_t VAR_2)
{
 struct ipvl_dev *VAR_3 = FUNC_0(VAR_1);

 return VAR_2 & (VAR_3->sfeatures | ~VAR_0);
}
