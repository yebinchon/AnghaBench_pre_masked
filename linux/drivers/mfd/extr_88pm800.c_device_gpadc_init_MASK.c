
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct pm80x_subchip {struct regmap* regmap_gpadc; } ;
struct pm80x_platform_data {scalar_t__ batt_det; } ;
struct pm80x_chip {int dev; struct pm80x_subchip* subchip; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct regmap*,int ,int,int) ;

__attribute__((used)) static int FUNC_3(struct pm80x_chip *VAR_13,
           struct pm80x_platform_data *VAR_14)
{
 struct pm80x_subchip *VAR_15 = VAR_13->subchip;
 struct regmap *VAR_16 = VAR_15->regmap_gpadc;
 int VAR_17 = 0, VAR_18 = 0, VAR_19 = 0;

 if (!VAR_16) {
  FUNC_1(VAR_13->dev,
    "Warning: gpadc regmap is not available!\n");
  return -VAR_0;
 }




 VAR_19 = FUNC_2(VAR_16,
     VAR_7,
     VAR_8,
     VAR_8);
 if (VAR_19 < 0)
  goto out;







 VAR_19 = FUNC_2(VAR_16, VAR_5,
     VAR_10, VAR_10);
 if (VAR_19 < 0)
  goto out;
 VAR_19 = FUNC_2(VAR_16, VAR_6,
     (VAR_11 | VAR_12),
     (VAR_11 | VAR_12));
 if (VAR_19 < 0)
  goto out;







 VAR_18 = (VAR_1 | VAR_2 |
  VAR_3 | VAR_4);

 if (VAR_14 && (VAR_14->batt_det == 0))
  VAR_17 = (VAR_1 | VAR_2 |
   VAR_3 | VAR_4);
 else
  VAR_17 = (VAR_1 | VAR_3 |
   VAR_4);

 VAR_19 = FUNC_2(VAR_16, VAR_9, VAR_18, VAR_17);
 if (VAR_19 < 0)
  goto out;

 FUNC_0(VAR_13->dev, "pm800 device_gpadc_init: Done\n");
 return 0;

out:
 FUNC_0(VAR_13->dev, "pm800 device_gpadc_init: Failed!\n");
 return VAR_19;
}
