
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {unsigned int regs; } ;
struct sirfsoc_gpio_chip {TYPE_1__ chip; } ;
struct sirfsoc_gpio_bank {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int ,unsigned int) ;

__attribute__((used)) static inline void FUNC_4(struct sirfsoc_gpio_chip *VAR_3,
        struct sirfsoc_gpio_bank *VAR_4,
        unsigned VAR_5,
        int VAR_6)
{
 u32 VAR_7;
 unsigned long VAR_8;

 FUNC_1(&VAR_4->lock, VAR_8);

 VAR_7 = FUNC_0(VAR_3->chip.regs + VAR_5);
 if (VAR_6)
  VAR_7 |= VAR_0;
 else
  VAR_7 &= ~VAR_0;

 VAR_7 &= ~VAR_1;
 VAR_7 |= VAR_2;
 FUNC_3(VAR_7, VAR_3->chip.regs + VAR_5);

 FUNC_2(&VAR_4->lock, VAR_8);
}
