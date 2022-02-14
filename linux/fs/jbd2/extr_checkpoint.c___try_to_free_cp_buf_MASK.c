
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct journal_head {int * b_transaction; } ;
struct buffer_head {int dummy; } ;


 int FUNC_0 (struct journal_head*,char*) ;
 int FUNC_1 (struct journal_head*) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct buffer_head*) ;
 struct buffer_head* FUNC_5 (struct journal_head*) ;

__attribute__((used)) static int FUNC_6(struct journal_head *VAR_0)
{
 int VAR_1 = 0;
 struct buffer_head *VAR_2 = FUNC_5(VAR_0);

 if (VAR_0->b_transaction == ((void*)0) && !FUNC_3(VAR_2) &&
     !FUNC_2(VAR_2) && !FUNC_4(VAR_2)) {
  FUNC_0(VAR_0, "remove from checkpoint list");
  VAR_1 = FUNC_1(VAR_0) + 1;
 }
 return VAR_1;
}
