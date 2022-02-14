
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct buffer_head {struct page* b_page; } ;
struct address_space {int host; } ;


 int VAR_0 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct page*,struct address_space*,int ) ;
 scalar_t__ FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (struct page*) ;
 struct address_space* FUNC_7 (struct page*) ;
 int FUNC_8 () ;
 int FUNC_9 (struct buffer_head*) ;
 int FUNC_10 (struct buffer_head*) ;
 int FUNC_11 (struct page*) ;

void FUNC_12(struct buffer_head *VAR_1)
{
 FUNC_1(!FUNC_5(VAR_1));

 FUNC_10(VAR_1);







 if (FUNC_4(VAR_1)) {
  FUNC_8();
  if (FUNC_4(VAR_1))
   return;
 }

 if (!FUNC_9(VAR_1)) {
  struct page *VAR_2 = VAR_1->b_page;
  struct address_space *VAR_3 = ((void*)0);

  FUNC_6(VAR_2);
  if (!FUNC_0(VAR_2)) {
   VAR_3 = FUNC_7(VAR_2);
   if (VAR_3)
    FUNC_3(VAR_2, VAR_3, 0);
  }
  FUNC_11(VAR_2);
  if (VAR_3)
   FUNC_2(VAR_3->host, VAR_0);
 }
}
