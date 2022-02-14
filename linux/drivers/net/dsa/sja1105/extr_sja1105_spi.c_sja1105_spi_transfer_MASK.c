
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_transfer {void const* tx_buf; void* rx_buf; int len; } ;
struct spi_message {int dummy; } ;
struct spi_device {int dev; } ;
struct sja1105_private {struct spi_device* spidev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int,...) ;
 int FUNC_1 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_2 (struct spi_message*) ;
 int FUNC_3 (struct spi_device*,struct spi_message*) ;

__attribute__((used)) static int FUNC_4(const struct sja1105_private *VAR_2,
    const void *VAR_3, void *VAR_4, int VAR_5)
{
 struct spi_device *VAR_6 = VAR_2->spidev;
 struct spi_transfer VAR_7 = {
  .tx_buf = VAR_3,
  .rx_buf = VAR_4,
  .len = VAR_5,
 };
 struct spi_message VAR_8;
 int VAR_9;

 if (VAR_5 > VAR_1) {
  FUNC_0(&VAR_6->dev, "SPI message (%d) longer than max of %d\n",
   VAR_5, VAR_1);
  return -VAR_0;
 }

 FUNC_2(&VAR_8);
 FUNC_1(&VAR_7, &VAR_8);

 VAR_9 = FUNC_3(VAR_6, &VAR_8);
 if (VAR_9 < 0) {
  FUNC_0(&VAR_6->dev, "SPI transfer failed: %d\n", VAR_9);
  return VAR_9;
 }

 return VAR_9;
}
