
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_device {int dummy; } ;
struct mcp251x_priv {int * spi_rx_buf; int * spi_tx_buf; } ;


 int VAR_0 ;
 int FUNC_0 (struct spi_device*,int) ;
 struct mcp251x_priv* FUNC_1 (struct spi_device*) ;

__attribute__((used)) static u8 FUNC_2(struct spi_device *VAR_1, u8 VAR_2)
{
 struct mcp251x_priv *VAR_3 = FUNC_1(VAR_1);
 u8 VAR_4 = 0;

 VAR_3->spi_tx_buf[0] = VAR_0;
 VAR_3->spi_tx_buf[1] = VAR_2;

 FUNC_0(VAR_1, 3);
 VAR_4 = VAR_3->spi_rx_buf[2];

 return VAR_4;
}
