
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gpio_chip {int dummy; } ;
struct dc_pinmap {scalar_t__ regs; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (unsigned int) ;
 unsigned int VAR_0 ;
 struct dc_pinmap* FUNC_2 (struct gpio_chip*) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct gpio_chip *VAR_1, unsigned VAR_2)
{
 struct dc_pinmap *VAR_3 = FUNC_2(VAR_1);
 int VAR_4 = FUNC_1(VAR_2/VAR_0);
 int VAR_5 = VAR_2 % VAR_0;
 u8 VAR_6;

 VAR_6 = FUNC_3(VAR_3->regs + VAR_4);

 return !!(VAR_6 & FUNC_0(VAR_5));
}
