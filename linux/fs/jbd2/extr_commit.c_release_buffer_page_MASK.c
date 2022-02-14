
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {scalar_t__ mapping; } ;
struct buffer_head {struct page* b_page; int b_count; } ;


 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*) ;

__attribute__((used)) static void FUNC_8(struct buffer_head *VAR_0)
{
 struct page *VAR_1;

 if (FUNC_2(VAR_0))
  goto nope;
 if (FUNC_1(&VAR_0->b_count) != 1)
  goto nope;
 VAR_1 = VAR_0->b_page;
 if (!VAR_1)
  goto nope;
 if (VAR_1->mapping)
  goto nope;


 if (!FUNC_6(VAR_1))
  goto nope;

 FUNC_3(VAR_1);
 FUNC_0(VAR_0);
 FUNC_5(VAR_1);
 FUNC_7(VAR_1);
 FUNC_4(VAR_1);
 return;

nope:
 FUNC_0(VAR_0);
}
