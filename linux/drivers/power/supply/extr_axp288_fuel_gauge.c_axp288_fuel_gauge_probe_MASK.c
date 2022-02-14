
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct power_supply_config {struct axp288_fg_info* drv_data; } ;
struct TYPE_5__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct axp288_fg_info {int max_volt; int * iio_channel; int bat; int lock; int status; int regmap_irqc; int regmap; struct platform_device* pdev; } ;
struct axp20x_dev {int regmap_irqc; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

 int VAR_11 ;
 int FUNC_2 (int ) ;

 int VAR_12 ;
 int FUNC_3 (TYPE_1__*,char*,char const* const,int) ;
 int FUNC_4 (TYPE_1__*,char*,...) ;
 struct axp20x_dev* FUNC_5 (int ) ;
 struct axp288_fg_info* FUNC_6 (TYPE_1__*,int,int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct axp288_fg_info*) ;
 int VAR_13 ;
 int FUNC_9 (struct axp288_fg_info*) ;
 int FUNC_10 (struct axp288_fg_info*,int ) ;
 int FUNC_11 (int *,char const* const) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct platform_device*,struct axp288_fg_info*) ;
 int FUNC_15 (TYPE_1__*,int *,struct power_supply_config*) ;
 int FUNC_16 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_17(struct platform_device *VAR_14)
{
 int VAR_15, VAR_16 = 0;
 struct axp288_fg_info *VAR_17;
 struct axp20x_dev *VAR_18 = FUNC_5(VAR_14->dev.parent);
 struct power_supply_config VAR_19 = {};
 static const char * const VAR_20[] = {
  [135] = "axp288-batt-temp",
  [129] = "axp288-pmic-temp",
  [128] = "axp288-system-temp",
  [137] = "axp288-chrg-curr",
  [136] = "axp288-chrg-d-curr",
  [134] = "axp288-batt-volt",
 };
 unsigned int VAR_21;

 if (FUNC_7(VAR_12))
  return -VAR_5;





 VAR_16 = FUNC_16(VAR_18->regmap, VAR_0, &VAR_21);
 if (VAR_16 < 0)
  return VAR_16;
 if (VAR_21 == 0)
  return -VAR_5;

 VAR_17 = FUNC_6(&VAR_14->dev, sizeof(*VAR_17), VAR_9);
 if (!VAR_17)
  return -VAR_6;

 VAR_17->pdev = VAR_14;
 VAR_17->regmap = VAR_18->regmap;
 VAR_17->regmap_irqc = VAR_18->regmap_irqc;
 VAR_17->status = VAR_11;

 FUNC_14(VAR_14, VAR_17);

 FUNC_13(&VAR_17->lock);

 for (VAR_15 = 0; VAR_15 < VAR_10; VAR_15++) {





  VAR_17->iio_channel[VAR_15] =
   FUNC_11(((void*)0), VAR_20[VAR_15]);
  if (FUNC_0(VAR_17->iio_channel[VAR_15])) {
   VAR_16 = FUNC_2(VAR_17->iio_channel[VAR_15]);
   FUNC_3(&VAR_14->dev, "error getting iiochan %s: %d\n",
    VAR_20[VAR_15], VAR_16);

   if (VAR_16 == -VAR_5)
    VAR_16 = -VAR_7;

   goto out_free_iio_chan;
  }
 }

 VAR_16 = FUNC_10(VAR_17, VAR_2);
 if (VAR_16 < 0)
  goto out_free_iio_chan;

 if (!(VAR_16 & VAR_8)) {
  FUNC_4(&VAR_14->dev, "axp288 not configured by firmware\n");
  VAR_16 = -VAR_5;
  goto out_free_iio_chan;
 }

 VAR_16 = FUNC_10(VAR_17, VAR_1);
 if (VAR_16 < 0)
  goto out_free_iio_chan;
 switch ((VAR_16 & VAR_4) >> VAR_3) {
 case 133:
  VAR_17->max_volt = 4100;
  break;
 case 132:
  VAR_17->max_volt = 4150;
  break;
 case 131:
  VAR_17->max_volt = 4200;
  break;
 case 130:
  VAR_17->max_volt = 4350;
  break;
 }

 VAR_19.drv_data = VAR_17;
 VAR_17->bat = FUNC_15(&VAR_14->dev, &VAR_13, &VAR_19);
 if (FUNC_0(VAR_17->bat)) {
  VAR_16 = FUNC_2(VAR_17->bat);
  FUNC_4(&VAR_14->dev, "failed to register battery: %d\n", VAR_16);
  goto out_free_iio_chan;
 }

 FUNC_8(VAR_17);
 FUNC_9(VAR_17);

 return 0;

out_free_iio_chan:
 for (VAR_15 = 0; VAR_15 < VAR_10; VAR_15++)
  if (!FUNC_1(VAR_17->iio_channel[VAR_15]))
   FUNC_12(VAR_17->iio_channel[VAR_15]);

 return VAR_16;
}
