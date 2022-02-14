
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twlreg_info {int dummy; } ;
struct regulator_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;




 int VAR_3 ;
 int VAR_4 ;
 struct twlreg_info* FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct regulator_dev*) ;
 int FUNC_3 (struct twlreg_info*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct regulator_dev *VAR_5)
{
 struct twlreg_info *VAR_6 = FUNC_1(VAR_5);
 int VAR_7;

 VAR_7 = FUNC_2(VAR_5);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_7 = FUNC_3(VAR_6, VAR_3, VAR_4);

 switch (FUNC_0(VAR_7)) {
 case 129:
  return VAR_0;

 case 128:
  return VAR_2;

 case 131:
 case 130:
 default:
  break;
 }

 return VAR_1;
}
