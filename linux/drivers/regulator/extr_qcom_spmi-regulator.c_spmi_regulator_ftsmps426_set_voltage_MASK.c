
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spmi_regulator {int dummy; } ;
struct regulator_dev {int dummy; } ;


 int VAR_0 ;
 struct spmi_regulator* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*,unsigned int) ;
 int FUNC_2 (struct spmi_regulator*,int ,int*,int) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_1,
           unsigned VAR_2)
{
 struct spmi_regulator *VAR_3 = FUNC_0(VAR_1);
 u8 VAR_4[2];
 int VAR_5;

 VAR_5 = FUNC_1(VAR_1, VAR_2) / 1000;

 VAR_4[0] = VAR_5 & 0xff;
 VAR_4[1] = VAR_5 >> 8;
 return FUNC_2(VAR_3, VAR_0, VAR_4, 2);
}
