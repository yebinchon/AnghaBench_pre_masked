
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxreg_hotplug_priv_data {int regmap; int dwork_irq; int irq; TYPE_1__* pdev; } ;
struct mlxreg_core_item {int count; struct mlxreg_core_data* data; } ;
struct mlxreg_core_hotplug_platform_data {int counter; scalar_t__ cell; scalar_t__ cell_low; struct mlxreg_core_item* items; } ;
struct mlxreg_core_data {scalar_t__ reg; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 struct mlxreg_core_hotplug_platform_data* FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mlxreg_hotplug_priv_data*,struct mlxreg_core_data*) ;
 int FUNC_4 (int ,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_5(struct mlxreg_hotplug_priv_data *VAR_3)
{
 struct mlxreg_core_hotplug_platform_data *VAR_4;
 struct mlxreg_core_item *VAR_5;
 struct mlxreg_core_data *VAR_6;
 int VAR_7, VAR_8, VAR_9;

 VAR_4 = FUNC_1(&VAR_3->pdev->dev);
 VAR_5 = VAR_4->items;
 FUNC_2(VAR_3->irq);
 FUNC_0(&VAR_3->dwork_irq);


 if (VAR_4->cell_low)
  FUNC_4(VAR_3->regmap, VAR_4->cell_low +
        VAR_0, 0);


 FUNC_4(VAR_3->regmap, VAR_4->cell + VAR_0,
       0);


 for (VAR_8 = 0; VAR_8 < VAR_4->counter; VAR_8++, VAR_5++) {
  VAR_6 = VAR_5->data;

  FUNC_4(VAR_3->regmap, VAR_6->reg + VAR_2,
        0);

  FUNC_4(VAR_3->regmap, VAR_6->reg +
        VAR_1, 0);


  VAR_7 = VAR_5->count;
  for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++, VAR_6++)
   FUNC_3(VAR_3, VAR_6);
 }
}
