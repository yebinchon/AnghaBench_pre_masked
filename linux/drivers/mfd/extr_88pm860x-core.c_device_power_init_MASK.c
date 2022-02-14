
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct regulator_init_data {int dummy; } ;
struct pm860x_power_pdata {int dummy; } ;
struct pm860x_platform_data {TYPE_1__* chg_desc; TYPE_1__* power; } ;
struct pm860x_chip {int dev; int irq_base; } ;
struct TYPE_5__ {int pdata_size; TYPE_1__* platform_data; int * resources; void* num_resources; } ;
struct TYPE_4__ {void* num_charger_regulators; int * charger_regulators; } ;


 void* FUNC_0 (int *) ;
 int * VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ,TYPE_2__*,int,int *,int ,int *) ;
 TYPE_2__* VAR_3 ;
 TYPE_1__ VAR_4 ;

__attribute__((used)) static void FUNC_3(struct pm860x_chip *VAR_5,
     struct pm860x_platform_data *VAR_6)
{
 int VAR_7;

 if (VAR_6 == ((void*)0))
  return;

 VAR_3[0].platform_data = VAR_6->power;
 VAR_3[0].pdata_size = sizeof(struct pm860x_power_pdata);
 VAR_3[0].num_resources = FUNC_0(VAR_0);
 VAR_3[0].resources = &VAR_0[0],
 VAR_7 = FUNC_2(VAR_5->dev, 0, &VAR_3[0], 1,
         &VAR_0[0], VAR_5->irq_base, ((void*)0));
 if (VAR_7 < 0)
  FUNC_1(VAR_5->dev, "Failed to add battery subdev\n");

 VAR_3[1].platform_data = VAR_6->power;
 VAR_3[1].pdata_size = sizeof(struct pm860x_power_pdata);
 VAR_3[1].num_resources = FUNC_0(VAR_1);
 VAR_3[1].resources = &VAR_1[0],
 VAR_7 = FUNC_2(VAR_5->dev, 0, &VAR_3[1], 1,
         &VAR_1[0], VAR_5->irq_base, ((void*)0));
 if (VAR_7 < 0)
  FUNC_1(VAR_5->dev, "Failed to add charger subdev\n");

 VAR_3[2].platform_data = &VAR_4;
 VAR_3[2].pdata_size = sizeof(struct regulator_init_data);
 VAR_7 = FUNC_2(VAR_5->dev, 0, &VAR_3[2], 1,
         ((void*)0), VAR_5->irq_base, ((void*)0));
 if (VAR_7 < 0)
  FUNC_1(VAR_5->dev, "Failed to add preg subdev\n");

 if (VAR_6->chg_desc) {
  VAR_6->chg_desc->charger_regulators =
   &VAR_2[0];
  VAR_6->chg_desc->num_charger_regulators =
   FUNC_0(VAR_2),
  VAR_3[3].platform_data = VAR_6->chg_desc;
  VAR_3[3].pdata_size = sizeof(*VAR_6->chg_desc);
  VAR_7 = FUNC_2(VAR_5->dev, 0, &VAR_3[3], 1,
          ((void*)0), VAR_5->irq_base, ((void*)0));
  if (VAR_7 < 0)
   FUNC_1(VAR_5->dev, "Failed to add chg-manager subdev\n");
 }
}
