
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct spi_transfer {scalar_t__ len; scalar_t__ tx_dma; scalar_t__ rx_dma; scalar_t__ tx_buf; scalar_t__ rx_buf; } ;
struct spi_device {int master; } ;
struct au1550_spi {scalar_t__ len; scalar_t__ tx_count; scalar_t__ rx_count; scalar_t__ dma_rx_tmpbuf_size; scalar_t__ dma_rx_tmpbuf_addr; int dev; int dma_rx_ch; int dma_tx_ch; int master_done; TYPE_1__* regs; scalar_t__ tx; scalar_t__ rx; scalar_t__ dma_rx_tmpbuf; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_2__ {int psc_spipcr; int psc_spimsk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct au1550_spi*,int ) ;
 int FUNC_1 (struct au1550_spi*) ;
 scalar_t__ FUNC_2 (int ,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_3 (int ,int ,scalar_t__,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 scalar_t__ FUNC_7 (int ,void*,scalar_t__,int ) ;
 scalar_t__ FUNC_8 (int ,scalar_t__) ;
 int FUNC_9 (int ,scalar_t__,scalar_t__,int ) ;
 int FUNC_10 (int ,scalar_t__,scalar_t__,int ) ;
 int FUNC_11 (int ,scalar_t__,scalar_t__,int ) ;
 int FUNC_12 (scalar_t__,int ) ;
 struct au1550_spi* FUNC_13 (int ) ;
 int FUNC_14 (scalar_t__) ;
 int FUNC_15 (int *) ;
 int FUNC_16 () ;

__attribute__((used)) static int FUNC_17(struct spi_device *VAR_7, struct spi_transfer *VAR_8)
{
 struct au1550_spi *VAR_9 = FUNC_13(VAR_7->master);
 dma_addr_t VAR_10;
 dma_addr_t VAR_11;
 u32 VAR_12;

 VAR_9->len = VAR_8->len;
 VAR_9->tx_count = 0;
 VAR_9->rx_count = 0;

 VAR_9->tx = VAR_8->tx_buf;
 VAR_9->rx = VAR_8->rx_buf;
 VAR_10 = VAR_8->tx_dma;
 VAR_11 = VAR_8->rx_dma;
 if (VAR_8->tx_buf) {
  if (VAR_8->tx_dma == 0) {
   VAR_10 = FUNC_7(VAR_9->dev,
     (void *)VAR_8->tx_buf,
     VAR_8->len, VAR_4);
   if (FUNC_8(VAR_9->dev, VAR_10))
    FUNC_6(VAR_9->dev, "tx dma map error\n");
  }
 }

 if (VAR_8->rx_buf) {
  if (VAR_8->rx_dma == 0) {
   VAR_11 = FUNC_7(VAR_9->dev,
     (void *)VAR_8->rx_buf,
     VAR_8->len, VAR_3);
   if (FUNC_8(VAR_9->dev, VAR_11))
    FUNC_6(VAR_9->dev, "rx dma map error\n");
  }
 } else {
  if (VAR_8->len > VAR_9->dma_rx_tmpbuf_size) {
   int VAR_13;

   FUNC_1(VAR_9);
   VAR_13 = FUNC_0(VAR_9, FUNC_12(VAR_8->len,
     VAR_0));
   if (VAR_13 < 0)
    return VAR_13;
  }
  VAR_9->rx = VAR_9->dma_rx_tmpbuf;
  VAR_11 = VAR_9->dma_rx_tmpbuf_addr;
  FUNC_10(VAR_9->dev, VAR_11,
   VAR_8->len, VAR_3);
 }

 if (!VAR_8->tx_buf) {
  FUNC_10(VAR_9->dev, VAR_11,
    VAR_8->len, VAR_2);
  VAR_9->tx = VAR_9->rx;
 }


 VAR_12 = FUNC_2(VAR_9->dma_rx_ch, FUNC_14(VAR_9->rx),
        VAR_8->len, VAR_1);
 if (!VAR_12)
  FUNC_6(VAR_9->dev, "rx dma put dest error\n");

 VAR_12 = FUNC_3(VAR_9->dma_tx_ch, FUNC_14(VAR_9->tx),
          VAR_8->len, VAR_1);
 if (!VAR_12)
  FUNC_6(VAR_9->dev, "tx dma put source error\n");

 FUNC_4(VAR_9->dma_rx_ch);
 FUNC_4(VAR_9->dma_tx_ch);


 VAR_9->regs->psc_spimsk = VAR_5;
 FUNC_16();


 VAR_9->regs->psc_spipcr = VAR_6;
 FUNC_16();

 FUNC_15(&VAR_9->master_done);

 FUNC_5(VAR_9->dma_tx_ch);
 FUNC_5(VAR_9->dma_rx_ch);

 if (!VAR_8->rx_buf) {

  FUNC_9(VAR_9->dev, VAR_11, VAR_8->len,
   VAR_3);
 }

 if (VAR_8->rx_buf && VAR_8->rx_dma == 0 )
  FUNC_11(VAR_9->dev, VAR_11, VAR_8->len,
   VAR_3);
 if (VAR_8->tx_buf && VAR_8->tx_dma == 0 )
  FUNC_11(VAR_9->dev, VAR_10, VAR_8->len,
   VAR_4);

 return VAR_9->rx_count < VAR_9->tx_count ? VAR_9->rx_count : VAR_9->tx_count;
}
