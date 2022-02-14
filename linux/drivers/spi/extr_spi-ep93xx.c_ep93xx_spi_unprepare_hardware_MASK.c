
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spi_master {int dummy; } ;
struct ep93xx_spi {int clk; scalar_t__ mmio; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 struct ep93xx_spi* FUNC_2 (struct spi_master*) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct spi_master *VAR_2)
{
 struct ep93xx_spi *VAR_3 = FUNC_2(VAR_2);
 u32 VAR_4;

 VAR_4 = FUNC_1(VAR_3->mmio + VAR_0);
 VAR_4 &= ~VAR_1;
 FUNC_3(VAR_4, VAR_3->mmio + VAR_0);

 FUNC_0(VAR_3->clk);

 return 0;
}
