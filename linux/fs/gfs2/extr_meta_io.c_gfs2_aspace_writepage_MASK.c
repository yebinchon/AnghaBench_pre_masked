
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct writeback_control {scalar_t__ sync_mode; } ;
struct page {int dummy; } ;
struct buffer_head {struct buffer_head* b_this_page; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (struct buffer_head*) ;
 struct buffer_head* FUNC_8 (struct page*) ;
 int FUNC_9 (struct page*) ;
 int FUNC_10 (struct writeback_control*,struct page*) ;
 int FUNC_11 (struct page*) ;
 int FUNC_12 (int ,int,struct buffer_head*) ;
 scalar_t__ FUNC_13 (struct buffer_head*) ;
 int FUNC_14 (struct buffer_head*) ;
 int FUNC_15 (struct buffer_head*) ;
 int FUNC_16 (struct page*) ;
 int FUNC_17 (struct writeback_control*) ;

__attribute__((used)) static int FUNC_18(struct page *VAR_4, struct writeback_control *VAR_5)
{
 struct buffer_head *VAR_6, *VAR_7;
 int VAR_8 = 0;
 int VAR_9 = VAR_0 | VAR_2 | FUNC_17(VAR_5);

 FUNC_0(!FUNC_1(VAR_4));
 FUNC_0(!FUNC_9(VAR_4));

 VAR_7 = FUNC_8(VAR_4);
 VAR_6 = VAR_7;

 do {
  if (!FUNC_4(VAR_6))
   continue;







  if (VAR_5->sync_mode != VAR_3) {
   FUNC_6(VAR_6);
  } else if (!FUNC_14(VAR_6)) {
   FUNC_10(VAR_5, VAR_4);
   continue;
  }
  if (FUNC_13(VAR_6)) {
   FUNC_7(VAR_6);
  } else {
   FUNC_15(VAR_6);
  }
 } while ((VAR_6 = VAR_6->b_this_page) != VAR_7);





 FUNC_0(FUNC_2(VAR_4));
 FUNC_11(VAR_4);

 do {
  struct buffer_head *VAR_10 = VAR_6->b_this_page;
  if (FUNC_3(VAR_6)) {
   FUNC_12(VAR_1, VAR_9, VAR_6);
   VAR_8++;
  }
  VAR_6 = VAR_10;
 } while (VAR_6 != VAR_7);
 FUNC_16(VAR_4);

 if (VAR_8 == 0)
  FUNC_5(VAR_4);

 return 0;
}
