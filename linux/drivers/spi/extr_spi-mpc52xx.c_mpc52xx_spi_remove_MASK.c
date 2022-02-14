
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_master {int dummy; } ;
struct platform_device {int dummy; } ;
struct mpc52xx_spi {int gpio_cs_count; int regs; int * gpio_cs; int irq1; int irq0; } ;


 int FUNC_0 (int ,struct mpc52xx_spi*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct platform_device*) ;
 struct spi_master* FUNC_5 (int ) ;
 struct mpc52xx_spi* FUNC_6 (struct spi_master*) ;
 int FUNC_7 (struct spi_master*) ;
 int FUNC_8 (struct spi_master*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_0)
{
 struct spi_master *VAR_1 = FUNC_5(FUNC_4(VAR_0));
 struct mpc52xx_spi *VAR_2 = FUNC_6(VAR_1);
 int VAR_3;

 FUNC_0(VAR_2->irq0, VAR_2);
 FUNC_0(VAR_2->irq1, VAR_2);

 for (VAR_3 = 0; VAR_3 < VAR_2->gpio_cs_count; VAR_3++)
  FUNC_1(VAR_2->gpio_cs[VAR_3]);

 FUNC_3(VAR_2->gpio_cs);
 FUNC_8(VAR_1);
 FUNC_2(VAR_2->regs);
 FUNC_7(VAR_1);

 return 0;
}
