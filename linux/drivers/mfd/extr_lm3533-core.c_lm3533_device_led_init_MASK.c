
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct lm3533_platform_data {int num_leds; int * leds; } ;
struct lm3533 {int have_leds; int dev; } ;
struct TYPE_4__ {int pdata_size; int * platform_data; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,char*) ;
 struct lm3533_platform_data* FUNC_2 (int ) ;
 TYPE_1__* VAR_0 ;
 int FUNC_3 (int ,int ,TYPE_1__*,int,int *,int ,int *) ;

__attribute__((used)) static int FUNC_4(struct lm3533 *VAR_1)
{
 struct lm3533_platform_data *VAR_2 = FUNC_2(VAR_1->dev);
 int VAR_3;
 int VAR_4;

 if (!VAR_2->leds || VAR_2->num_leds == 0)
  return 0;

 if (VAR_2->num_leds > FUNC_0(VAR_0))
  VAR_2->num_leds = FUNC_0(VAR_0);

 for (VAR_3 = 0; VAR_3 < VAR_2->num_leds; ++VAR_3) {
  VAR_0[VAR_3].platform_data = &VAR_2->leds[VAR_3];
  VAR_0[VAR_3].pdata_size = sizeof(VAR_2->leds[VAR_3]);
 }

 VAR_4 = FUNC_3(VAR_1->dev, 0, VAR_0,
         VAR_2->num_leds, ((void*)0), 0, ((void*)0));
 if (VAR_4) {
  FUNC_1(VAR_1->dev, "failed to add LED devices\n");
  return VAR_4;
 }

 VAR_1->have_leds = 1;

 return 0;
}
