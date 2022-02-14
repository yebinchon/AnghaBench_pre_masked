
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct samsung_pinctrl_drv_data {struct samsung_pin_bank* pin_banks; } ;
struct samsung_pin_bank {int irq_domain; scalar_t__ eint_base; } ;
typedef int irqreturn_t ;


 unsigned int FUNC_0 (unsigned int) ;
 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (int ,unsigned int) ;
 unsigned int FUNC_3 (scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_4, void *VAR_5)
{
 struct samsung_pinctrl_drv_data *VAR_6 = VAR_5;
 struct samsung_pin_bank *VAR_7 = VAR_6->pin_banks;
 unsigned int VAR_8, VAR_9, VAR_10, VAR_11;

 VAR_8 = FUNC_3(VAR_7->eint_base + VAR_1);
 VAR_9 = FUNC_0(VAR_8);
 VAR_10 = VAR_8 & VAR_0;

 if (!VAR_9)
  return VAR_2;
 VAR_7 += (VAR_9 - 1);

 VAR_11 = FUNC_2(VAR_7->irq_domain, VAR_10);
 if (!VAR_11)
  return VAR_3;
 FUNC_1(VAR_11);
 return VAR_2;
}
