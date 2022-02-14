
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
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct spmi_regulator* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct spmi_regulator*,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct regulator_dev *VAR_6, unsigned int VAR_7)
{
 struct spmi_regulator *VAR_8 = FUNC_0(VAR_6);
 u8 VAR_9 = VAR_5;
 u8 VAR_10;

 switch (VAR_7) {
 case 128:
  VAR_10 = VAR_3;
  break;
 case 130:
  VAR_10 = VAR_2;
  break;
 case 129:
  VAR_10 = VAR_4;
  break;
 default:
  return -VAR_0;
 }

 return FUNC_1(VAR_8, VAR_1, VAR_10, VAR_9);
}
