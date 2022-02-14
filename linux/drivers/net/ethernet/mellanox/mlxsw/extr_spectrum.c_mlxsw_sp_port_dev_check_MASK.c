
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int * netdev_ops; } ;


 int VAR_0 ;

bool FUNC_0(const struct net_device *VAR_1)
{
 return VAR_1->netdev_ops == &VAR_0;
}
