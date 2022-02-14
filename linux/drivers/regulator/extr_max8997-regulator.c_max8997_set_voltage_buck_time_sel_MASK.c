
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct voltage_map_desc {unsigned int step; } ;
struct regulator_dev {int dummy; } ;
struct max8997_data {int ramp_delay; int buck5_gpiodvs; int buck2_gpiodvs; int buck1_gpiodvs; } ;


 int FUNC_0 (unsigned int,int) ;




 struct max8997_data* FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct regulator_dev*) ;
 struct voltage_map_desc** VAR_0 ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_1,
      unsigned int VAR_2,
      unsigned int VAR_3)
{
 struct max8997_data *VAR_4 = FUNC_1(VAR_1);
 int VAR_5 = FUNC_2(VAR_1);
 const struct voltage_map_desc *VAR_6 = VAR_0[VAR_5];


 if (VAR_2 >= VAR_3)
  return 0;


 switch (VAR_5) {
 case 131:
  if (VAR_4->buck1_gpiodvs)
   return 0;
  break;
 case 130:
  if (VAR_4->buck2_gpiodvs)
   return 0;
  break;
 case 128:
  if (VAR_4->buck5_gpiodvs)
   return 0;
  break;
 }

 switch (VAR_5) {
 case 131:
 case 130:
 case 129:
 case 128:
  return FUNC_0(VAR_6->step * (VAR_3 - VAR_2),
        VAR_4->ramp_delay * 1000);
 }

 return 0;
}
