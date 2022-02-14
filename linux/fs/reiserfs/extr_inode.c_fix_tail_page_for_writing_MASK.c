
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct buffer_head {scalar_t__ b_blocknr; struct buffer_head* b_this_page; } ;


 scalar_t__ FUNC_0 (struct buffer_head*) ;
 struct buffer_head* FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (struct page*) ;
 int FUNC_3 (struct buffer_head*) ;

__attribute__((used)) static inline void FUNC_4(struct page *VAR_0)
{
 struct buffer_head *VAR_1, *VAR_2, *VAR_3;

 if (VAR_0 && FUNC_2(VAR_0)) {
  VAR_1 = FUNC_1(VAR_0);
  VAR_3 = VAR_1;
  do {
   VAR_2 = VAR_3->b_this_page;
   if (FUNC_0(VAR_3) && VAR_3->b_blocknr == 0) {
    FUNC_3(VAR_3);
   }
   VAR_3 = VAR_2;
  } while (VAR_3 != VAR_1);
 }
}
