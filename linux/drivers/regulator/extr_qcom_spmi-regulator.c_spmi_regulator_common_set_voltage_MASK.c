
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spmi_regulator {int dummy; } ;
struct regulator_dev {int dummy; } ;


 int VAR_0 ;
 struct spmi_regulator* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct spmi_regulator*,unsigned int,int *,int *) ;
 int FUNC_2 (struct spmi_regulator*,int ,int *,int) ;

__attribute__((used)) static int
FUNC_3(struct regulator_dev *VAR_1, unsigned VAR_2)
{
 struct spmi_regulator *VAR_3 = FUNC_0(VAR_1);
 int VAR_4;
 u8 VAR_5[2];
 u8 VAR_6, VAR_7;

 VAR_4 = FUNC_1(VAR_3, VAR_2, &VAR_6, &VAR_7);
 if (VAR_4)
  return VAR_4;

 VAR_5[0] = VAR_6;
 VAR_5[1] = VAR_7;
 return FUNC_2(VAR_3, VAR_0, VAR_5, 2);
}
