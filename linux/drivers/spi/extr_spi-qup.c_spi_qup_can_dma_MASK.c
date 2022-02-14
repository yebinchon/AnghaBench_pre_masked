
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spi_transfer {int len; int bits_per_word; scalar_t__ tx_buf; scalar_t__ rx_buf; } ;
struct spi_qup {int in_blk_sz; int out_blk_sz; int in_fifo_sz; scalar_t__ qup_v1; } ;
struct spi_master {int dma_tx; int dma_rx; } ;
struct spi_device {int dummy; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (size_t,size_t) ;
 scalar_t__ FUNC_2 (int ) ;
 size_t FUNC_3 () ;
 struct spi_qup* FUNC_4 (struct spi_master*) ;

__attribute__((used)) static bool FUNC_5(struct spi_master *VAR_0, struct spi_device *VAR_1,
       struct spi_transfer *VAR_2)
{
 struct spi_qup *VAR_3 = FUNC_4(VAR_0);
 size_t VAR_4 = FUNC_3();
 int VAR_5;

 if (VAR_2->rx_buf) {
  if (!FUNC_1((size_t)VAR_2->rx_buf, VAR_4) ||
      FUNC_2(VAR_0->dma_rx))
   return 0;
  if (VAR_3->qup_v1 && (VAR_2->len % VAR_3->in_blk_sz))
   return 0;
 }

 if (VAR_2->tx_buf) {
  if (!FUNC_1((size_t)VAR_2->tx_buf, VAR_4) ||
      FUNC_2(VAR_0->dma_tx))
   return 0;
  if (VAR_3->qup_v1 && (VAR_2->len % VAR_3->out_blk_sz))
   return 0;
 }

 VAR_5 = VAR_2->len / FUNC_0(VAR_2->bits_per_word, 8);
 if (VAR_5 <= (VAR_3->in_fifo_sz / sizeof(u32)))
  return 0;

 return 1;
}
