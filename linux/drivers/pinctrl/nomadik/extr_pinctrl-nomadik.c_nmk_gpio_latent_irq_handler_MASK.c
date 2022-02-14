
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nmk_gpio_chip {int bank; int (* get_latent_status ) (int ) ;} ;
struct irq_desc {int dummy; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (struct irq_desc*,int ) ;
 struct nmk_gpio_chip* FUNC_1 (struct gpio_chip*) ;
 struct gpio_chip* FUNC_2 (struct irq_desc*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct irq_desc *VAR_0)
{
 struct gpio_chip *VAR_1 = FUNC_2(VAR_0);
 struct nmk_gpio_chip *VAR_2 = FUNC_1(VAR_1);
 u32 VAR_3 = VAR_2->get_latent_status(VAR_2->bank);

 FUNC_0(VAR_0, VAR_3);
}
