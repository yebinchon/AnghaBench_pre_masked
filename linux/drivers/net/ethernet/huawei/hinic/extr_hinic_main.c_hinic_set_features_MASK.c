
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct hinic_dev {TYPE_1__* netdev; } ;
typedef int netdev_features_t ;
struct TYPE_2__ {int features; } ;


 struct hinic_dev* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct hinic_dev*,int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0,
         netdev_features_t VAR_1)
{
 struct hinic_dev *VAR_2 = FUNC_0(VAR_0);

 return FUNC_1(VAR_2, VAR_2->netdev->features,
       VAR_1, 0);
}
