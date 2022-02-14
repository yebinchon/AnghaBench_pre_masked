
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct thermal_zone_device {int dummy; } ;
struct regmap {int dummy; } ;
struct pmic_thermal_data {int num_maps; TYPE_3__* maps; } ;
struct TYPE_5__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct intel_soc_pmic {struct regmap* regmap; } ;
typedef int irqreturn_t ;
struct TYPE_8__ {scalar_t__ driver_data; } ;
struct TYPE_7__ {int num_trips; int handle; TYPE_2__* trip_config; } ;
struct TYPE_6__ {int irq_mask; int evt_stat; int irq_reg; } ;


 int VAR_0 ;
 int FUNC_0 (struct thermal_zone_device*) ;
 int VAR_1 ;
 struct intel_soc_pmic* FUNC_1 (int ) ;
 TYPE_4__* FUNC_2 (struct platform_device*) ;
 scalar_t__ FUNC_3 (struct regmap*,int ,int*) ;
 int FUNC_4 (struct regmap*,int ,int) ;
 int FUNC_5 (struct thermal_zone_device*,int ) ;
 struct thermal_zone_device* FUNC_6 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_2, void *VAR_3)
{
 struct platform_device *VAR_4 = VAR_3;
 struct thermal_zone_device *VAR_5;
 struct pmic_thermal_data *VAR_6;
 struct intel_soc_pmic *VAR_7;
 struct regmap *VAR_8;
 u8 VAR_9, VAR_10, VAR_11;
 u16 VAR_12, VAR_13;
 int VAR_14, VAR_15, VAR_16;

 VAR_7 = FUNC_1(VAR_4->dev.parent);
 VAR_8 = VAR_7->regmap;
 VAR_6 = (struct pmic_thermal_data *)
  FUNC_2(VAR_4)->driver_data;


 for (VAR_14 = 0; VAR_14 < VAR_6->num_maps; VAR_14++) {
  for (VAR_15 = 0; VAR_15 < VAR_6->maps[VAR_14].num_trips; VAR_15++) {
   VAR_12 = VAR_6->maps[VAR_14].trip_config[VAR_15].irq_reg;
   VAR_10 = VAR_6->maps[VAR_14].trip_config[VAR_15].irq_mask;




   if (FUNC_3(VAR_8, VAR_12, &VAR_16))
    return VAR_0;

   VAR_9 = (u8)VAR_16;
   VAR_11 = ((u8)VAR_16 & VAR_10);

   if (!VAR_11)
    continue;





   VAR_13 = VAR_6->maps[VAR_14].trip_config[VAR_15].evt_stat;
   if (FUNC_3(VAR_8, VAR_13, &VAR_16))
    return VAR_0;

   VAR_5 = FUNC_6(VAR_6->maps[VAR_14].handle);
   if (!FUNC_0(VAR_5))
    FUNC_5(VAR_5,
      VAR_1);


   FUNC_4(VAR_8, VAR_12, VAR_9 & VAR_10);
  }
 }

 return VAR_0;
}
