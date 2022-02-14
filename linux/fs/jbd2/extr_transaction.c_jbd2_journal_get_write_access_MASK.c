
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct journal_head {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef int handle_t ;


 int FUNC_0 (int *,struct journal_head*,int ) ;
 struct journal_head* FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct journal_head*) ;
 scalar_t__ FUNC_3 (int *,struct buffer_head*,int) ;

int FUNC_4(handle_t *VAR_0, struct buffer_head *VAR_1)
{
 struct journal_head *VAR_2;
 int VAR_3;

 if (FUNC_3(VAR_0, VAR_1, 0))
  return 0;

 VAR_2 = FUNC_1(VAR_1);



 VAR_3 = FUNC_0(VAR_0, VAR_2, 0);
 FUNC_2(VAR_2);
 return VAR_3;
}
