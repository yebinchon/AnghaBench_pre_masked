
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm32_pwr_reg {int ready_mask; scalar_t__ base; } ;
struct regulator_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct stm32_pwr_reg* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct regulator_dev *VAR_1)
{
 struct stm32_pwr_reg *VAR_2 = FUNC_0(VAR_1);
 u32 VAR_3;

 VAR_3 = FUNC_1(VAR_2->base + VAR_0);

 return (VAR_3 & VAR_2->ready_mask);
}
