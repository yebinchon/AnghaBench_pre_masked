
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct spi_device {int dummy; } ;
struct hi3110_priv {void** spi_tx_buf; } ;


 int FUNC_0 (struct spi_device*,int) ;
 struct hi3110_priv* FUNC_1 (struct spi_device*) ;

__attribute__((used)) static void FUNC_2(struct spi_device *VAR_0, u8 VAR_1, u8 VAR_2)
{
 struct hi3110_priv *VAR_3 = FUNC_1(VAR_0);

 VAR_3->spi_tx_buf[0] = VAR_1;
 VAR_3->spi_tx_buf[1] = VAR_2;
 FUNC_0(VAR_0, 2);
}
