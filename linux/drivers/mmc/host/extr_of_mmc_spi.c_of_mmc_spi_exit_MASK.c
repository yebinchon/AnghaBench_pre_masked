
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_mmc_spi {int detect_irq; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ,void*) ;
 struct of_mmc_spi* FUNC_1 (struct device*) ;

__attribute__((used)) static void FUNC_2(struct device *VAR_0, void *VAR_1)
{
 struct of_mmc_spi *VAR_2 = FUNC_1(VAR_0);

 FUNC_0(VAR_2->detect_irq, VAR_1);
}
