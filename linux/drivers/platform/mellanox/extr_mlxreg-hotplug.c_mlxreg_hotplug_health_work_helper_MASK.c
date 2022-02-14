
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlxreg_hotplug_priv_data {int dev; int regmap; } ;
struct mlxreg_core_item {int count; int cache; struct mlxreg_core_data* data; } ;
struct mlxreg_core_data {int attached; int mask; scalar_t__ reg; scalar_t__ health_cntr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct mlxreg_hotplug_priv_data*,struct mlxreg_core_data*) ;
 int FUNC_2 (struct mlxreg_hotplug_priv_data*,struct mlxreg_core_data*) ;
 int FUNC_3 (int ,scalar_t__,int *) ;
 int FUNC_4 (int ,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_5(struct mlxreg_hotplug_priv_data *VAR_3,
      struct mlxreg_core_item *VAR_4)
{
 struct mlxreg_core_data *VAR_5 = VAR_4->data;
 u32 VAR_6;
 int VAR_7, VAR_8 = 0;

 for (VAR_7 = 0; VAR_7 < VAR_4->count; VAR_7++, VAR_5++) {

  VAR_8 = FUNC_4(VAR_3->regmap, VAR_5->reg +
       VAR_2, 0);
  if (VAR_8)
   goto out;


  VAR_8 = FUNC_3(VAR_3->regmap, VAR_5->reg, &VAR_6);
  if (VAR_8)
   goto out;

  VAR_6 &= VAR_5->mask;

  if (VAR_4->cache == VAR_6)
   goto ack_event;
  if (VAR_6 == VAR_1) {
   if (!VAR_5->attached) {




    FUNC_1(VAR_3, VAR_5);
    VAR_5->attached = 1;
   }
  } else {
   if (VAR_5->attached) {





    FUNC_2(VAR_3, VAR_5);
    VAR_5->attached = 0;
    VAR_5->health_cntr = 0;
   }
  }
  VAR_4->cache = VAR_6;
ack_event:

  VAR_8 = FUNC_4(VAR_3->regmap, VAR_5->reg +
       VAR_0, 0);
  if (VAR_8)
   goto out;


  VAR_8 = FUNC_4(VAR_3->regmap, VAR_5->reg +
       VAR_2, VAR_5->mask);
  if (VAR_8)
   goto out;
 }

 out:
 if (VAR_8)
  FUNC_0(VAR_3->dev, "Failed to complete workqueue.\n");
}
