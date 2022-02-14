
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer_head {int b_end_io; int b_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct buffer_head*) ;
 int VAR_2 ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (int ,int,struct buffer_head*) ;
 scalar_t__ FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (struct buffer_head*) ;
 int FUNC_8 (struct buffer_head*) ;

int FUNC_9(struct buffer_head *VAR_3, int VAR_4)
{
 int VAR_5 = 0;

 FUNC_0(FUNC_1(&VAR_3->b_count) < 1);
 FUNC_4(VAR_3);
 if (FUNC_6(VAR_3)) {
  FUNC_3(VAR_3);
  VAR_3->b_end_io = VAR_2;
  VAR_5 = FUNC_5(VAR_1, VAR_4, VAR_3);
  FUNC_8(VAR_3);
  if (!VAR_5 && !FUNC_2(VAR_3))
   VAR_5 = -VAR_0;
 } else {
  FUNC_7(VAR_3);
 }
 return VAR_5;
}
