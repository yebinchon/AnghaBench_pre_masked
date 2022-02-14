
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct regulator_dev {int dummy; } ;
struct max8660 {int* shadow_regs; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 struct max8660* FUNC_0 (struct regulator_dev*) ;
 scalar_t__ FUNC_1 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_2(struct regulator_dev *VAR_2)
{
 struct max8660 *VAR_3 = FUNC_0(VAR_2);
 u8 VAR_4 = VAR_3->shadow_regs[VAR_0];
 u8 VAR_5 = (FUNC_1(VAR_2) == VAR_1) ? 1 : 4;

 return !!(VAR_4 & VAR_5);
}
