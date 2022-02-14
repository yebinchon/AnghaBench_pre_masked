
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_device {int dev; } ;
struct hi3110_priv {int * spi_tx_buf; } ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (struct spi_device*,int) ;
 struct hi3110_priv* FUNC_2 (struct spi_device*) ;

__attribute__((used)) static u8 FUNC_3(struct spi_device *VAR_0, u8 VAR_1)
{
 struct hi3110_priv *VAR_2 = FUNC_2(VAR_0);

 VAR_2->spi_tx_buf[0] = VAR_1;
 FUNC_0(&VAR_0->dev, "hi3110_cmd: %02X\n", VAR_1);

 return FUNC_1(VAR_0, 1);
}
