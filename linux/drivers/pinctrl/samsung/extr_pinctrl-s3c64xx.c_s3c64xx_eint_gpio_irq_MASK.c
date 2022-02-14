
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct samsung_pinctrl_drv_data {scalar_t__ virt_base; } ;
struct s3c64xx_eint_gpio_data {int * domains; struct samsung_pinctrl_drv_data* drvdata; } ;
struct irq_desc {int dummy; } ;
struct irq_chip {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned int VAR_1 ;
 int FUNC_2 (struct irq_chip*,struct irq_desc*) ;
 int FUNC_3 (struct irq_chip*,struct irq_desc*) ;
 int FUNC_4 (unsigned int) ;
 struct irq_chip* FUNC_5 (struct irq_desc*) ;
 struct s3c64xx_eint_gpio_data* FUNC_6 (struct irq_desc*) ;
 unsigned int FUNC_7 (int ,unsigned int) ;
 unsigned int FUNC_8 (scalar_t__) ;

__attribute__((used)) static void FUNC_9(struct irq_desc *VAR_2)
{
 struct irq_chip *VAR_3 = FUNC_5(VAR_2);
 struct s3c64xx_eint_gpio_data *VAR_4 = FUNC_6(VAR_2);
 struct samsung_pinctrl_drv_data *VAR_5 = VAR_4->drvdata;

 FUNC_2(VAR_3, VAR_2);

 do {
  unsigned int VAR_6;
  unsigned int VAR_7;
  unsigned int VAR_8;
  unsigned int VAR_9;

  VAR_6 = FUNC_8(VAR_5->virt_base + VAR_0);
  VAR_7 = FUNC_1(VAR_6);
  VAR_8 = VAR_6 & VAR_1;

  if (!VAR_7)
   break;


  if (VAR_7 == 1) {
   if (VAR_8 < 8)
    VAR_7 = 0;
   else
    VAR_8 -= 8;
  }

  VAR_9 = FUNC_7(VAR_4->domains[VAR_7], VAR_8);




  FUNC_0(!VAR_9);

  FUNC_4(VAR_9);
 } while (1);

 FUNC_3(VAR_3, VAR_2);
}
