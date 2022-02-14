
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * paddrs_ring_32; } ;
struct ath10k_htt {TYPE_1__ rx_ring; } ;
typedef int dma_addr_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct ath10k_htt *VAR_0,
       dma_addr_t VAR_1, int VAR_2)
{
 VAR_0->rx_ring.paddrs_ring_32[VAR_2] = FUNC_0(VAR_1);
}
