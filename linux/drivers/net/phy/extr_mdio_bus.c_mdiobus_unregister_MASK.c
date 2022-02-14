
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_bus {scalar_t__ state; int dev; scalar_t__ reset_gpiod; struct mdio_device** mdio_map; } ;
struct mdio_device {int (* device_free ) (struct mdio_device*) ;int (* device_remove ) (struct mdio_device*) ;scalar_t__ reset_gpio; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (struct mdio_device*) ;
 int FUNC_5 (struct mdio_device*) ;

void FUNC_6(struct mii_bus *VAR_3)
{
 struct mdio_device *VAR_4;
 int VAR_5;

 FUNC_0(VAR_3->state != VAR_0);
 VAR_3->state = VAR_1;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  VAR_4 = VAR_3->mdio_map[VAR_5];
  if (!VAR_4)
   continue;

  if (VAR_4->reset_gpio)
   FUNC_2(VAR_4->reset_gpio);

  VAR_4->device_remove(VAR_4);
  VAR_4->device_free(VAR_4);
 }


 if (VAR_3->reset_gpiod)
  FUNC_3(VAR_3->reset_gpiod, 1);

 FUNC_1(&VAR_3->dev);
}
