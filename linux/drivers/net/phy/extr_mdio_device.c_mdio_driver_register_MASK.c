
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; int remove; int probe; int * bus; } ;
struct mdio_driver_common {TYPE_1__ driver; } ;
struct mdio_driver {struct mdio_driver_common mdiodrv; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,int ,int) ;

int FUNC_3(struct mdio_driver *VAR_3)
{
 struct mdio_driver_common *VAR_4 = &VAR_3->mdiodrv;
 int VAR_5;

 FUNC_1("mdio_driver_register: %s\n", VAR_4->driver.name);

 VAR_4->driver.bus = &VAR_0;
 VAR_4->driver.probe = VAR_1;
 VAR_4->driver.remove = VAR_2;

 VAR_5 = FUNC_0(&VAR_4->driver);
 if (VAR_5) {
  FUNC_2("%s: Error %d in registering driver\n",
         VAR_4->driver.name, VAR_5);

  return VAR_5;
 }

 return 0;
}
