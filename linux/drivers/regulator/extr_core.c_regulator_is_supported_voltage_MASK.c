
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct regulator_dev {TYPE_2__* constraints; TYPE_1__* desc; } ;
struct regulator {struct regulator_dev* rdev; } ;
struct TYPE_4__ {int min_uV; int max_uV; } ;
struct TYPE_3__ {scalar_t__ continuous_voltage_range; } ;


 int VAR_0 ;
 int FUNC_0 (struct regulator*) ;
 int FUNC_1 (struct regulator*) ;
 int FUNC_2 (struct regulator*,int) ;
 int FUNC_3 (struct regulator_dev*,int ) ;

int FUNC_4(struct regulator *VAR_1,
       int VAR_2, int VAR_3)
{
 struct regulator_dev *VAR_4 = VAR_1->rdev;
 int VAR_5, VAR_6, VAR_7;


 if (!FUNC_3(VAR_4, VAR_0)) {
  VAR_7 = FUNC_1(VAR_1);
  if (VAR_7 >= 0)
   return VAR_2 <= VAR_7 && VAR_7 <= VAR_3;
  else
   return VAR_7;
 }


 if (VAR_4->desc->continuous_voltage_range)
  return VAR_2 >= VAR_4->constraints->min_uV &&
    VAR_3 <= VAR_4->constraints->max_uV;

 VAR_7 = FUNC_0(VAR_1);
 if (VAR_7 < 0)
  return 0;
 VAR_6 = VAR_7;

 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
  VAR_7 = FUNC_2(VAR_1, VAR_5);

  if (VAR_7 >= VAR_2 && VAR_7 <= VAR_3)
   return 1;
 }

 return 0;
}
