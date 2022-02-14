
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mcp23s08 {int lock; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 struct mcp23s08* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (struct mcp23s08*,int ,unsigned int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct gpio_chip *VAR_1, unsigned VAR_2)
{
 struct mcp23s08 *VAR_3 = FUNC_0(VAR_1);
 int VAR_4;

 FUNC_2(&VAR_3->lock);
 VAR_4 = FUNC_1(VAR_3, VAR_0, VAR_2, 1);
 FUNC_3(&VAR_3->lock);

 return VAR_4;
}
