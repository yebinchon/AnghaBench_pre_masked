
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_device {int dummy; } ;
struct mcp251x_priv {int spi_rx_buf; int * spi_tx_buf; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct spi_device*) ;
 int FUNC_4 (struct spi_device*,scalar_t__) ;
 int FUNC_5 (struct spi_device*,int ) ;
 int FUNC_6 (int*,int ,int ) ;
 struct mcp251x_priv* FUNC_7 (struct spi_device*) ;

__attribute__((used)) static void FUNC_8(struct spi_device *VAR_5, u8 *VAR_6,
    int VAR_7)
{
 struct mcp251x_priv *VAR_8 = FUNC_7(VAR_5);

 if (FUNC_3(VAR_5)) {
  int VAR_9, VAR_10;

  for (VAR_9 = 1; VAR_9 < VAR_1; VAR_9++)
   VAR_6[VAR_9] = FUNC_4(VAR_5, FUNC_1(VAR_7) + VAR_9);

  VAR_10 = FUNC_2(VAR_6[VAR_3] & VAR_2);
  for (; VAR_9 < (VAR_1 + VAR_10); VAR_9++)
   VAR_6[VAR_9] = FUNC_4(VAR_5, FUNC_1(VAR_7) + VAR_9);
 } else {
  VAR_8->spi_tx_buf[VAR_0] = FUNC_0(VAR_7);
  FUNC_5(VAR_5, VAR_4);
  FUNC_6(VAR_6, VAR_8->spi_rx_buf, VAR_4);
 }
}
