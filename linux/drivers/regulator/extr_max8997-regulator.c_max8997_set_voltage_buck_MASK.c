
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct voltage_map_desc {scalar_t__ min; int step; scalar_t__ max; } ;
struct regulator_dev {int dev; } ;
struct max8997_data {int ignore_gpiodvs_side_effect; int buck125_gpioindex; int buck5_gpiodvs; int buck2_gpiodvs; int buck1_gpiodvs; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (struct regulator_dev*,int,int*) ;
 int FUNC_2 (struct voltage_map_desc const*,int,int) ;
 int FUNC_3 (struct max8997_data*) ;
 int FUNC_4 (struct regulator_dev*,int,int,unsigned int*) ;
 struct max8997_data* FUNC_5 (struct regulator_dev*) ;
 int FUNC_6 (struct regulator_dev*) ;
 struct voltage_map_desc** VAR_3 ;

__attribute__((used)) static int FUNC_7(struct regulator_dev *VAR_4,
  int VAR_5, int VAR_6, unsigned *VAR_7)
{
 struct max8997_data *VAR_8 = FUNC_5(VAR_4);
 int VAR_9 = FUNC_6(VAR_4);
 const struct voltage_map_desc *VAR_10;
 int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
 bool VAR_17 = 0;

 if (VAR_9 < 130 || VAR_9 > VAR_2)
  return -VAR_0;

 switch (VAR_9) {
 case 130:
  if (VAR_8->buck1_gpiodvs)
   VAR_17 = 1;
  break;
 case 129:
  if (VAR_8->buck2_gpiodvs)
   VAR_17 = 1;
  break;
 case 128:
  if (VAR_8->buck5_gpiodvs)
   VAR_17 = 1;
  break;
 }

 if (!VAR_17)
  return FUNC_4(VAR_4, VAR_5, VAR_6,
      VAR_7);

 VAR_10 = VAR_3[VAR_9];
 VAR_11 = FUNC_2(VAR_10, VAR_5, VAR_6);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_16 = VAR_1;
 VAR_15 = -1;
 VAR_14 = -1;
 do {
  VAR_13 = FUNC_1(VAR_4, VAR_11, &VAR_12);
  if (VAR_13 == 0)
   goto out;

  if (VAR_16 > VAR_13) {
   VAR_15 = VAR_12;
   VAR_14 = VAR_11;
   VAR_16 = VAR_13;
  }

  VAR_11++;
 } while (VAR_10->min + VAR_10->step * VAR_11 <= VAR_10->max);

 VAR_12 = VAR_15;
 VAR_11 = VAR_14;

 if (VAR_8->ignore_gpiodvs_side_effect == 0)
  return -VAR_0;

 FUNC_0(&VAR_4->dev,
  "MAX8997 GPIO-DVS Side Effect Warning: GPIO SET:  %d -> %d\n",
  VAR_8->buck125_gpioindex, VAR_15);

out:
 if (VAR_12 < 0 || VAR_11 < 0)
  return -VAR_0;

 VAR_8->buck125_gpioindex = VAR_12;
 FUNC_3(VAR_8);
 *VAR_7 = VAR_11;

 return 0;
}
