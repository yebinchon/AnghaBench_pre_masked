
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {unsigned int regs; } ;
struct sirfsoc_gpio_chip {TYPE_1__ chip; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ,unsigned int) ;

__attribute__((used)) static inline void FUNC_2(struct sirfsoc_gpio_chip *VAR_1,
       unsigned VAR_2)
{
 u32 VAR_3;

 VAR_3 = FUNC_0(VAR_1->chip.regs + VAR_2);
 VAR_3 &= ~VAR_0;
 FUNC_1(VAR_3, VAR_1->chip.regs + VAR_2);
}
