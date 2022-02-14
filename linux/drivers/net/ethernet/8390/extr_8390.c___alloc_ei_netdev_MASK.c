
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int * netdev_ops; } ;


 struct net_device* FUNC_0 (int) ;
 int VAR_0 ;

struct net_device *FUNC_1(int VAR_1)
{
 struct net_device *VAR_2 = FUNC_0(VAR_1);
 if (VAR_2)
  VAR_2->netdev_ops = &VAR_0;
 return VAR_2;
}
