
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spmi_regulator {int hpm_min_load; } ;
struct regulator_dev {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 struct spmi_regulator* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*,unsigned int) ;

__attribute__((used)) static int
FUNC_2(struct regulator_dev *VAR_2, int VAR_3)
{
 struct spmi_regulator *VAR_4 = FUNC_0(VAR_2);
 unsigned int VAR_5;

 if (VAR_3 >= VAR_4->hpm_min_load)
  VAR_5 = VAR_1;
 else
  VAR_5 = VAR_0;

 return FUNC_1(VAR_2, VAR_5);
}
