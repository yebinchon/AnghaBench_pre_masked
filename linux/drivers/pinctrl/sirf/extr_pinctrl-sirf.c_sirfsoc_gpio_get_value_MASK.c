
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ regs; } ;
struct sirfsoc_gpio_chip {TYPE_1__ chip; } ;
struct sirfsoc_gpio_bank {int lock; int id; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,unsigned int) ;
 struct sirfsoc_gpio_chip* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (scalar_t__) ;
 struct sirfsoc_gpio_bank* FUNC_3 (struct sirfsoc_gpio_chip*,unsigned int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct gpio_chip *VAR_1, unsigned VAR_2)
{
 struct sirfsoc_gpio_chip *VAR_3 = FUNC_1(VAR_1);
 struct sirfsoc_gpio_bank *VAR_4 = FUNC_3(VAR_3, VAR_2);
 u32 VAR_5;
 unsigned long VAR_6;

 FUNC_4(&VAR_4->lock, VAR_6);

 VAR_5 = FUNC_2(VAR_3->chip.regs + FUNC_0(VAR_4->id, VAR_2));

 FUNC_5(&VAR_4->lock, VAR_6);

 return !!(VAR_5 & VAR_0);
}
