
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spmi_regulator {int dummy; } ;
struct regulator_dev {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 struct spmi_regulator* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct spmi_regulator*,int ,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct regulator_dev *VAR_2)
{
 struct spmi_regulator *VAR_3 = FUNC_0(VAR_2);
 unsigned int VAR_4 = VAR_0;

 return FUNC_1(VAR_3, VAR_1,
         VAR_4, VAR_4);
}
