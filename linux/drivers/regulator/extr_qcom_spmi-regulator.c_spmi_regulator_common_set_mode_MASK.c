
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spmi_regulator {int dummy; } ;
struct regulator_dev {int dummy; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct spmi_regulator* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct spmi_regulator*,int ,int,int) ;

__attribute__((used)) static int
FUNC_2(struct regulator_dev *VAR_3, unsigned int VAR_4)
{
 struct spmi_regulator *VAR_5 = FUNC_0(VAR_3);
 u8 VAR_6 = VAR_1 | VAR_0;
 u8 VAR_7;

 switch (VAR_4) {
 case 128:
  VAR_7 = VAR_1;
  break;
 case 129:
  VAR_7 = VAR_0;
  break;
 default:
  VAR_7 = 0;
  break;
 }

 return FUNC_1(VAR_5, VAR_2, VAR_7, VAR_6);
}
