
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_master {int dummy; } ;
struct platform_device {int dummy; } ;
struct img_spfi {int sys_clk; int spfi_clk; int dev; scalar_t__ rx_ch; scalar_t__ tx_ch; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 struct spi_master* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct img_spfi* FUNC_5 (struct spi_master*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0)
{
 struct spi_master *VAR_1 = FUNC_2(VAR_0);
 struct img_spfi *VAR_2 = FUNC_5(VAR_1);

 if (VAR_2->tx_ch)
  FUNC_1(VAR_2->tx_ch);
 if (VAR_2->rx_ch)
  FUNC_1(VAR_2->rx_ch);

 FUNC_3(VAR_2->dev);
 if (!FUNC_4(VAR_2->dev)) {
  FUNC_0(VAR_2->spfi_clk);
  FUNC_0(VAR_2->sys_clk);
 }

 return 0;
}
