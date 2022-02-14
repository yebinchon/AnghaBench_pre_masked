
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct buffer_head {struct buffer_head* b_this_page; } ;


 scalar_t__ FUNC_0 (struct buffer_head*) ;
 struct buffer_head* FUNC_1 (struct page*) ;

int FUNC_2(struct page *VAR_0)
{
 struct buffer_head *VAR_1, *VAR_2;

 VAR_1 = VAR_2 = FUNC_1(VAR_0);
 do {
  if (FUNC_0(VAR_1))
   return 0;
  VAR_1 = VAR_1->b_this_page;
 } while (VAR_1 != VAR_2);
 return 1;
}
