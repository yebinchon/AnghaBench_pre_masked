
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {TYPE_1__* constraints; } ;
struct TYPE_2__ {unsigned int valid_modes_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int FUNC_0 (struct regulator_dev*,char*,...) ;
 int FUNC_1 (struct regulator_dev*,int ) ;

__attribute__((used)) static int FUNC_2(struct regulator_dev *VAR_3,
        unsigned int *VAR_4)
{
 switch (*VAR_4) {
 case 131:
 case 129:
 case 130:
 case 128:
  break;
 default:
  FUNC_0(VAR_3, "invalid mode %x specified\n", *VAR_4);
  return -VAR_0;
 }

 if (!FUNC_1(VAR_3, VAR_2)) {
  FUNC_0(VAR_3, "mode operation not allowed\n");
  return -VAR_1;
 }




 while (*VAR_4) {
  if (VAR_3->constraints->valid_modes_mask & *VAR_4)
   return 0;
  *VAR_4 /= 2;
 }

 return -VAR_0;
}
