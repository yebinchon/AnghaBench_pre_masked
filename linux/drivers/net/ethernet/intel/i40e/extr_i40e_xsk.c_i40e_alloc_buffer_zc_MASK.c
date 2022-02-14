
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct xdp_umem {scalar_t__ headroom; } ;
struct i40e_rx_buffer {int handle; void* addr; int dma; } ;
struct TYPE_2__ {int alloc_page_failed; int page_reuse_count; } ;
struct i40e_ring {TYPE_1__ rx_stats; struct xdp_umem* xsk_umem; } ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (struct xdp_umem*,scalar_t__) ;
 int FUNC_1 (struct xdp_umem*,scalar_t__) ;
 int FUNC_2 (struct xdp_umem*,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct xdp_umem*) ;
 int FUNC_4 (struct xdp_umem*,scalar_t__*) ;

__attribute__((used)) static bool FUNC_5(struct i40e_ring *VAR_1,
     struct i40e_rx_buffer *VAR_2)
{
 struct xdp_umem *VAR_3 = VAR_1->xsk_umem;
 void *VAR_4 = VAR_2->addr;
 u64 VAR_5, VAR_6;

 if (VAR_4) {
  VAR_1->rx_stats.page_reuse_count++;
  return 1;
 }

 if (!FUNC_4(VAR_3, &VAR_5)) {
  VAR_1->rx_stats.alloc_page_failed++;
  return 0;
 }

 VAR_6 = VAR_3->headroom + VAR_0;

 VAR_2->dma = FUNC_1(VAR_3, VAR_5);
 VAR_2->dma += VAR_6;

 VAR_2->addr = FUNC_0(VAR_3, VAR_5);
 VAR_2->addr += VAR_6;

 VAR_2->handle = FUNC_2(VAR_3, VAR_5, VAR_3->headroom);

 FUNC_3(VAR_3);
 return 1;
}
