
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_master {int dummy; } ;
struct sirfsoc_spi {int tx_chan; int rx_chan; int clk; int bitbang; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct spi_master* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (int *) ;
 struct sirfsoc_spi* FUNC_5 (struct spi_master*) ;
 int FUNC_6 (struct spi_master*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_0)
{
 struct spi_master *VAR_1;
 struct sirfsoc_spi *VAR_2;

 VAR_1 = FUNC_3(VAR_0);
 VAR_2 = FUNC_5(VAR_1);
 FUNC_4(&VAR_2->bitbang);
 FUNC_0(VAR_2->clk);
 FUNC_1(VAR_2->clk);
 FUNC_2(VAR_2->rx_chan);
 FUNC_2(VAR_2->tx_chan);
 FUNC_6(VAR_1);
 return 0;
}
