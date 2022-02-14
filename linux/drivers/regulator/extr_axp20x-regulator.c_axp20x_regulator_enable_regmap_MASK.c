
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {TYPE_1__* constraints; } ;
struct axp20x_dev {int variant; } ;
struct TYPE_2__ {int soft_start; } ;



 int VAR_0 ;
 struct axp20x_dev* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct regulator_dev*) ;
 int FUNC_3 (struct regulator_dev*) ;
 int FUNC_4 (struct regulator_dev*) ;
 int FUNC_5 (struct regulator_dev*,int) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static int FUNC_7(struct regulator_dev *VAR_1)
{
 struct axp20x_dev *VAR_2 = FUNC_0(VAR_1);
 int VAR_3 = FUNC_1(VAR_1);

 switch (VAR_2->variant) {
 case 128:
  if ((VAR_3 == VAR_0) &&
      VAR_1->constraints && VAR_1->constraints->soft_start) {
   int VAR_4;
   int VAR_5;
   if (FUNC_4(VAR_1))
    break;

   VAR_4 = FUNC_3(VAR_1);
   if (VAR_4 < 0)
    return VAR_4;

   if (VAR_4 == 0)
    break;

   VAR_5 = FUNC_5(VAR_1, 0x00);





   FUNC_6(1000, 5000);
   VAR_5 |= FUNC_2(VAR_1);
   VAR_5 |= FUNC_5(VAR_1, VAR_4);

   return VAR_5;
  }
  break;
 default:

  break;
 }

 return FUNC_2(VAR_1);
}
