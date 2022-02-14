
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gmac_queue_page {int mapping; } ;
struct gemini_ethernet_port {int dummy; } ;
struct gemini_ethernet {int num_freeq_pages; struct gmac_queue_page* freeq_pages; int dev; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static struct gmac_queue_page *
FUNC_1(struct gemini_ethernet *VAR_1,
      struct gemini_ethernet_port *VAR_2,
      dma_addr_t VAR_3)
{
 struct gmac_queue_page *VAR_4;
 dma_addr_t VAR_5;
 int VAR_6;


 VAR_5 = VAR_3 & VAR_0;

 if (!VAR_1->freeq_pages) {
  FUNC_0(VAR_1->dev, "try to get page with no page list\n");
  return ((void*)0);
 }


 for (VAR_6 = 0; VAR_6 < VAR_1->num_freeq_pages; VAR_6++) {
  VAR_4 = &VAR_1->freeq_pages[VAR_6];
  if (VAR_4->mapping == VAR_5)
   return VAR_4;
 }

 return ((void*)0);
}
