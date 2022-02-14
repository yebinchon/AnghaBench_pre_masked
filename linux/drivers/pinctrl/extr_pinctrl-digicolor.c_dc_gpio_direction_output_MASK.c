
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gpio_chip {int dummy; } ;
struct dc_pinmap {int lock; scalar_t__ regs; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (unsigned int) ;
 unsigned int VAR_0 ;
 int FUNC_2 (struct gpio_chip*,unsigned int,int) ;
 struct dc_pinmap* FUNC_3 (struct gpio_chip*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct gpio_chip *VAR_1, unsigned VAR_2,
        int VAR_3)
{
 struct dc_pinmap *VAR_4 = FUNC_3(VAR_1);
 int VAR_5 = FUNC_1(VAR_2/VAR_0);
 int VAR_6 = VAR_2 % VAR_0;
 u8 VAR_7;
 unsigned long VAR_8;

 FUNC_2(VAR_1, VAR_2, VAR_3);

 FUNC_5(&VAR_4->lock, VAR_8);
 VAR_7 = FUNC_4(VAR_4->regs + VAR_5);
 VAR_7 |= FUNC_0(VAR_6);
 FUNC_7(VAR_7, VAR_4->regs + VAR_5);
 FUNC_6(&VAR_4->lock, VAR_8);

 return 0;
}
