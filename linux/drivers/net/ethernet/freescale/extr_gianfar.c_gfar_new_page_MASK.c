
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct gfar_rx_buff {scalar_t__ page_offset; struct page* page; int dma; } ;
struct gfar_priv_rx_q {int dev; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct page*) ;
 struct page* FUNC_1 () ;
 int FUNC_2 (int ,struct page*,int ,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static bool FUNC_5(struct gfar_priv_rx_q *VAR_2, struct gfar_rx_buff *VAR_3)
{
 struct page *VAR_4;
 dma_addr_t VAR_5;

 VAR_4 = FUNC_1();
 if (FUNC_4(!VAR_4))
  return 0;

 VAR_5 = FUNC_2(VAR_2->dev, VAR_4, 0, VAR_1, VAR_0);
 if (FUNC_4(FUNC_3(VAR_2->dev, VAR_5))) {
  FUNC_0(VAR_4);

  return 0;
 }

 VAR_3->dma = VAR_5;
 VAR_3->page = VAR_4;
 VAR_3->page_offset = 0;

 return 1;
}
