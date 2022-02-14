
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct buffer_head {struct buffer_head* b_this_page; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (struct page*) ;
 scalar_t__ FUNC_3 (struct buffer_head*) ;
 scalar_t__ FUNC_4 (struct buffer_head*) ;
 struct buffer_head* FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;

void FUNC_7(struct page *VAR_0,
         bool *VAR_1, bool *VAR_2)
{
 struct buffer_head *VAR_3, *VAR_4;
 *VAR_1 = 0;
 *VAR_2 = 0;

 FUNC_0(!FUNC_1(VAR_0));

 if (!FUNC_6(VAR_0))
  return;

 if (FUNC_2(VAR_0))
  *VAR_2 = 1;

 VAR_3 = FUNC_5(VAR_0);
 VAR_4 = VAR_3;
 do {
  if (FUNC_4(VAR_4))
   *VAR_2 = 1;

  if (FUNC_3(VAR_4))
   *VAR_1 = 1;

  VAR_4 = VAR_4->b_this_page;
 } while (VAR_4 != VAR_3);
}
