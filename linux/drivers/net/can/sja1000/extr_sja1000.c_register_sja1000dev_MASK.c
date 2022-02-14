
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int * netdev_ops; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int VAR_2 ;
 int FUNC_4 (struct net_device*) ;

int FUNC_5(struct net_device *VAR_3)
{
 int VAR_4;

 if (!FUNC_4(VAR_3))
  return -VAR_0;

 VAR_3->flags |= VAR_1;
 VAR_3->netdev_ops = &VAR_2;

 FUNC_3(VAR_3);
 FUNC_0(VAR_3);

 VAR_4 = FUNC_2(VAR_3);

 if (!VAR_4)
  FUNC_1(VAR_3);

 return VAR_4;
}
