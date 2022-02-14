
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct resource {int start; } ;
struct TYPE_4__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct exynos_tmu_data {scalar_t__ id; scalar_t__ irq; int soc; int ntrip; int gain; int reference_voltage; int efuse_value; int min_efuse_value; int max_efuse_value; void* base_second; int cal_type; void* tmu_clear_irqs; void* tmu_set_emulation; void* tmu_read; void* tmu_control; int tmu_initialize; int tmu_set_trip_hyst; int tmu_set_trip_temp; void* base; } ;
typedef enum soc_type { ____Placeholder_soc_type } soc_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 void* FUNC_1 (TYPE_1__*,int ,int ) ;
 void* VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 void* VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 void* VAR_21 ;
 int VAR_22 ;
 void* VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int,struct resource*) ;
 scalar_t__ FUNC_4 (int ,char*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 struct exynos_tmu_data* FUNC_6 (struct platform_device*) ;
 int FUNC_7 (struct resource*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_26)
{
 struct exynos_tmu_data *VAR_27 = FUNC_6(VAR_26);
 struct resource VAR_28;

 if (!VAR_27 || !VAR_26->dev.of_node)
  return -VAR_2;

 VAR_27->id = FUNC_4(VAR_26->dev.of_node, "tmuctrl");
 if (VAR_27->id < 0)
  VAR_27->id = 0;

 VAR_27->irq = FUNC_2(VAR_26->dev.of_node, 0);
 if (VAR_27->irq <= 0) {
  FUNC_0(&VAR_26->dev, "failed to get IRQ\n");
  return -VAR_2;
 }

 if (FUNC_3(VAR_26->dev.of_node, 0, &VAR_28)) {
  FUNC_0(&VAR_26->dev, "failed to get Resource 0\n");
  return -VAR_2;
 }

 VAR_27->base = FUNC_1(&VAR_26->dev, VAR_28.start, FUNC_7(&VAR_28));
 if (!VAR_27->base) {
  FUNC_0(&VAR_26->dev, "Failed to ioremap memory\n");
  return -VAR_0;
 }

 VAR_27->soc = (enum soc_type)FUNC_5(&VAR_26->dev);

 switch (VAR_27->soc) {
 case 135:
  VAR_27->tmu_set_trip_temp = VAR_11;
  VAR_27->tmu_set_trip_hyst = VAR_10;
  VAR_27->tmu_initialize = VAR_8;
  VAR_27->tmu_control = VAR_7;
  VAR_27->tmu_read = VAR_9;
  VAR_27->tmu_clear_irqs = VAR_6;
  VAR_27->ntrip = 4;
  VAR_27->gain = 15;
  VAR_27->reference_voltage = 7;
  VAR_27->efuse_value = 55;
  VAR_27->min_efuse_value = 40;
  VAR_27->max_efuse_value = 100;
  break;
 case 136:
 case 134:
 case 133:
 case 132:
 case 131:
 case 130:
  VAR_27->tmu_set_trip_temp = VAR_16;
  VAR_27->tmu_set_trip_hyst = VAR_15;
  VAR_27->tmu_initialize = VAR_12;
  VAR_27->tmu_control = VAR_7;
  VAR_27->tmu_read = VAR_13;
  VAR_27->tmu_set_emulation = VAR_14;
  VAR_27->tmu_clear_irqs = VAR_6;
  VAR_27->ntrip = 4;
  VAR_27->gain = 8;
  VAR_27->reference_voltage = 16;
  VAR_27->efuse_value = 55;
  if (VAR_27->soc != 131 &&
      VAR_27->soc != 130)
   VAR_27->min_efuse_value = 40;
  else
   VAR_27->min_efuse_value = 0;
  VAR_27->max_efuse_value = 100;
  break;
 case 129:
  VAR_27->tmu_set_trip_temp = VAR_20;
  VAR_27->tmu_set_trip_hyst = VAR_19;
  VAR_27->tmu_initialize = VAR_18;
  VAR_27->tmu_control = VAR_17;
  VAR_27->tmu_read = VAR_13;
  VAR_27->tmu_set_emulation = VAR_14;
  VAR_27->tmu_clear_irqs = VAR_6;
  VAR_27->ntrip = 8;
  VAR_27->gain = 8;
  if (VAR_28.start == VAR_4)
   VAR_27->reference_voltage = 23;
  else
   VAR_27->reference_voltage = 16;
  VAR_27->efuse_value = 75;
  VAR_27->min_efuse_value = 40;
  VAR_27->max_efuse_value = 150;
  break;
 case 128:
  VAR_27->tmu_set_trip_temp = VAR_25;
  VAR_27->tmu_set_trip_hyst = VAR_24;
  VAR_27->tmu_initialize = VAR_22;
  VAR_27->tmu_control = VAR_21;
  VAR_27->tmu_read = VAR_23;
  VAR_27->tmu_set_emulation = VAR_14;
  VAR_27->tmu_clear_irqs = VAR_6;
  VAR_27->ntrip = 8;
  VAR_27->gain = 9;
  VAR_27->reference_voltage = 17;
  VAR_27->efuse_value = 75;
  VAR_27->min_efuse_value = 15;
  VAR_27->max_efuse_value = 100;
  break;
 default:
  FUNC_0(&VAR_26->dev, "Platform not supported\n");
  return -VAR_1;
 }

 VAR_27->cal_type = VAR_5;





 if (VAR_27->soc != 130)
  return 0;

 if (FUNC_3(VAR_26->dev.of_node, 1, &VAR_28)) {
  FUNC_0(&VAR_26->dev, "failed to get Resource 1\n");
  return -VAR_2;
 }

 VAR_27->base_second = FUNC_1(&VAR_26->dev, VAR_28.start,
     FUNC_7(&VAR_28));
 if (!VAR_27->base_second) {
  FUNC_0(&VAR_26->dev, "Failed to ioremap memory\n");
  return -VAR_3;
 }

 return 0;
}
