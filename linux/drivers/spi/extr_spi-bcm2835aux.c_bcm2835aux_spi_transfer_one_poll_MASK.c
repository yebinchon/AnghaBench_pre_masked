
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_transfer {int dummy; } ;
struct spi_master {int dummy; } ;
struct spi_device {int dev; } ;
struct bcm2835aux_spi {int count_transfer_irq_after_poll; scalar_t__ rx_len; int tx_len; int * cntl; int count_transfer_polling; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct spi_master*,struct spi_device*,struct spi_transfer*) ;
 int FUNC_1 (struct bcm2835aux_spi*) ;
 int FUNC_2 (struct bcm2835aux_spi*,int ,int ) ;
 int FUNC_3 (int *,char*,int,int ,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 struct bcm2835aux_spi* FUNC_4 (struct spi_master*) ;
 scalar_t__ FUNC_5 (int,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct spi_master *VAR_5,
         struct spi_device *VAR_6,
     struct spi_transfer *VAR_7)
{
 struct bcm2835aux_spi *VAR_8 = FUNC_4(VAR_5);
 unsigned long VAR_9;


 VAR_8->count_transfer_polling++;


 FUNC_2(VAR_8, VAR_1, VAR_8->cntl[1]);
 FUNC_2(VAR_8, VAR_0, VAR_8->cntl[0]);


 VAR_9 = VAR_3 + 2 + VAR_2 * VAR_4 / 1000000;


 while (VAR_8->rx_len) {


  FUNC_1(VAR_8);


  if (VAR_8->rx_len && FUNC_5(VAR_3, VAR_9)) {
   FUNC_3(&VAR_6->dev,
         "timeout period reached: jiffies: %lu remaining tx/rx: %d/%d - falling back to interrupt mode\n",
         VAR_3 - VAR_9,
         VAR_8->tx_len, VAR_8->rx_len);

   VAR_8->count_transfer_irq_after_poll++;
   return FUNC_0(VAR_5,
              VAR_6, VAR_7);
  }
 }


 return 0;
}
