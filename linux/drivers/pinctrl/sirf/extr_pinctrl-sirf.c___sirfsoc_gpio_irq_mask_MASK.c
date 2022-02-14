
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ regs; } ;
struct sirfsoc_gpio_chip {int lock; TYPE_1__ chip; } ;
struct sirfsoc_gpio_bank {int id; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct sirfsoc_gpio_chip *VAR_2,
        struct sirfsoc_gpio_bank *VAR_3,
        int VAR_4)
{
 u32 VAR_5, VAR_6;
 unsigned long VAR_7;

 VAR_6 = FUNC_0(VAR_3->id, VAR_4);

 FUNC_2(&VAR_2->lock, VAR_7);

 VAR_5 = FUNC_1(VAR_2->chip.regs + VAR_6);
 VAR_5 &= ~VAR_0;
 VAR_5 &= ~VAR_1;
 FUNC_4(VAR_5, VAR_2->chip.regs + VAR_6);

 FUNC_3(&VAR_2->lock, VAR_7);
}
