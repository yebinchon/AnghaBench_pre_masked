
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlgmac_pdata {int dev; } ;
struct xlgmac_page_alloc {int pages_len; int pages_dma; scalar_t__ pages_offset; struct page* pages; } ;
struct page {int dummy; } ;
typedef int gfp_t ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct page* FUNC_0 (int,int) ;
 int FUNC_1 (int ,struct page*,int ,int,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (struct page*) ;

__attribute__((used)) static int FUNC_4(struct xlgmac_pdata *VAR_5,
         struct xlgmac_page_alloc *VAR_6,
         gfp_t VAR_7, int VAR_8)
{
 struct page *VAR_9 = ((void*)0);
 dma_addr_t VAR_10;


 VAR_7 |= VAR_3 | VAR_4;
 while (VAR_8 >= 0) {
  VAR_9 = FUNC_0(VAR_7, VAR_8);
  if (VAR_9)
   break;

  VAR_8--;
 }
 if (!VAR_9)
  return -VAR_1;


 VAR_10 = FUNC_1(VAR_5->dev, VAR_9, 0,
     VAR_2 << VAR_8, VAR_0);
 if (FUNC_2(VAR_5->dev, VAR_10)) {
  FUNC_3(VAR_9);
  return -VAR_1;
 }

 VAR_6->pages = VAR_9;
 VAR_6->pages_len = VAR_2 << VAR_8;
 VAR_6->pages_offset = 0;
 VAR_6->pages_dma = VAR_10;

 return 0;
}
