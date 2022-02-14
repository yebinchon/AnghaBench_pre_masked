
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spi_transfer {int dummy; } ;
struct spi_device {int dev; } ;
struct spi_controller {int dummy; } ;
struct bcm2835_spi {int count_transfer_irq_after_polling; scalar_t__ rx_len; int tx_len; int count_transfer_polling; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bcm2835_spi*) ;
 int FUNC_1 (struct spi_controller*) ;
 int FUNC_2 (struct spi_controller*,struct spi_device*,struct spi_transfer*,int,int) ;
 int FUNC_3 (struct bcm2835_spi*,int ,int) ;
 int FUNC_4 (struct bcm2835_spi*) ;
 int FUNC_5 (struct bcm2835_spi*,int ) ;
 int FUNC_6 (int *,char*,int,int ,scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 struct bcm2835_spi* FUNC_7 (struct spi_controller*) ;
 scalar_t__ FUNC_8 (int,unsigned long) ;

__attribute__((used)) static int FUNC_9(struct spi_controller *VAR_6,
      struct spi_device *VAR_7,
      struct spi_transfer *VAR_8,
      u32 VAR_9)
{
 struct bcm2835_spi *VAR_10 = FUNC_7(VAR_6);
 unsigned long VAR_11;


 VAR_10->count_transfer_polling++;


 FUNC_3(VAR_10, VAR_0, VAR_9 | VAR_1);





 FUNC_5(VAR_10, VAR_2);


 VAR_11 = VAR_4 + 2 + VAR_3 * VAR_5 / 1000000;


 while (VAR_10->rx_len) {

  FUNC_4(VAR_10);


  FUNC_0(VAR_10);




  if (VAR_10->rx_len && FUNC_8(VAR_4, VAR_11)) {
   FUNC_6(&VAR_7->dev,
         "timeout period reached: jiffies: %lu remaining tx/rx: %d/%d - falling back to interrupt mode\n",
         VAR_4 - VAR_11,
         VAR_10->tx_len, VAR_10->rx_len);



   VAR_10->count_transfer_irq_after_polling++;

   return FUNC_2(VAR_6, VAR_7,
           VAR_8, VAR_9, 0);
  }
 }


 FUNC_1(VAR_6);

 return 0;
}
