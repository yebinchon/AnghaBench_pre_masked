
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct wilc {int dev; } ;
struct spi_transfer {int bits_per_word; int delay_usecs; int len; int * tx_buf; int * rx_buf; } ;
struct spi_message {int is_dma_mapped; struct spi_device* spi; } ;
struct spi_device {int dev; } ;
typedef int msg ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (struct spi_message*,int ,int) ;
 int FUNC_2 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_3 (struct spi_message*) ;
 int FUNC_4 (struct spi_device*,struct spi_message*) ;
 struct spi_device* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct wilc *VAR_2, u8 *VAR_3, u8 *VAR_4, u32 VAR_5)
{
 struct spi_device *VAR_6 = FUNC_5(VAR_2->dev);
 int VAR_7;

 if (VAR_5 > 0) {
  struct spi_message VAR_8;
  struct spi_transfer VAR_9 = {
   .rx_buf = VAR_4,
   .tx_buf = VAR_3,
   .len = VAR_5,
   .bits_per_word = 8,
   .delay_usecs = 0,

  };

  FUNC_1(&VAR_8, 0, sizeof(VAR_8));
  FUNC_3(&VAR_8);
  VAR_8.spi = VAR_6;
  VAR_8.is_dma_mapped = VAR_1;

  FUNC_2(&VAR_9, &VAR_8);
  VAR_7 = FUNC_4(VAR_6, &VAR_8);
  if (VAR_7 < 0)
   FUNC_0(&VAR_6->dev, "SPI transaction failed\n");
 } else {
  FUNC_0(&VAR_6->dev,
   "can't read data with the following length: %u\n",
   VAR_5);
  VAR_7 = -VAR_0;
 }

 return VAR_7;
}
