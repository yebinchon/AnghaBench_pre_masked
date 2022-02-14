
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_device {int dummy; } ;
struct hi3110_priv {scalar_t__ spi_rx_buf; int * spi_tx_buf; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct spi_device*,scalar_t__) ;
 int FUNC_1 (int *,scalar_t__,scalar_t__) ;
 struct hi3110_priv* FUNC_2 (struct spi_device*) ;

__attribute__((used)) static void FUNC_3(struct spi_device *VAR_2, u8 *VAR_3)
{
 struct hi3110_priv *VAR_4 = FUNC_2(VAR_2);

 VAR_4->spi_tx_buf[0] = VAR_0;
 FUNC_0(VAR_2, VAR_1);
 FUNC_1(VAR_3, VAR_4->spi_rx_buf + 1, VAR_1 - 1);
}
