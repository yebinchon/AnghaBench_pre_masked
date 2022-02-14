
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int * l3mdev_ops; int priv_flags; } ;
struct ipvl_port {int pnet; struct net_device* dev; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct ipvl_port *VAR_1)
{
 struct net_device *VAR_2 = VAR_1->dev;

 FUNC_0();

 VAR_2->priv_flags &= ~VAR_0;
 FUNC_1(FUNC_2(&VAR_1->pnet));
 VAR_2->l3mdev_ops = ((void*)0);
}
