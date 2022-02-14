
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int * netdev_ops; int priv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct net_device *VAR_3)
{
 VAR_3->priv_flags &= ~VAR_1;
 VAR_3->priv_flags |= VAR_0;
 VAR_3->netdev_ops = &VAR_2;
}
