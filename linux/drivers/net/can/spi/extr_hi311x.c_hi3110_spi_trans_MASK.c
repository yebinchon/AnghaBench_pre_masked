
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_transfer {int len; int cs_change; int rx_buf; int tx_buf; } ;
struct spi_message {int dummy; } ;
struct spi_device {int dev; } ;
struct hi3110_priv {int spi_rx_buf; int spi_tx_buf; } ;


 int FUNC_0 (int *,char*,int) ;
 struct hi3110_priv* FUNC_1 (struct spi_device*) ;
 int FUNC_2 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_3 (struct spi_message*) ;
 int FUNC_4 (struct spi_device*,struct spi_message*) ;

__attribute__((used)) static int FUNC_5(struct spi_device *VAR_0, int VAR_1)
{
 struct hi3110_priv *VAR_2 = FUNC_1(VAR_0);
 struct spi_transfer VAR_3 = {
  .tx_buf = VAR_2->spi_tx_buf,
  .rx_buf = VAR_2->spi_rx_buf,
  .len = VAR_1,
  .cs_change = 0,
 };
 struct spi_message VAR_4;
 int VAR_5;

 FUNC_3(&VAR_4);
 FUNC_2(&VAR_3, &VAR_4);

 VAR_5 = FUNC_4(VAR_0, &VAR_4);

 if (VAR_5)
  FUNC_0(&VAR_0->dev, "spi transfer failed: ret = %d\n", VAR_5);
 return VAR_5;
}
