
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer_head {int b_end_io; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct buffer_head*) ;
 int VAR_1 ;
 int FUNC_4 (int ,int ,struct buffer_head*) ;

__attribute__((used)) static void FUNC_5(struct buffer_head *VAR_2)
{
 FUNC_3(VAR_2);
 VAR_2->b_end_io = VAR_1;
 FUNC_2(VAR_2);
 if (!FUNC_1(VAR_2))
  FUNC_0();
 FUNC_4(VAR_0, 0, VAR_2);
}
