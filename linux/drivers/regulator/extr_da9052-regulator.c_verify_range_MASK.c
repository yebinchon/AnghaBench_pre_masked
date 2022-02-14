
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct da9052_regulator_info {int max_uV; int min_uV; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct da9052_regulator_info *VAR_1,
    int VAR_2, int VAR_3)
{
 if (VAR_2 > VAR_1->max_uV || VAR_3 < VAR_1->min_uV)
  return -VAR_0;

 return 0;
}
