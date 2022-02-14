
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int priv_flags; int * l3mdev_ops; } ;
struct ipvl_port {int pnet; struct net_device* dev; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct ipvl_port *VAR_2)
{
 struct net_device *VAR_3 = VAR_2->dev;
 int VAR_4;

 FUNC_0();

 VAR_4 = FUNC_1(FUNC_2(&VAR_2->pnet));
 if (!VAR_4) {
  VAR_3->l3mdev_ops = &VAR_1;
  VAR_3->priv_flags |= VAR_0;
 }

 return VAR_4;
}
