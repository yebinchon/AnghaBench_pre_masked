
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;
struct palmas_pmic {unsigned int* current_reg_mode; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;



 struct palmas_pmic* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*) ;

__attribute__((used)) static unsigned int FUNC_2(struct regulator_dev *VAR_4)
{
 struct palmas_pmic *VAR_5 = FUNC_0(VAR_4);
 int VAR_6 = FUNC_1(VAR_4);
 unsigned int VAR_7;

 VAR_7 = VAR_5->current_reg_mode[VAR_6] & VAR_0;

 switch (VAR_7) {
 case 129:
  return VAR_3;
 case 130:
  return VAR_2;
 case 128:
  return VAR_1;
 }

 return 0;
}
