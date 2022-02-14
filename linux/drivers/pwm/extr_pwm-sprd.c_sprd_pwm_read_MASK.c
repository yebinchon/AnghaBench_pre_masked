
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sprd_pwm_chip {int base; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static u32 FUNC_1(struct sprd_pwm_chip *VAR_1, u32 VAR_2, u32 VAR_3)
{
 u32 VAR_4 = VAR_3 + (VAR_2 << VAR_0);

 return FUNC_0(VAR_1->base + VAR_4);
}
