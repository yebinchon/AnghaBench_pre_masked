
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct buffer_head {struct buffer_head* b_this_page; } ;


 scalar_t__ FUNC_0 (struct page*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct buffer_head*) ;
 struct buffer_head* FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;

__attribute__((used)) static void FUNC_5(struct page *VAR_1, unsigned VAR_2)
{
 unsigned VAR_3 = 0;
 struct buffer_head *VAR_4, *VAR_5;
 if (!FUNC_3(VAR_1))
  return;
 VAR_5 = FUNC_2(VAR_1);
 VAR_4 = VAR_5;

 do {
  if (VAR_3++ == VAR_2)
   break;
  FUNC_1(VAR_4);
  VAR_4 = VAR_4->b_this_page;
 } while (VAR_4 != VAR_5);






 if (VAR_0 && FUNC_0(VAR_1))
  FUNC_4(VAR_1);
}
