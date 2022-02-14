
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer_head {int b_state; struct buffer_head* b_private; } ;


 int VAR_0 ;
 int FUNC_0 (struct buffer_head*,char*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 () ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static void FUNC_7(struct buffer_head *VAR_1, int VAR_2)
{
 struct buffer_head *VAR_3 = VAR_1->b_private;

 FUNC_0(VAR_1, "");
 if (VAR_2)
  FUNC_3(VAR_1);
 else
  FUNC_2(VAR_1);
 if (VAR_3) {
  FUNC_1(VAR_0, &VAR_3->b_state);
  FUNC_4();
  FUNC_6(&VAR_3->b_state, VAR_0);
 }
 FUNC_5(VAR_1);
}
