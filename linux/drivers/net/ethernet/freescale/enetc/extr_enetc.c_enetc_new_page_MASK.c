
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct enetc_rx_swbd {int page_offset; struct page* page; int dma; } ;
struct enetc_bdr {int dev; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct page*) ;
 struct page* FUNC_1 () ;
 int FUNC_2 (int ,struct page*,int ,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static bool FUNC_5(struct enetc_bdr *VAR_3,
      struct enetc_rx_swbd *VAR_4)
{
 struct page *VAR_5;
 dma_addr_t VAR_6;

 VAR_5 = FUNC_1();
 if (FUNC_4(!VAR_5))
  return 0;

 VAR_6 = FUNC_2(VAR_3->dev, VAR_5, 0, VAR_2, VAR_0);
 if (FUNC_4(FUNC_3(VAR_3->dev, VAR_6))) {
  FUNC_0(VAR_5);

  return 0;
 }

 VAR_4->dma = VAR_6;
 VAR_4->page = VAR_5;
 VAR_4->page_offset = VAR_1;

 return 1;
}
