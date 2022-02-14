
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int mapping; } ;
struct buffer_head {struct page* b_page; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 scalar_t__ FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;

__attribute__((used)) static void FUNC_6(struct buffer_head *VAR_0)
{
 struct page *VAR_1 = VAR_0->b_page;
 if (!VAR_1->mapping && FUNC_4(VAR_1)) {
  FUNC_0(VAR_1);
  FUNC_1(VAR_0);
  if (!VAR_1->mapping)
   FUNC_3(VAR_1);
  FUNC_5(VAR_1);
  FUNC_2(VAR_1);
 } else {
  FUNC_1(VAR_0);
 }
}
