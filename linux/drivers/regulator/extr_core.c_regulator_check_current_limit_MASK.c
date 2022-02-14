
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {TYPE_1__* constraints; } ;
struct TYPE_2__ {int max_uA; int min_uA; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct regulator_dev*,char*,...) ;
 int FUNC_2 (struct regulator_dev*,int ) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_3,
     int *VAR_4, int *VAR_5)
{
 FUNC_0(*VAR_4 > *VAR_5);

 if (!FUNC_2(VAR_3, VAR_2)) {
  FUNC_1(VAR_3, "current operation not allowed\n");
  return -VAR_1;
 }

 if (*VAR_5 > VAR_3->constraints->max_uA)
  *VAR_5 = VAR_3->constraints->max_uA;
 if (*VAR_4 < VAR_3->constraints->min_uA)
  *VAR_4 = VAR_3->constraints->min_uA;

 if (*VAR_4 > *VAR_5) {
  FUNC_1(VAR_3, "unsupportable current range: %d-%duA\n",
    *VAR_4, *VAR_5);
  return -VAR_0;
 }

 return 0;
}
