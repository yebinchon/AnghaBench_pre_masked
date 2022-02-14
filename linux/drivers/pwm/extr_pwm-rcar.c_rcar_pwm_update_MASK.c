
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rcar_pwm_chip {int dummy; } ;


 int FUNC_0 (struct rcar_pwm_chip*,unsigned int) ;
 int FUNC_1 (struct rcar_pwm_chip*,int,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct rcar_pwm_chip *VAR_0, u32 VAR_1, u32 VAR_2,
       unsigned int VAR_3)
{
 u32 VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_3);
 VAR_4 &= ~VAR_1;
 VAR_4 |= VAR_2 & VAR_1;
 FUNC_1(VAR_0, VAR_4, VAR_3);
}
