
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct sunxi_pinctrl {int lock; scalar_t__ membase; } ;
struct gpio_chip {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 struct sunxi_pinctrl* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (unsigned int) ;
 scalar_t__ FUNC_6 (unsigned int) ;
 int FUNC_7 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct gpio_chip *VAR_0,
    unsigned VAR_1, int VAR_2)
{
 struct sunxi_pinctrl *VAR_3 = FUNC_1(VAR_0);
 u32 VAR_4 = FUNC_6(VAR_1);
 u8 VAR_5 = FUNC_5(VAR_1);
 unsigned long VAR_6;
 u32 VAR_7;

 FUNC_2(&VAR_3->lock, VAR_6);

 VAR_7 = FUNC_4(VAR_3->membase + VAR_4);

 if (VAR_2)
  VAR_7 |= FUNC_0(VAR_5);
 else
  VAR_7 &= ~(FUNC_0(VAR_5));

 FUNC_7(VAR_7, VAR_3->membase + VAR_4);

 FUNC_3(&VAR_3->lock, VAR_6);
}
