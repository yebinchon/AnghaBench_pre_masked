
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct i40e_rx_buffer {unsigned int pagecnt_bias; scalar_t__ page_offset; struct page* page; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct page*) ;
 unsigned int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*,int) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static bool FUNC_4(struct i40e_rx_buffer *VAR_2)
{
 unsigned int VAR_3 = VAR_2->pagecnt_bias;
 struct page *VAR_4 = VAR_2->page;


 if (FUNC_3(!FUNC_0(VAR_4)))
  return 0;



 if (FUNC_3((FUNC_1(VAR_4) - VAR_3) > 1))
  return 0;
 if (FUNC_3(VAR_3 == 1)) {
  FUNC_2(VAR_4, VAR_1 - 1);
  VAR_2->pagecnt_bias = VAR_1;
 }

 return 1;
}
