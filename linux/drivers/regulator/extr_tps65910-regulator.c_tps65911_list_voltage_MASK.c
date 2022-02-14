
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tps65910_reg {TYPE_1__** info; } ;
struct regulator_dev {int dummy; } ;
struct TYPE_2__ {int* voltage_table; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 struct tps65910_reg* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_2(struct regulator_dev *VAR_2, unsigned VAR_3)
{
 struct tps65910_reg *VAR_4 = FUNC_0(VAR_2);
 int VAR_5 = 0, VAR_6 = FUNC_1(VAR_2);

 switch (VAR_6) {
 case 135:
 case 134:
 case 132:

  if (VAR_3 < 5)
   VAR_3 = 0;
  else
   VAR_3 -= 4;

  VAR_5 = 50;
  break;
 case 133:
 case 131:
 case 130:
 case 129:
 case 128:

  if (VAR_3 < 3)
   VAR_3 = 0;
  else
   VAR_3 -= 2;

  VAR_5 = 100;
  break;
 case 136:
  return VAR_4->info[VAR_6]->voltage_table[VAR_3];
 default:
  return -VAR_0;
 }

 return (VAR_1 + VAR_3 * VAR_5) * 1000;
}
