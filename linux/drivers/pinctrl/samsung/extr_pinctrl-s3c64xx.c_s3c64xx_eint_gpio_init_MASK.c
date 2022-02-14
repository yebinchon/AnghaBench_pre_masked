
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct samsung_pinctrl_drv_data {unsigned int nr_banks; int irq; struct samsung_pin_bank* pin_banks; struct device* dev; } ;
struct samsung_pin_bank {scalar_t__ eint_type; unsigned int eint_mask; scalar_t__ irq_domain; int of_node; } ;
struct s3c64xx_eint_gpio_data {scalar_t__* domains; struct samsung_pinctrl_drv_data* drvdata; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*,char*) ;
 struct s3c64xx_eint_gpio_data* FUNC_1 (struct device*,int ,int ) ;
 int VAR_5 ;
 unsigned int FUNC_2 (unsigned int) ;
 scalar_t__ FUNC_3 (int ,unsigned int,int *,struct samsung_pin_bank*) ;
 int FUNC_4 (int ,int ,struct s3c64xx_eint_gpio_data*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (struct s3c64xx_eint_gpio_data*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_6(struct samsung_pinctrl_drv_data *VAR_8)
{
 struct s3c64xx_eint_gpio_data *VAR_9;
 struct samsung_pin_bank *VAR_10;
 struct device *VAR_11 = VAR_8->dev;
 unsigned int VAR_12;
 unsigned int VAR_13;

 if (!VAR_8->irq) {
  FUNC_0(VAR_11, "irq number not available\n");
  return -VAR_1;
 }

 VAR_12 = 0;
 VAR_10 = VAR_8->pin_banks;
 for (VAR_13 = 0; VAR_13 < VAR_8->nr_banks; ++VAR_13, ++VAR_10) {
  unsigned int VAR_14;
  unsigned int VAR_15;

  if (VAR_10->eint_type != VAR_0)
   continue;

  VAR_15 = VAR_10->eint_mask;
  VAR_14 = FUNC_2(VAR_15);

  VAR_10->irq_domain = FUNC_3(VAR_10->of_node,
     VAR_14, &VAR_7, VAR_10);
  if (!VAR_10->irq_domain) {
   FUNC_0(VAR_11, "gpio irq domain add failed\n");
   return -VAR_3;
  }

  ++VAR_12;
 }

 VAR_9 = FUNC_1(VAR_11, FUNC_5(VAR_9, VAR_5, VAR_12),
       VAR_4);
 if (!VAR_9)
  return -VAR_2;
 VAR_9->drvdata = VAR_8;

 VAR_10 = VAR_8->pin_banks;
 VAR_12 = 0;
 for (VAR_13 = 0; VAR_13 < VAR_8->nr_banks; ++VAR_13, ++VAR_10) {
  if (VAR_10->eint_type != VAR_0)
   continue;

  VAR_9->domains[VAR_12++] = VAR_10->irq_domain;
 }

 FUNC_4(VAR_8->irq, VAR_6, VAR_9);

 return 0;
}
