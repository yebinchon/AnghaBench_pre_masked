
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efm32_spi_ddata {scalar_t__ tx_len; scalar_t__ rx_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct efm32_spi_ddata*,int ) ;
 int FUNC_1 (struct efm32_spi_ddata*) ;

__attribute__((used)) static void FUNC_2(struct efm32_spi_ddata *VAR_2)
{
 while (VAR_2->tx_len &&
   VAR_2->tx_len + 2 > VAR_2->rx_len &&
   FUNC_0(VAR_2, VAR_0) & VAR_1) {
  FUNC_1(VAR_2);
 }
}
