
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
 int FUNC_1 (struct spmi_regulator*,int ,int*,int) ;

__attribute__((used)) static int
FUNC_2(struct regulator_dev *VAR_2, bool *VAR_3)
{
 struct spmi_regulator *VAR_4 = FUNC_0(VAR_2);
 u8 VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_4, VAR_1, &VAR_5, 1);
 *VAR_3 = VAR_5 & VAR_0;

 return VAR_6;
}
