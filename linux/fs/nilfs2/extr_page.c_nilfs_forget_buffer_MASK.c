
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct buffer_head {int b_blocknr; int b_state; struct page* b_page; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct buffer_head*) ;
 scalar_t__ FUNC_6 (struct page*) ;
 int FUNC_7 (int *,unsigned long const,int ) ;
 int FUNC_8 (struct buffer_head*) ;

void FUNC_9(struct buffer_head *VAR_7)
{
 struct page *VAR_8 = VAR_7->b_page;
 const unsigned long VAR_9 =
  (FUNC_0(VAR_6) | FUNC_0(VAR_1) | FUNC_0(VAR_2) |
   FUNC_0(VAR_0) | FUNC_0(VAR_5) |
   FUNC_0(VAR_3) | FUNC_0(VAR_4));

 FUNC_5(VAR_7);
 FUNC_7(&VAR_7->b_state, VAR_9, 0);
 if (FUNC_6(VAR_8))
  FUNC_3(VAR_8);

 VAR_7->b_blocknr = -1;
 FUNC_2(VAR_8);
 FUNC_1(VAR_8);
 FUNC_8(VAR_7);
 FUNC_4(VAR_7);
}
