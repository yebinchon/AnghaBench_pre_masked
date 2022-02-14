
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct gve_rx_slot_page_info {int page_address; scalar_t__ page_offset; struct page* page; } ;
struct gve_rx_data_slot {int qpl_offset; } ;
typedef int dma_addr_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct page*) ;

__attribute__((used)) static void FUNC_2(struct gve_rx_slot_page_info *VAR_0,
    struct gve_rx_data_slot *VAR_1,
    dma_addr_t VAR_2, struct page *VAR_3)
{
 VAR_0->page = VAR_3;
 VAR_0->page_offset = 0;
 VAR_0->page_address = FUNC_1(VAR_3);
 VAR_1->qpl_offset = FUNC_0(VAR_2);
}
