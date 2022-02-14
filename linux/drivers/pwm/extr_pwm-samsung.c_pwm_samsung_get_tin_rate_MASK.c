
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct samsung_pwm_chip {scalar_t__ base; int base_clk; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static unsigned long FUNC_2(struct samsung_pwm_chip *VAR_3,
           unsigned int VAR_4)
{
 unsigned long VAR_5;
 u32 VAR_6;

 VAR_5 = FUNC_0(VAR_3->base_clk);

 VAR_6 = FUNC_1(VAR_3->base + VAR_0);
 if (VAR_4 >= 2)
  VAR_6 >>= VAR_1;
 VAR_6 &= VAR_2;

 return VAR_5 / (VAR_6 + 1);
}
