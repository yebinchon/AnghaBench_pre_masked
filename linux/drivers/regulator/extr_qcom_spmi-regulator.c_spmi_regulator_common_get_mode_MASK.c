
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spmi_regulator {int dummy; } ;
struct regulator_dev {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;


 int VAR_3 ;
 struct spmi_regulator* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct spmi_regulator*,int ,int*,int) ;

__attribute__((used)) static unsigned int FUNC_2(struct regulator_dev *VAR_4)
{
 struct spmi_regulator *VAR_5 = FUNC_0(VAR_4);
 u8 VAR_6;

 FUNC_1(VAR_5, VAR_3, &VAR_6, 1);

 VAR_6 &= 128 | 129;

 switch (VAR_6) {
 case 128:
  return VAR_2;
 case 129:
  return VAR_0;
 default:
  return VAR_1;
 }
}
