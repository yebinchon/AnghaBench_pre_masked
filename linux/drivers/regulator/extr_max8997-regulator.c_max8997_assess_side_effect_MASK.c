
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct regulator_dev {int dummy; } ;
struct max8997_data {int buck1_gpiodvs; int buck2_gpiodvs; int buck5_gpiodvs; size_t buck125_gpioindex; scalar_t__* buck5_vol; scalar_t__* buck2_vol; scalar_t__* buck1_vol; } ;


 int VAR_0 ;
 int VAR_1 ;



 struct max8997_data* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_2(struct regulator_dev *VAR_2,
  u8 VAR_3, int *VAR_4)
{
 struct max8997_data *VAR_5 = FUNC_0(VAR_2);
 int VAR_6 = FUNC_1(VAR_2);
 u8 *VAR_7[3];
 bool VAR_8[3];
 int VAR_9[8];
 int VAR_10 = VAR_1;
 int VAR_11;

 *VAR_4 = -1;

 switch (VAR_6) {
 case 130:
  VAR_6 = 0;
  break;
 case 129:
  VAR_6 = 1;
  break;
 case 128:
  VAR_6 = 2;
  break;
 default:
  return -VAR_0;
 }

 VAR_7[0] = VAR_5->buck1_vol;
 VAR_7[1] = VAR_5->buck2_vol;
 VAR_7[2] = VAR_5->buck5_vol;
 VAR_8[0] = VAR_5->buck1_gpiodvs;
 VAR_8[1] = VAR_5->buck2_gpiodvs;
 VAR_8[2] = VAR_5->buck5_gpiodvs;

 for (VAR_11 = 0; VAR_11 < 8; VAR_11++) {
  int VAR_12;

  if (VAR_3 != (VAR_7[VAR_6])[VAR_11]) {
   VAR_9[VAR_11] = -1;
   continue;
  }

  VAR_9[VAR_11] = 0;
  for (VAR_12 = 0; VAR_12 < 3; VAR_12++) {
   int VAR_13;

   if (VAR_12 == VAR_6)
    continue;
   if (VAR_8[VAR_12] == 0)
    continue;
   VAR_13 = (VAR_7[VAR_12])[VAR_11] -
    (VAR_7[VAR_12])[VAR_5->buck125_gpioindex];
   if (VAR_13 > 0)
    VAR_9[VAR_11] += VAR_13;
   else if (VAR_13 < 0)
    VAR_9[VAR_11] -= VAR_13;
  }
  if (VAR_9[VAR_11] == 0) {
   *VAR_4 = VAR_11;
   return 0;
  }
  if (VAR_9[VAR_11] < VAR_10) {
   VAR_10 = VAR_9[VAR_11];
   *VAR_4 = VAR_11;
  }
 }

 if (*VAR_4 == -1)
  return -VAR_0;

 return VAR_9[*VAR_4];
}
