
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer_head {int b_end_io; } ;


 int VAR_0 ;
 int FUNC_0 (struct buffer_head*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (int,int,struct buffer_head*) ;
 scalar_t__ FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct buffer_head*) ;

void FUNC_6(int VAR_3, int VAR_4, int VAR_5, struct buffer_head *VAR_6[])
{
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  struct buffer_head *VAR_8 = VAR_6[VAR_7];

  if (!FUNC_4(VAR_8))
   continue;
  if (VAR_3 == VAR_0) {
   if (FUNC_3(VAR_8)) {
    VAR_8->b_end_io = VAR_2;
    FUNC_1(VAR_8);
    FUNC_2(VAR_3, VAR_4, VAR_8);
    continue;
   }
  } else {
   if (!FUNC_0(VAR_8)) {
    VAR_8->b_end_io = VAR_1;
    FUNC_1(VAR_8);
    FUNC_2(VAR_3, VAR_4, VAR_8);
    continue;
   }
  }
  FUNC_5(VAR_8);
 }
}
