
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_master {int dummy; } ;
struct ppc4xx_spi {int regs; int irqnum; int mapsize; int mapbase; int bitbang; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (struct ppc4xx_spi*) ;
 int FUNC_1 (int ,struct ppc4xx_spi*) ;
 int FUNC_2 (int ) ;
 struct spi_master* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;
 struct ppc4xx_spi* FUNC_6 (struct spi_master*) ;
 int FUNC_7 (struct spi_master*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_0)
{
 struct spi_master *VAR_1 = FUNC_3(VAR_0);
 struct ppc4xx_spi *VAR_2 = FUNC_6(VAR_1);

 FUNC_5(&VAR_2->bitbang);
 FUNC_4(VAR_2->mapbase, VAR_2->mapsize);
 FUNC_1(VAR_2->irqnum, VAR_2);
 FUNC_2(VAR_2->regs);
 FUNC_0(VAR_2);
 FUNC_7(VAR_1);
 return 0;
}
