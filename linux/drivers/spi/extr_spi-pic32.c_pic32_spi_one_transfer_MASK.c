
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ nents; } ;
struct TYPE_3__ {scalar_t__ nents; } ;
struct spi_transfer {scalar_t__ bits_per_word; scalar_t__ speed_hz; int len; scalar_t__ rx_buf; scalar_t__ tx_buf; TYPE_2__ tx_sg; TYPE_1__ rx_sg; } ;
struct spi_master {int dma_tx; int dma_rx; } ;
struct spi_device {int dev; } ;
struct pic32_spi {scalar_t__ bits_per_word; scalar_t__ speed_hz; int len; int xfer_done; int tx_irq; int rx_irq; int fault_irq; void const* rx; void const* rx_end; void const* tx; void const* tx_end; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct pic32_spi*,struct spi_transfer*) ;
 int FUNC_4 (struct pic32_spi*,scalar_t__) ;
 int FUNC_5 (struct pic32_spi*,scalar_t__) ;
 int FUNC_6 (int *) ;
 struct pic32_spi* FUNC_7 (struct spi_master*) ;
 unsigned long FUNC_8 (int *,int) ;

__attribute__((used)) static int FUNC_9(struct spi_master *VAR_2,
      struct spi_device *VAR_3,
      struct spi_transfer *VAR_4)
{
 struct pic32_spi *VAR_5;
 bool VAR_6 = 0;
 unsigned long VAR_7;
 int VAR_8;

 VAR_5 = FUNC_7(VAR_2);


 if (VAR_4->bits_per_word &&
     (VAR_4->bits_per_word != VAR_5->bits_per_word)) {
  VAR_8 = FUNC_5(VAR_5, VAR_4->bits_per_word);
  if (VAR_8)
   return VAR_8;
  VAR_5->bits_per_word = VAR_4->bits_per_word;
 }


 if (VAR_4->speed_hz && (VAR_4->speed_hz != VAR_5->speed_hz)) {
  FUNC_4(VAR_5, VAR_4->speed_hz);
  VAR_5->speed_hz = VAR_4->speed_hz;
 }

 FUNC_6(&VAR_5->xfer_done);


 if (VAR_4->rx_sg.nents && VAR_4->tx_sg.nents) {
  VAR_8 = FUNC_3(VAR_5, VAR_4);
  if (VAR_8) {
   FUNC_0(&VAR_3->dev, "dma submit error\n");
   return VAR_8;
  }


  VAR_6 = 1;
 } else {

  VAR_5->tx = (const void *)VAR_4->tx_buf;
  VAR_5->rx = (const void *)VAR_4->rx_buf;
  VAR_5->tx_end = VAR_5->tx + VAR_4->len;
  VAR_5->rx_end = VAR_5->rx + VAR_4->len;
  VAR_5->len = VAR_4->len;


  FUNC_2(VAR_5->fault_irq);
  FUNC_2(VAR_5->rx_irq);
  FUNC_2(VAR_5->tx_irq);
 }


 VAR_7 = FUNC_8(&VAR_5->xfer_done, 2 * VAR_1);
 if (VAR_7 == 0) {
  FUNC_0(&VAR_3->dev, "wait error/timedout\n");
  if (VAR_6) {
   FUNC_1(VAR_2->dma_rx);
   FUNC_1(VAR_2->dma_tx);
  }
  VAR_8 = -VAR_0;
 } else {
  VAR_8 = 0;
 }

 return VAR_8;
}
