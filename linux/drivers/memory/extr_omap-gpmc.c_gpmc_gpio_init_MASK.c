
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int base; int get; int set; int direction_output; int direction_input; int get_direction; int ngpio; int label; int owner; int parent; } ;
struct gpmc_device {int dev; TYPE_1__ gpio_chip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,TYPE_1__*,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_2(struct gpmc_device *VAR_8)
{
 int VAR_9;

 VAR_8->gpio_chip.parent = VAR_8->dev;
 VAR_8->gpio_chip.owner = VAR_1;
 VAR_8->gpio_chip.label = VAR_0;
 VAR_8->gpio_chip.ngpio = VAR_7;
 VAR_8->gpio_chip.get_direction = VAR_5;
 VAR_8->gpio_chip.direction_input = VAR_2;
 VAR_8->gpio_chip.direction_output = VAR_3;
 VAR_8->gpio_chip.set = VAR_6;
 VAR_8->gpio_chip.get = VAR_4;
 VAR_8->gpio_chip.base = -1;

 VAR_9 = FUNC_1(VAR_8->dev, &VAR_8->gpio_chip, ((void*)0));
 if (VAR_9 < 0) {
  FUNC_0(VAR_8->dev, "could not register gpio chip: %d\n", VAR_9);
  return VAR_9;
 }

 return 0;
}
