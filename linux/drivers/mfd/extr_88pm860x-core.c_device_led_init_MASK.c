
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct pm860x_platform_data {int num_leds; int * led; } ;
struct pm860x_led_pdata {int dummy; } ;
struct pm860x_chip {int dev; } ;
struct TYPE_4__ {int pdata_size; int * platform_data; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,char*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (int ,int ,TYPE_1__*,int,int *,int ,int *) ;

__attribute__((used)) static void FUNC_3(struct pm860x_chip *VAR_1,
          struct pm860x_platform_data *VAR_2)
{
 int VAR_3, VAR_4;

 if (VAR_2 && VAR_2->led) {
  if (VAR_2->num_leds > FUNC_0(VAR_0))
   VAR_2->num_leds = FUNC_0(VAR_0);
  for (VAR_4 = 0; VAR_4 < VAR_2->num_leds; VAR_4++) {
   VAR_0[VAR_4].platform_data = &VAR_2->led[VAR_4];
   VAR_0[VAR_4].pdata_size =
    sizeof(struct pm860x_led_pdata);
  }
 }
 VAR_3 = FUNC_2(VAR_1->dev, 0, VAR_0,
         FUNC_0(VAR_0), ((void*)0), 0, ((void*)0));
 if (VAR_3 < 0) {
  FUNC_1(VAR_1->dev, "Failed to add led subdev\n");
  return;
 }
}
