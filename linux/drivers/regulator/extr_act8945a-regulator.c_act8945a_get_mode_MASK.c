
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;
struct act8945a_pmic {unsigned int* op_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 struct act8945a_pmic* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*) ;

__attribute__((used)) static unsigned int FUNC_2(struct regulator_dev *VAR_3)
{
 struct act8945a_pmic *VAR_4 = FUNC_0(VAR_3);
 int VAR_5 = FUNC_1(VAR_3);

 if (VAR_5 < VAR_0 || VAR_5 >= VAR_1)
  return -VAR_2;

 return VAR_4->op_mode[VAR_5];
}
