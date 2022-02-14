
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct item_head {int dummy; } ;
struct buffer_info {int tb; struct buffer_head* bi_bh; } ;
struct buffer_head {int dummy; } ;


 int FUNC_0 (struct buffer_head*) ;
 int VAR_0 ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (int ,struct buffer_head*,int ) ;
 int FUNC_3 (struct item_head*) ;
 int FUNC_4 (struct item_head*) ;
 scalar_t__ FUNC_5 (struct item_head*) ;
 struct item_head* FUNC_6 (struct buffer_head*,int) ;
 int FUNC_7 (struct buffer_info*,int,int,int) ;
 int FUNC_8 (struct buffer_info*,int,int) ;
 int FUNC_9 (struct buffer_info*) ;

void FUNC_10(struct buffer_info *VAR_1, int VAR_2,
         int VAR_3, int VAR_4, int VAR_5)
{
 struct buffer_head *VAR_6;
 int VAR_7 = FUNC_0(VAR_6 = VAR_1->bi_bh);

 FUNC_1(!VAR_6, "10155: bh is not defined");
 FUNC_1(VAR_4 < 0, "10160: del_num can not be < 0. del_num==%d",
        VAR_4);
 FUNC_1(VAR_3 < 0
        || VAR_3 + VAR_4 > VAR_7,
        "10165: invalid number of first item to be deleted (%d) or "
        "no so much items (%d) to delete (only %d)", VAR_3,
        VAR_3 + VAR_4, VAR_7);

 if (VAR_4 == 0)
  return;

 if (VAR_3 == 0 && VAR_4 == VAR_7 && VAR_5 == -1) {
  FUNC_9(VAR_1);
  FUNC_2(VAR_1->tb, VAR_6, 0);
  return;
 }

 if (VAR_5 == -1)

  FUNC_8(VAR_1, VAR_3, VAR_4);
 else {
  if (VAR_2 == VAR_0) {




   FUNC_8(VAR_1, VAR_3, VAR_4 - 1);





   FUNC_7(VAR_1, 0, 0, VAR_5);
  } else {
   struct item_head *VAR_8;
   int VAR_9;





   FUNC_8(VAR_1, VAR_3 + 1,
         VAR_4 - 1);

   VAR_8 = FUNC_6(VAR_6, FUNC_0(VAR_6) - 1);
   if (FUNC_5(VAR_8))





    VAR_9 = FUNC_3(VAR_8);
   else

    VAR_9 = FUNC_4(VAR_8);





   FUNC_7(VAR_1, FUNC_0(VAR_6) - 1,
          VAR_9 - VAR_5, VAR_5);
  }
 }
}
