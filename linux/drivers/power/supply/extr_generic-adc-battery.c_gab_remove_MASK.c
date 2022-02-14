
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct gab_platform_data {int gpio_charge_finished; } ;
struct TYPE_2__ {int properties; } ;
struct gab {int bat_work; TYPE_1__ psy_desc; scalar_t__* channel; int psy; struct gab_platform_data* pdata; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct gab*) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ) ;
 struct gab* FUNC_8 (struct platform_device*) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_1)
{
 int VAR_2;
 struct gab *VAR_3 = FUNC_8(VAR_1);
 struct gab_platform_data *VAR_4 = VAR_3->pdata;

 FUNC_9(VAR_3->psy);

 if (FUNC_4(VAR_4->gpio_charge_finished)) {
  FUNC_2(FUNC_5(VAR_4->gpio_charge_finished), VAR_3);
  FUNC_3(VAR_4->gpio_charge_finished);
 }

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++) {
  if (VAR_3->channel[VAR_2])
   FUNC_6(VAR_3->channel[VAR_2]);
 }

 FUNC_7(VAR_3->psy_desc.properties);
 FUNC_1(&VAR_3->bat_work);
 return 0;
}
