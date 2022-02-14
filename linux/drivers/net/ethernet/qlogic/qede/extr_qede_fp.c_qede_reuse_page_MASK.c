
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sw_rx_data {int * data; scalar_t__ page_offset; scalar_t__ mapping; } ;
struct qede_rx_queue {size_t sw_rx_prod; scalar_t__ rx_headroom; struct sw_rx_data* sw_rx_ring; int rx_bd_ring; } ;
struct TYPE_2__ {void* lo; void* hi; } ;
struct eth_rx_bd {TYPE_1__ addr; } ;
typedef scalar_t__ dma_addr_t ;


 size_t VAR_0 ;
 void* FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 struct eth_rx_bd* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

__attribute__((used)) static inline void FUNC_4(struct qede_rx_queue *VAR_1,
       struct sw_rx_data *VAR_2)
{
 struct eth_rx_bd *VAR_3 = FUNC_2(&VAR_1->rx_bd_ring);
 struct sw_rx_data *VAR_4;
 dma_addr_t VAR_5;

 VAR_4 = &VAR_1->sw_rx_ring[VAR_1->sw_rx_prod & VAR_0];
 *VAR_4 = *VAR_2;

 VAR_5 = VAR_4->mapping + VAR_4->page_offset;

 VAR_3->addr.hi = FUNC_0(FUNC_3(VAR_5));
 VAR_3->addr.lo = FUNC_0(FUNC_1(VAR_5) +
       VAR_1->rx_headroom);

 VAR_1->sw_rx_prod++;
 VAR_2->data = ((void*)0);
}
