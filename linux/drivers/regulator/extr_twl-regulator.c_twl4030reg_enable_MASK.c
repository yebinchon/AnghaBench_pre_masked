
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twlreg_info {int dummy; } ;
struct regulator_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct twlreg_info* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct twlreg_info*,int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_3)
{
 struct twlreg_info *VAR_4 = FUNC_0(VAR_3);
 int VAR_5;
 int VAR_6;

 VAR_5 = FUNC_1(VAR_3);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_5 |= VAR_0;

 VAR_6 = FUNC_2(VAR_4, VAR_1, VAR_2, VAR_5);

 return VAR_6;
}
