
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_client {int dev; } ;
struct adp8870_bl {TYPE_1__* led; } ;
struct adp8870_backlight_platform_data {int num_leds; } ;
struct TYPE_2__ {int work; int cdev; } ;


 int FUNC_0 (int *) ;
 struct adp8870_backlight_platform_data* FUNC_1 (int *) ;
 struct adp8870_bl* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_0)
{
 struct adp8870_backlight_platform_data *VAR_1 =
  FUNC_1(&VAR_0->dev);
 struct adp8870_bl *VAR_2 = FUNC_2(VAR_0);
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->num_leds; VAR_3++) {
  FUNC_3(&VAR_2->led[VAR_3].cdev);
  FUNC_0(&VAR_2->led[VAR_3].work);
 }

 return 0;
}
