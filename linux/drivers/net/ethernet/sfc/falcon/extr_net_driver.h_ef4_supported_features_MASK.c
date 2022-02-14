
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int features; int hw_features; } ;
struct ef4_nic {struct net_device* net_dev; } ;
typedef int netdev_features_t ;



__attribute__((used)) static inline netdev_features_t FUNC_0(const struct ef4_nic *VAR_0)
{
 const struct net_device *VAR_1 = VAR_0->net_dev;

 return VAR_1->features | VAR_1->hw_features;
}
