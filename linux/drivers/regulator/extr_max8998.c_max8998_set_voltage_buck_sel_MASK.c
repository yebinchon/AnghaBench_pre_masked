
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct regulator_dev {int dummy; } ;
struct max8998_platform_data {int buck2_set3; int buck_voltage_lock; int buck1_set2; int buck1_set1; } ;
struct max8998_data {unsigned int* buck1_vol; int buck1_idx; unsigned int* buck2_vol; int buck2_idx; int dev; TYPE_1__* iodev; } ;
struct i2c_client {int name; } ;
struct TYPE_2__ {struct i2c_client* i2c; struct max8998_platform_data* pdata; } ;


 int FUNC_0 (unsigned int*) ;
 int VAR_0 ;




 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,char*,unsigned int,...) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct regulator_dev*,int*,int*,int*) ;
 int FUNC_7 (struct i2c_client*,int,unsigned int,int) ;
 int FUNC_8 (struct i2c_client*,int,unsigned int) ;
 struct max8998_data* FUNC_9 (struct regulator_dev*) ;
 int FUNC_10 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_11(struct regulator_dev *VAR_1,
     unsigned VAR_2)
{
 struct max8998_data *VAR_3 = FUNC_9(VAR_1);
 struct max8998_platform_data *VAR_4 = VAR_3->iodev->pdata;
 struct i2c_client *VAR_5 = VAR_3->iodev->i2c;
 int VAR_6 = FUNC_10(VAR_1);
 int VAR_7, VAR_8 = 0, VAR_9, VAR_10, VAR_11;
 static u8 VAR_12;

 VAR_10 = FUNC_6(VAR_1, &VAR_7, &VAR_8, &VAR_9);
 if (VAR_10)
  return VAR_10;

 switch (VAR_6) {
 case 131:
  FUNC_3(VAR_3->dev,
   "BUCK1, selector:%d, buck1_vol1:%d, buck1_vol2:%d\n"
   "buck1_vol3:%d, buck1_vol4:%d\n",
   VAR_2, VAR_3->buck1_vol[0], VAR_3->buck1_vol[1],
   VAR_3->buck1_vol[2], VAR_3->buck1_vol[3]);

  if (FUNC_5(VAR_4->buck1_set1) &&
      FUNC_5(VAR_4->buck1_set2)) {



   for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_3->buck1_vol); VAR_11++) {
    if (VAR_3->buck1_vol[VAR_11] == VAR_2) {
     VAR_3->buck1_idx = VAR_11;
     FUNC_1(VAR_4->buck1_set1,
             VAR_4->buck1_set2, VAR_11);
     goto buck1_exit;
    }
   }

   if (VAR_4->buck_voltage_lock)
    return -VAR_0;


   VAR_3->buck1_idx = (VAR_12 % 2) + 2;
   FUNC_3(VAR_3->dev, "max8998->buck1_idx:%d\n",
    VAR_3->buck1_idx);
   VAR_3->buck1_vol[VAR_3->buck1_idx] = VAR_2;
   VAR_10 = FUNC_6(VAR_1, &VAR_7,
          &VAR_8,
          &VAR_9);
   VAR_10 = FUNC_8(VAR_5, VAR_7, VAR_2);
   FUNC_1(VAR_4->buck1_set1,
           VAR_4->buck1_set2, VAR_3->buck1_idx);
   VAR_12++;
buck1_exit:
   FUNC_3(VAR_3->dev, "%s: SET1:%d, SET2:%d\n",
    VAR_5->name, FUNC_4(VAR_4->buck1_set1),
    FUNC_4(VAR_4->buck1_set2));
   break;
  } else {
   VAR_10 = FUNC_8(VAR_5, VAR_7, VAR_2);
  }
  break;

 case 130:
  FUNC_3(VAR_3->dev,
   "BUCK2, selector:%d buck2_vol1:%d, buck2_vol2:%d\n",
   VAR_2, VAR_3->buck2_vol[0], VAR_3->buck2_vol[1]);
  if (FUNC_5(VAR_4->buck2_set3)) {



   for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_3->buck2_vol); VAR_11++) {
    if (VAR_3->buck2_vol[VAR_11] == VAR_2) {
     VAR_3->buck2_idx = VAR_11;
     FUNC_2(VAR_4->buck2_set3, VAR_11);
     goto buck2_exit;
    }
   }

   if (VAR_4->buck_voltage_lock)
    return -VAR_0;

   FUNC_6(VAR_1,
     &VAR_7, &VAR_8, &VAR_9);
   VAR_10 = FUNC_8(VAR_5, VAR_7, VAR_2);
   VAR_3->buck2_vol[VAR_3->buck2_idx] = VAR_2;
   FUNC_2(VAR_4->buck2_set3, VAR_3->buck2_idx);
buck2_exit:
   FUNC_3(VAR_3->dev, "%s: SET3:%d\n", VAR_5->name,
    FUNC_4(VAR_4->buck2_set3));
  } else {
   VAR_10 = FUNC_8(VAR_5, VAR_7, VAR_2);
  }
  break;

 case 129:
 case 128:
  VAR_10 = FUNC_7(VAR_5, VAR_7, VAR_2<<VAR_8,
      VAR_9<<VAR_8);
  break;
 }

 return VAR_10;
}
