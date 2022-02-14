
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_master {int dummy; } ;
struct rockchip_spi {scalar_t__ regs; int rx_left; scalar_t__ tx_left; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct rockchip_spi*) ;
 int FUNC_1 (struct rockchip_spi*) ;
 int FUNC_2 (struct rockchip_spi*,int) ;
 int FUNC_3 (struct spi_master*) ;
 struct rockchip_spi* FUNC_4 (struct spi_master*) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_2, void *VAR_3)
{
 struct spi_master *VAR_4 = VAR_3;
 struct rockchip_spi *VAR_5 = FUNC_4(VAR_4);

 if (VAR_5->tx_left)
  FUNC_1(VAR_5);

 FUNC_0(VAR_5);
 if (!VAR_5->rx_left) {
  FUNC_2(VAR_5, 0);
  FUNC_5(0, VAR_5->regs + VAR_1);
  FUNC_3(VAR_4);
 }

 return VAR_0;
}
