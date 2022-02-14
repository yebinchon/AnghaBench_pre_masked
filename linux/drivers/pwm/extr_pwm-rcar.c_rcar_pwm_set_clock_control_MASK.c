
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct rcar_pwm_chip {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int FUNC_0 (struct rcar_pwm_chip*,int ) ;
 int FUNC_1 (struct rcar_pwm_chip*,unsigned int,int ) ;

__attribute__((used)) static void FUNC_2(struct rcar_pwm_chip *VAR_4,
           unsigned int VAR_5)
{
 u32 VAR_6;

 VAR_6 = FUNC_0(VAR_4, VAR_0);
 VAR_6 &= ~(VAR_3 | VAR_1);

 if (VAR_5 & 1)
  VAR_6 |= VAR_3;

 VAR_5 >>= 1;

 VAR_6 |= VAR_5 << VAR_2;
 FUNC_1(VAR_4, VAR_6, VAR_0);
}
