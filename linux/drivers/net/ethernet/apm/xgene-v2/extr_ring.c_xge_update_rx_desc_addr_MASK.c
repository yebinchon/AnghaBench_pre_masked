
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xge_pdata {struct xge_desc_ring* rx_ring; } ;
struct xge_desc_ring {scalar_t__ tail; scalar_t__ head; int dma_addr; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct xge_pdata*,int ,int ) ;

void FUNC_2(struct xge_pdata *VAR_2)
{
 struct xge_desc_ring *VAR_3 = VAR_2->rx_ring;
 dma_addr_t VAR_4 = VAR_3->dma_addr;

 FUNC_1(VAR_2, VAR_1, VAR_4);
 FUNC_1(VAR_2, VAR_0, FUNC_0(VAR_4));

 VAR_3->head = 0;
 VAR_3->tail = 0;
}
