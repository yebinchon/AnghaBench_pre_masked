
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int priv_destructor; int * netdev_ops; } ;


 int FUNC_0 (struct net_device*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_2)
{
 FUNC_0(VAR_2);
 VAR_2->netdev_ops = &VAR_1;
 VAR_2->priv_destructor = VAR_0;
}
