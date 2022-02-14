
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct tps6507x_pmic {TYPE_1__** info; } ;
struct regulator_dev {int dummy; } ;
struct TYPE_2__ {int defdcdc_default; } ;


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
 struct tps6507x_pmic* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct tps6507x_pmic*,int) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_11)
{
 struct tps6507x_pmic *VAR_12 = FUNC_0(VAR_11);
 int VAR_13, VAR_14 = FUNC_1(VAR_11);
 u8 VAR_15, VAR_16;

 switch (VAR_14) {
 case 132:
  VAR_15 = VAR_2;
  VAR_16 = VAR_1;
  break;
 case 131:
  if (VAR_12->info[VAR_14]->defdcdc_default)
   VAR_15 = VAR_3;
  else
   VAR_15 = VAR_4;
  VAR_16 = VAR_1;
  break;
 case 130:
  if (VAR_12->info[VAR_14]->defdcdc_default)
   VAR_15 = VAR_5;
  else
   VAR_15 = VAR_6;
  VAR_16 = VAR_1;
  break;
 case 129:
  VAR_15 = VAR_9;
  VAR_16 = VAR_10;
  break;
 case 128:
  VAR_15 = VAR_7;
  VAR_16 = VAR_8;
  break;
 default:
  return -VAR_0;
 }

 VAR_13 = FUNC_2(VAR_12, VAR_15);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_13 &= VAR_16;
 return VAR_13;
}
