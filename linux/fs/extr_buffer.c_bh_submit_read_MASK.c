
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer_head {int b_end_io; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct buffer_head*) ;
 scalar_t__ FUNC_2 (struct buffer_head*) ;
 int VAR_2 ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (int ,int ,struct buffer_head*) ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (struct buffer_head*) ;

int FUNC_7(struct buffer_head *VAR_3)
{
 FUNC_0(!FUNC_1(VAR_3));

 if (FUNC_2(VAR_3)) {
  FUNC_5(VAR_3);
  return 0;
 }

 FUNC_3(VAR_3);
 VAR_3->b_end_io = VAR_2;
 FUNC_4(VAR_1, 0, VAR_3);
 FUNC_6(VAR_3);
 if (FUNC_2(VAR_3))
  return 0;
 return -VAR_0;
}
