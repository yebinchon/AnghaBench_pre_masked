
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct regulator_dev {int dummy; } ;
struct max8660 {size_t* shadow_regs; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 struct max8660* FUNC_0 (struct regulator_dev*) ;
 scalar_t__ FUNC_1 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_2(struct regulator_dev *VAR_3)
{
 struct max8660 *VAR_4 = FUNC_0(VAR_3);
 u8 VAR_5 = (FUNC_1(VAR_3) == VAR_2) ? VAR_0 : VAR_1;
 u8 VAR_6 = VAR_4->shadow_regs[VAR_5];

 return VAR_6;
}
