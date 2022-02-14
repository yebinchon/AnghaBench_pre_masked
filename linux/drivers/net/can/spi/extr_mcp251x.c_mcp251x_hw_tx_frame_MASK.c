
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_device {int dummy; } ;
struct mcp251x_priv {int spi_tx_buf; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct spi_device*) ;
 int FUNC_2 (struct spi_device*,int) ;
 int FUNC_3 (struct spi_device*,scalar_t__,int ) ;
 int FUNC_4 (int ,int *,int) ;
 struct mcp251x_priv* FUNC_5 (struct spi_device*) ;

__attribute__((used)) static void FUNC_6(struct spi_device *VAR_1, u8 *VAR_2,
    int VAR_3, int VAR_4)
{
 struct mcp251x_priv *VAR_5 = FUNC_5(VAR_1);

 if (FUNC_1(VAR_1)) {
  int VAR_6;

  for (VAR_6 = 1; VAR_6 < VAR_0 + VAR_3; VAR_6++)
   FUNC_3(VAR_1, FUNC_0(VAR_4) + VAR_6,
       VAR_2[VAR_6]);
 } else {
  FUNC_4(VAR_5->spi_tx_buf, VAR_2, VAR_0 + VAR_3);
  FUNC_2(VAR_1, VAR_0 + VAR_3);
 }
}
