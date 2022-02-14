
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct npcm7xx_gpio {int (* request ) (struct gpio_chip*,unsigned int) ;} ;
struct gpio_chip {scalar_t__ base; int parent; } ;


 int FUNC_0 (int ,char*,unsigned int) ;
 struct npcm7xx_gpio* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct gpio_chip*,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct gpio_chip *VAR_0, unsigned int VAR_1)
{
 struct npcm7xx_gpio *VAR_2 = FUNC_1(VAR_0);
 int VAR_3;

 FUNC_0(VAR_0->parent, "gpio_request: offset%d\n", VAR_1);
 VAR_3 = FUNC_2(VAR_1 + VAR_0->base);
 if (VAR_3)
  return VAR_3;

 return VAR_2->request(VAR_0, VAR_1);
}
