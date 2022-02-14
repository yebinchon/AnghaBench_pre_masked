
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twlreg_info {int id; } ;
struct regulator_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int ,int ,int ) ;


 int VAR_2 ;
 int VAR_3 ;
 struct twlreg_info* FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (unsigned int) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_4, unsigned VAR_5)
{
 struct twlreg_info *VAR_6 = FUNC_1(VAR_4);
 unsigned VAR_7;


 switch (VAR_5) {
 case 129:
  VAR_7 = FUNC_0(VAR_0, VAR_6->id, VAR_2);
  break;
 case 128:
  VAR_7 = FUNC_0(VAR_0, VAR_6->id, VAR_3);
  break;
 default:
  return -VAR_1;
 }

 return FUNC_2(VAR_7);
}
