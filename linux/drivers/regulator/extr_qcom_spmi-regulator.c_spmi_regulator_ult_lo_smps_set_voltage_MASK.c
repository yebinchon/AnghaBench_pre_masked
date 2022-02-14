
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spmi_regulator {int dummy; } ;
struct regulator_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct spmi_regulator* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct spmi_regulator*,unsigned int,int*,int*) ;
 int FUNC_2 (struct spmi_regulator*,int ,int,int) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_2,
        unsigned VAR_3)
{
 struct spmi_regulator *VAR_4 = FUNC_0(VAR_2);
 int VAR_5;
 u8 VAR_6, VAR_7;

 VAR_5 = FUNC_1(VAR_4, VAR_3, &VAR_6, &VAR_7);
 if (VAR_5)
  return VAR_5;
 if (VAR_6 == 1)
  VAR_7 |= VAR_1;

 return FUNC_2(VAR_4, VAR_0,
         VAR_7, 0xff);
}
