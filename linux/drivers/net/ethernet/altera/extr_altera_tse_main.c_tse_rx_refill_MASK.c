
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct altera_tse_private {unsigned int rx_ring_size; scalar_t__ rx_cons; unsigned int rx_prod; TYPE_2__* rx_ring; TYPE_1__* dmaops; int rx_dma_buf_sz; } ;
struct TYPE_5__ {int * skb; } ;
struct TYPE_4__ {int (* add_rx_desc ) (struct altera_tse_private*,TYPE_2__*) ;} ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct altera_tse_private*,TYPE_2__*) ;
 int FUNC_2 (struct altera_tse_private*,TYPE_2__*,int ) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static inline void FUNC_4(struct altera_tse_private *VAR_0)
{
 unsigned int VAR_1 = VAR_0->rx_ring_size;
 unsigned int VAR_2;
 int VAR_3;

 for (; VAR_0->rx_cons - VAR_0->rx_prod > 0;
   VAR_0->rx_prod++) {
  VAR_2 = VAR_0->rx_prod % VAR_1;
  if (FUNC_0(VAR_0->rx_ring[VAR_2].skb == ((void*)0))) {
   VAR_3 = FUNC_2(VAR_0, &VAR_0->rx_ring[VAR_2],
    VAR_0->rx_dma_buf_sz);
   if (FUNC_3(VAR_3 != 0))
    break;
   VAR_0->dmaops->add_rx_desc(VAR_0, &VAR_0->rx_ring[VAR_2]);
  }
 }
}
