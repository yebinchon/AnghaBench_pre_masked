
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mcp23s08 {int lock; } ;
struct gpio_chip {int dummy; } ;


 unsigned int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct mcp23s08*,unsigned int,int) ;
 struct mcp23s08* FUNC_2 (struct gpio_chip*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct gpio_chip *VAR_0, unsigned VAR_1, int VAR_2)
{
 struct mcp23s08 *VAR_3 = FUNC_2(VAR_0);
 unsigned VAR_4 = FUNC_0(VAR_1);

 FUNC_3(&VAR_3->lock);
 FUNC_1(VAR_3, VAR_4, !!VAR_2);
 FUNC_4(&VAR_3->lock);
}
