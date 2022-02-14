
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct spmi_regulator {int dummy; } ;
struct regulator_dev {int dummy; } ;


 int VAR_0 ;
 struct spmi_regulator* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct spmi_regulator*,int ,unsigned int*,int) ;

__attribute__((used)) static int FUNC_2(struct regulator_dev *VAR_1,
         unsigned VAR_2)
{
 struct spmi_regulator *VAR_3 = FUNC_0(VAR_1);
 u8 VAR_4 = VAR_2;





 return FUNC_1(VAR_3, VAR_0, &VAR_4, 1);
}
