
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct samsung_pinctrl_drv_data {scalar_t__ virt_base; } ;
struct s3c64xx_eint0_data {int * pins; int * domains; struct samsung_pinctrl_drv_data* drvdata; } ;
struct irq_desc {int dummy; } ;
struct irq_chip {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct irq_chip*,struct irq_desc*) ;
 int FUNC_2 (struct irq_chip*,struct irq_desc*) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (unsigned int) ;
 struct irq_chip* FUNC_5 (struct irq_desc*) ;
 struct s3c64xx_eint0_data* FUNC_6 (struct irq_desc*) ;
 unsigned int FUNC_7 (int ,int ) ;
 unsigned int FUNC_8 (scalar_t__) ;

__attribute__((used)) static inline void FUNC_9(struct irq_desc *VAR_2, u32 VAR_3)
{
 struct irq_chip *VAR_4 = FUNC_5(VAR_2);
 struct s3c64xx_eint0_data *VAR_5 = FUNC_6(VAR_2);
 struct samsung_pinctrl_drv_data *VAR_6 = VAR_5->drvdata;
 unsigned int VAR_7, VAR_8;

 FUNC_1(VAR_4, VAR_2);

 VAR_7 = FUNC_8(VAR_6->virt_base + VAR_1);
 VAR_8 = FUNC_8(VAR_6->virt_base + VAR_0);

 VAR_7 = VAR_7 & VAR_3 & ~VAR_8;
 VAR_7 &= VAR_3;

 while (VAR_7) {
  unsigned int VAR_9, VAR_10;

  VAR_10 = FUNC_3(VAR_7) - 1;
  VAR_7 &= ~(1 << VAR_10);
  VAR_9 = FUNC_7(VAR_5->domains[VAR_10], VAR_5->pins[VAR_10]);




  FUNC_0(!VAR_9);

  FUNC_4(VAR_9);
 }

 FUNC_2(VAR_4, VAR_2);
}
