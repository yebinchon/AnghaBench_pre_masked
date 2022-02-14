
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_message {int dummy; } ;
struct spi_master {int dummy; } ;
struct img_spfi {int tx_dma_busy; int rx_dma_busy; int lock; int rx_ch; int tx_ch; } ;


 int FUNC_0 (int ) ;
 struct img_spfi* FUNC_1 (struct spi_master*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct spi_master *VAR_0,
    struct spi_message *VAR_1)
{
 struct img_spfi *VAR_2 = FUNC_1(VAR_0);
 unsigned long VAR_3;





 FUNC_2(&VAR_2->lock, VAR_3);
 if (VAR_2->tx_dma_busy || VAR_2->rx_dma_busy) {
  VAR_2->tx_dma_busy = 0;
  VAR_2->rx_dma_busy = 0;

  FUNC_0(VAR_2->tx_ch);
  FUNC_0(VAR_2->rx_ch);
 }
 FUNC_3(&VAR_2->lock, VAR_3);
}
