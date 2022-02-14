
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct samsung_pwm_variant {int bits; int div_base; } ;
struct TYPE_2__ {int dev; } ;
struct samsung_pwm_chip {TYPE_1__ chip; struct clk* tclk1; struct clk* tclk0; struct samsung_pwm_variant variant; } ;
struct clk {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct clk*) ;
 unsigned long FUNC_2 (struct clk*) ;
 int FUNC_3 (int ,char*,unsigned long) ;
 int FUNC_4 (int ,char*,unsigned int) ;
 unsigned long FUNC_5 (struct samsung_pwm_chip*,unsigned int) ;
 int FUNC_6 (struct samsung_pwm_chip*,unsigned int) ;
 int FUNC_7 (struct samsung_pwm_chip*,unsigned int,int ) ;

__attribute__((used)) static unsigned long FUNC_8(struct samsung_pwm_chip *VAR_0,
       unsigned int VAR_1, unsigned long VAR_2)
{
 struct samsung_pwm_variant *VAR_3 = &VAR_0->variant;
 unsigned long VAR_4;
 struct clk *VAR_5;
 u8 VAR_6;

 if (!FUNC_6(VAR_0, VAR_1)) {
  VAR_5 = (VAR_1 < 2) ? VAR_0->tclk0 : VAR_0->tclk1;
  if (!FUNC_1(VAR_5)) {
   VAR_4 = FUNC_2(VAR_5);
   if (VAR_4)
    return VAR_4;
  }

  FUNC_4(VAR_0->chip.dev,
   "tclk of PWM %d is inoperational, using tdiv\n", VAR_1);
 }

 VAR_4 = FUNC_5(VAR_0, VAR_1);
 FUNC_3(VAR_0->chip.dev, "tin parent at %lu\n", VAR_4);






 if (VAR_3->bits < 32) {

  for (VAR_6 = VAR_3->div_base; VAR_6 < 4; ++VAR_6)
   if ((VAR_4 >> (VAR_3->bits + VAR_6)) < VAR_2)
    break;
 } else {




  VAR_6 = VAR_3->div_base;
 }

 FUNC_7(VAR_0, VAR_1, FUNC_0(VAR_6));

 return VAR_4 >> VAR_6;
}
