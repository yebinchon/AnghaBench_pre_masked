
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {int dev; } ;
struct xgbe_page_alloc {int pages_len; int pages_dma; scalar_t__ pages_offset; struct page* pages; } ;
struct page {int dummy; } ;
typedef int gfp_t ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct page* FUNC_0 (int,int,int) ;
 int FUNC_1 (int ,struct page*,int ,int,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (struct page*) ;

__attribute__((used)) static int FUNC_4(struct xgbe_prv_data *VAR_7,
       struct xgbe_page_alloc *VAR_8, int VAR_9,
       int VAR_10)
{
 struct page *VAR_11 = ((void*)0);
 dma_addr_t VAR_12;
 gfp_t VAR_13;
 int VAR_14;

again:
 VAR_14 = VAR_9;


 VAR_13 = VAR_2 | VAR_5 | VAR_6;
 while (VAR_14 >= 0) {
  VAR_11 = FUNC_0(VAR_10, VAR_13, VAR_14);
  if (VAR_11)
   break;

  VAR_14--;
 }


 if (!VAR_11 && (VAR_10 != VAR_3)) {
  VAR_10 = VAR_3;
  goto again;
 }

 if (!VAR_11)
  return -VAR_1;


 VAR_12 = FUNC_1(VAR_7->dev, VAR_11, 0,
     VAR_4 << VAR_14, VAR_0);
 if (FUNC_2(VAR_7->dev, VAR_12)) {
  FUNC_3(VAR_11);
  return -VAR_1;
 }

 VAR_8->pages = VAR_11;
 VAR_8->pages_len = VAR_4 << VAR_14;
 VAR_8->pages_offset = 0;
 VAR_8->pages_dma = VAR_12;

 return 0;
}
