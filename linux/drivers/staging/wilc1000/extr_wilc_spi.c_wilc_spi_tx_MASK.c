
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct wilc {int dev; } ;
struct spi_transfer {char* rx_buf; int delay_usecs; int len; int * tx_buf; } ;
struct spi_message {int is_dma_mapped; struct spi_device* spi; } ;
struct spi_device {int dev; } ;
typedef int msg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct spi_message*,int ,int) ;
 int FUNC_5 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_6 (struct spi_message*) ;
 int FUNC_7 (struct spi_device*,struct spi_message*) ;
 struct spi_device* FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct wilc *VAR_4, u8 *VAR_5, u32 VAR_6)
{
 struct spi_device *VAR_7 = FUNC_8(VAR_4->dev);
 int VAR_8;
 struct spi_message VAR_9;

 if (VAR_6 > 0 && VAR_5) {
  struct spi_transfer VAR_10 = {
   .tx_buf = VAR_5,
   .len = VAR_6,
   .delay_usecs = 0,
  };
  char *VAR_11 = FUNC_3(VAR_6, VAR_2);

  if (!VAR_11)
   return -VAR_1;

  VAR_10.rx_buf = VAR_11;
  FUNC_0(&VAR_7->dev, "Request writing %d bytes\n", VAR_6);

  FUNC_4(&VAR_9, 0, sizeof(VAR_9));
  FUNC_6(&VAR_9);
  VAR_9.spi = VAR_7;
  VAR_9.is_dma_mapped = VAR_3;
  FUNC_5(&VAR_10, &VAR_9);

  VAR_8 = FUNC_7(VAR_7, &VAR_9);
  if (VAR_8 < 0)
   FUNC_1(&VAR_7->dev, "SPI transaction failed\n");

  FUNC_2(VAR_11);
 } else {
  FUNC_1(&VAR_7->dev,
   "can't write data with the following length: %d\n",
   VAR_6);
  VAR_8 = -VAR_0;
 }

 return VAR_8;
}
