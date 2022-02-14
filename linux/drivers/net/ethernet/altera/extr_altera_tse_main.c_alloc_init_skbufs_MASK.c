
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tse_buffer {int dummy; } ;
struct altera_tse_private {unsigned int rx_ring_size; unsigned int tx_ring_size; int * rx_ring; int * tx_ring; scalar_t__ rx_prod; scalar_t__ rx_cons; int rx_dma_buf_sz; scalar_t__ tx_prod; scalar_t__ tx_cons; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (unsigned int,int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct altera_tse_private*,int *) ;
 int FUNC_3 (struct altera_tse_private*,int *,int ) ;

__attribute__((used)) static int FUNC_4(struct altera_tse_private *VAR_2)
{
 unsigned int VAR_3 = VAR_2->rx_ring_size;
 unsigned int VAR_4 = VAR_2->tx_ring_size;
 int VAR_5 = -VAR_0;
 int VAR_6;


 VAR_2->rx_ring = FUNC_0(VAR_3, sizeof(struct tse_buffer),
    VAR_1);
 if (!VAR_2->rx_ring)
  goto err_rx_ring;


 VAR_2->tx_ring = FUNC_0(VAR_4, sizeof(struct tse_buffer),
    VAR_1);
 if (!VAR_2->tx_ring)
  goto err_tx_ring;

 VAR_2->tx_cons = 0;
 VAR_2->tx_prod = 0;


 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  VAR_5 = FUNC_3(VAR_2, &VAR_2->rx_ring[VAR_6],
      VAR_2->rx_dma_buf_sz);
  if (VAR_5)
   goto err_init_rx_buffers;
 }

 VAR_2->rx_cons = 0;
 VAR_2->rx_prod = 0;

 return 0;
err_init_rx_buffers:
 while (--VAR_6 >= 0)
  FUNC_2(VAR_2, &VAR_2->rx_ring[VAR_6]);
 FUNC_1(VAR_2->tx_ring);
err_tx_ring:
 FUNC_1(VAR_2->rx_ring);
err_rx_ring:
 return VAR_5;
}
