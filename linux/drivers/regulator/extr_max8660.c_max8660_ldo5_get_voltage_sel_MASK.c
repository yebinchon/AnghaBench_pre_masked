
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct regulator_dev {int dummy; } ;
struct max8660 {int* shadow_regs; } ;


 size_t VAR_0 ;
 struct max8660* FUNC_0 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_1(struct regulator_dev *VAR_1)
{
 struct max8660 *VAR_2 = FUNC_0(VAR_1);

 u8 VAR_3 = VAR_2->shadow_regs[VAR_0];
 return VAR_3;
}
