
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device_context {int nvdev; } ;
struct net_device {int * netdev_ops; } ;


 int VAR_0 ;
 struct net_device* FUNC_0 (struct net_device*) ;
 struct net_device_context* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static struct net_device *FUNC_3(struct net_device *VAR_1)
{
 struct net_device_context *VAR_2;
 struct net_device *VAR_3;

 VAR_3 = FUNC_0(VAR_1);
 if (!VAR_3 || VAR_3->netdev_ops != &VAR_0)
  return ((void*)0);

 VAR_2 = FUNC_1(VAR_3);
 if (!FUNC_2(VAR_2->nvdev))
  return ((void*)0);

 return VAR_3;
}
