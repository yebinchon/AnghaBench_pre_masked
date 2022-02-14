
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct rx_bd {int rx_bd_haddr; } ;
struct bnxt_sw_rx_bd {int mapping; int data_ptr; void* data; } ;
struct bnxt_rx_ring_info {size_t rx_prod; struct rx_bd** rx_desc_ring; struct bnxt_sw_rx_bd* rx_buf_ring; } ;


 size_t FUNC_0 (size_t) ;
 size_t FUNC_1 (size_t) ;

void FUNC_2(struct bnxt_rx_ring_info *VAR_0, u16 VAR_1, void *VAR_2)
{
 u16 VAR_3 = VAR_0->rx_prod;
 struct bnxt_sw_rx_bd *VAR_4, *VAR_5;
 struct rx_bd *VAR_6, *VAR_7;

 VAR_5 = &VAR_0->rx_buf_ring[VAR_3];
 VAR_4 = &VAR_0->rx_buf_ring[VAR_1];

 VAR_5->data = VAR_2;
 VAR_5->data_ptr = VAR_4->data_ptr;

 VAR_5->mapping = VAR_4->mapping;

 VAR_7 = &VAR_0->rx_desc_ring[FUNC_1(VAR_3)][FUNC_0(VAR_3)];
 VAR_6 = &VAR_0->rx_desc_ring[FUNC_1(VAR_1)][FUNC_0(VAR_1)];

 VAR_7->rx_bd_haddr = VAR_6->rx_bd_haddr;
}
