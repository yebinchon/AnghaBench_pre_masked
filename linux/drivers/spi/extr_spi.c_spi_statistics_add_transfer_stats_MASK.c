
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_transfer {scalar_t__ tx_buf; scalar_t__ rx_buf; scalar_t__ len; } ;
struct spi_statistics {int lock; int bytes_rx; int bytes_tx; int bytes; int * transfer_bytes_histo; int transfers; } ;
struct spi_controller {scalar_t__ dummy_tx; scalar_t__ dummy_rx; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(struct spi_statistics *VAR_1,
           struct spi_transfer *VAR_2,
           struct spi_controller *VAR_3)
{
 unsigned long VAR_4;
 int VAR_5 = FUNC_1(FUNC_0(VAR_2->len), VAR_0) - 1;

 if (VAR_5 < 0)
  VAR_5 = 0;

 FUNC_2(&VAR_1->lock, VAR_4);

 VAR_1->transfers++;
 VAR_1->transfer_bytes_histo[VAR_5]++;

 VAR_1->bytes += VAR_2->len;
 if ((VAR_2->tx_buf) &&
     (VAR_2->tx_buf != VAR_3->dummy_tx))
  VAR_1->bytes_tx += VAR_2->len;
 if ((VAR_2->rx_buf) &&
     (VAR_2->rx_buf != VAR_3->dummy_rx))
  VAR_1->bytes_rx += VAR_2->len;

 FUNC_3(&VAR_1->lock, VAR_4);
}
