
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
struct mdio_driver {TYPE_1__ mdiodrv; } ;
struct mdio_device {int modalias; } ;
struct device_driver {int name; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 struct mdio_device* FUNC_1 (struct device*) ;
 struct mdio_driver* FUNC_2 (struct device_driver*) ;

int FUNC_3(struct device *VAR_1, struct device_driver *VAR_2)
{
 struct mdio_device *VAR_3 = FUNC_1(VAR_1);
 struct mdio_driver *VAR_4 = FUNC_2(VAR_2);

 if (VAR_4->mdiodrv.flags & VAR_0)
  return 0;

 return FUNC_0(VAR_3->modalias, VAR_2->name) == 0;
}
