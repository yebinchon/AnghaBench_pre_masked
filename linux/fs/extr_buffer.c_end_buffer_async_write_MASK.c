
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct buffer_head {int b_state; struct buffer_head* b_this_page; struct page* b_page; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct buffer_head*,char*) ;
 int FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (struct buffer_head*) ;
 int FUNC_8 (struct buffer_head*) ;
 int FUNC_9 (struct page*) ;
 int FUNC_10 (unsigned long) ;
 int FUNC_11 (unsigned long) ;
 int FUNC_12 (struct buffer_head*) ;
 struct buffer_head* FUNC_13 (struct page*) ;
 int FUNC_14 (struct buffer_head*) ;
 int FUNC_15 (struct buffer_head*) ;

void FUNC_16(struct buffer_head *VAR_1, int VAR_2)
{
 unsigned long VAR_3;
 struct buffer_head *VAR_4;
 struct buffer_head *VAR_5;
 struct page *VAR_6;

 FUNC_0(!FUNC_4(VAR_1));

 VAR_6 = VAR_1->b_page;
 if (VAR_2) {
  FUNC_14(VAR_1);
 } else {
  FUNC_5(VAR_1, ", lost async page write");
  FUNC_12(VAR_1);
  FUNC_8(VAR_1);
  FUNC_1(VAR_6);
 }

 VAR_4 = FUNC_13(VAR_6);
 FUNC_11(VAR_3);
 FUNC_2(VAR_0, &VAR_4->b_state);

 FUNC_7(VAR_1);
 FUNC_15(VAR_1);
 VAR_5 = VAR_1->b_this_page;
 while (VAR_5 != VAR_1) {
  if (FUNC_4(VAR_5)) {
   FUNC_0(!FUNC_6(VAR_5));
   goto still_busy;
  }
  VAR_5 = VAR_5->b_this_page;
 }
 FUNC_3(VAR_0, &VAR_4->b_state);
 FUNC_10(VAR_3);
 FUNC_9(VAR_6);
 return;

still_busy:
 FUNC_3(VAR_0, &VAR_4->b_state);
 FUNC_10(VAR_3);
 return;
}
