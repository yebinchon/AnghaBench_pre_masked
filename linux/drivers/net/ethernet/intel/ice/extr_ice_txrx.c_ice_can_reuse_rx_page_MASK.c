
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct ice_rx_buf {unsigned int pagecnt_bias; unsigned int page_offset; struct page* page; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct page*) ;
 unsigned int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*,int) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static bool FUNC_4(struct ice_rx_buf *VAR_3)
{



 unsigned int VAR_4 = VAR_3->pagecnt_bias;
 struct page *VAR_5 = VAR_3->page;


 if (FUNC_3(FUNC_0(VAR_5)))
  return 0;



 if (FUNC_3((FUNC_1(VAR_5) - VAR_4) > 1))
  return 0;
 if (FUNC_3(VAR_4 == 1)) {
  FUNC_2(VAR_5, VAR_2 - 1);
  VAR_3->pagecnt_bias = VAR_2;
 }

 return 1;
}
