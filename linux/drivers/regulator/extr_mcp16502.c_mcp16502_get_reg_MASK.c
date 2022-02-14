
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_1 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_2(struct regulator_dev *VAR_4, int VAR_5)
{
 int VAR_6 = FUNC_0(FUNC_1(VAR_4));

 switch (VAR_5) {
 case 130:
  return VAR_6 + VAR_1;
 case 128:
  return VAR_6 + VAR_3;
 case 129:
  return VAR_6 + VAR_2;
 default:
  return -VAR_0;
 }
}
