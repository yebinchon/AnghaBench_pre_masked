
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct xdp_umem {scalar_t__ headroom; scalar_t__ chunk_mask; } ;
struct ixgbe_rx_buffer {int handle; int addr; int dma; } ;
struct TYPE_2__ {int alloc_rx_page_failed; } ;
struct ixgbe_ring {struct xdp_umem* xsk_umem; TYPE_1__ rx_stats; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct xdp_umem*,scalar_t__) ;
 int FUNC_1 (struct xdp_umem*,scalar_t__) ;
 int FUNC_2 (struct xdp_umem*,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct xdp_umem*) ;
 int FUNC_4 (struct xdp_umem*,scalar_t__*) ;

__attribute__((used)) static bool FUNC_5(struct ixgbe_ring *VAR_1,
           struct ixgbe_rx_buffer *VAR_2)
{
 struct xdp_umem *VAR_3 = VAR_1->xsk_umem;
 u64 VAR_4, VAR_5;

 if (!FUNC_4(VAR_3, &VAR_4)) {
  VAR_1->rx_stats.alloc_rx_page_failed++;
  return 0;
 }

 VAR_4 &= VAR_1->xsk_umem->chunk_mask;

 VAR_5 = VAR_3->headroom + VAR_0;

 VAR_2->dma = FUNC_1(VAR_3, VAR_4);
 VAR_2->dma += VAR_5;

 VAR_2->addr = FUNC_0(VAR_3, VAR_4);
 VAR_2->addr += VAR_5;

 VAR_2->handle = FUNC_2(VAR_3, VAR_4, VAR_3->headroom);

 FUNC_3(VAR_3);
 return 1;
}
