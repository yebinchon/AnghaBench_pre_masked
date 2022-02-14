
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct samsung_pinctrl_drv_data {int nr_banks; struct device* dev; struct samsung_pin_bank* pin_banks; int irq; } ;
struct samsung_pin_bank {scalar_t__ eint_type; int irq_domain; int * irq_chip; int soc_priv; int nr_pins; int of_node; } ;
struct exynos_eint_gpio_save {int dummy; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,int,int ) ;
 int FUNC_3 (struct device*,int ,int ,int ,int ,struct samsung_pinctrl_drv_data*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int ,int ,int *,struct samsung_pin_bank*) ;
 int FUNC_5 (int ) ;

int FUNC_6(struct samsung_pinctrl_drv_data *VAR_8)
{
 struct samsung_pin_bank *VAR_9;
 struct device *VAR_10 = VAR_8->dev;
 int VAR_11;
 int VAR_12;

 if (!VAR_8->irq) {
  FUNC_0(VAR_10, "irq number not available\n");
  return -VAR_1;
 }

 VAR_11 = FUNC_3(VAR_10, VAR_8->irq, VAR_5,
     0, FUNC_1(VAR_10), VAR_8);
 if (VAR_11) {
  FUNC_0(VAR_10, "irq request failed\n");
  return -VAR_3;
 }

 VAR_9 = VAR_8->pin_banks;
 for (VAR_12 = 0; VAR_12 < VAR_8->nr_banks; ++VAR_12, ++VAR_9) {
  if (VAR_9->eint_type != VAR_0)
   continue;
  VAR_9->irq_domain = FUNC_4(VAR_9->of_node,
    VAR_9->nr_pins, &VAR_6, VAR_9);
  if (!VAR_9->irq_domain) {
   FUNC_0(VAR_10, "gpio irq domain add failed\n");
   VAR_11 = -VAR_3;
   goto err_domains;
  }

  VAR_9->soc_priv = FUNC_2(VAR_8->dev,
   sizeof(struct exynos_eint_gpio_save), VAR_4);
  if (!VAR_9->soc_priv) {
   FUNC_5(VAR_9->irq_domain);
   VAR_11 = -VAR_2;
   goto err_domains;
  }

  VAR_9->irq_chip = &VAR_7;
 }

 return 0;

err_domains:
 for (--VAR_12, --VAR_9; VAR_12 >= 0; --VAR_12, --VAR_9) {
  if (VAR_9->eint_type != VAR_0)
   continue;
  FUNC_5(VAR_9->irq_domain);
 }

 return VAR_11;
}
