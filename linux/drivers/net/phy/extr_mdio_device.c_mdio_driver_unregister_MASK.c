
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdio_driver_common {int driver; } ;
struct mdio_driver {struct mdio_driver_common mdiodrv; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct mdio_driver *VAR_0)
{
 struct mdio_driver_common *VAR_1 = &VAR_0->mdiodrv;

 FUNC_0(&VAR_1->driver);
}
