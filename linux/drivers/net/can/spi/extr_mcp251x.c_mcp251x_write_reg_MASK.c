
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct spi_device {int dummy; } ;
struct mcp251x_priv {void** spi_tx_buf; } ;


 void* VAR_0 ;
 int FUNC_0 (struct spi_device*,int) ;
 struct mcp251x_priv* FUNC_1 (struct spi_device*) ;

__attribute__((used)) static void FUNC_2(struct spi_device *VAR_1, u8 VAR_2, u8 VAR_3)
{
 struct mcp251x_priv *VAR_4 = FUNC_1(VAR_1);

 VAR_4->spi_tx_buf[0] = VAR_0;
 VAR_4->spi_tx_buf[1] = VAR_2;
 VAR_4->spi_tx_buf[2] = VAR_3;

 FUNC_0(VAR_1, 3);
}
