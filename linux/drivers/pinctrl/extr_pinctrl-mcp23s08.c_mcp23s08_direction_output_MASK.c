
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mcp23s08 {int lock; } ;
struct gpio_chip {int dummy; } ;


 unsigned int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (struct mcp23s08*,unsigned int,int) ;
 struct mcp23s08* FUNC_2 (struct gpio_chip*) ;
 int FUNC_3 (struct mcp23s08*,int ,unsigned int,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(struct gpio_chip *VAR_1, unsigned VAR_2, int VAR_3)
{
 struct mcp23s08 *VAR_4 = FUNC_2(VAR_1);
 unsigned VAR_5 = FUNC_0(VAR_2);
 int VAR_6;

 FUNC_4(&VAR_4->lock);
 VAR_6 = FUNC_1(VAR_4, VAR_5, VAR_3);
 if (VAR_6 == 0) {
  VAR_6 = FUNC_3(VAR_4, VAR_0, VAR_5, 0);
 }
 FUNC_5(&VAR_4->lock);
 return VAR_6;
}
