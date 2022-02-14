
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct zx_pwm_chip {int dummy; } ;


 int FUNC_0 (struct zx_pwm_chip*,unsigned int,unsigned int) ;
 int FUNC_1 (struct zx_pwm_chip*,unsigned int,unsigned int,int) ;

__attribute__((used)) static void FUNC_2(struct zx_pwm_chip *VAR_0, unsigned int VAR_1,
       unsigned int VAR_2, u32 VAR_3, u32 VAR_4)
{
 u32 VAR_5;

 VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2);
 VAR_5 &= ~VAR_3;
 VAR_5 |= VAR_4 & VAR_3;
 FUNC_1(VAR_0, VAR_1, VAR_2, VAR_5);
}
