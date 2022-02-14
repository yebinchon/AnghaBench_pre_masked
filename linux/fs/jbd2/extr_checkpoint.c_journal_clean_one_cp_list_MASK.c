
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct journal_head {struct journal_head* b_cpnext; struct journal_head* b_cpprev; } ;


 int FUNC_0 (struct journal_head*) ;
 int FUNC_1 (struct journal_head*) ;
 scalar_t__ FUNC_2 () ;

__attribute__((used)) static int FUNC_3(struct journal_head *VAR_0, bool VAR_1)
{
 struct journal_head *VAR_2;
 struct journal_head *VAR_3 = VAR_0;
 int VAR_4;

 if (!VAR_0)
  return 0;

 VAR_2 = VAR_0->b_cpprev;
 do {
  VAR_0 = VAR_3;
  VAR_3 = VAR_0->b_cpnext;
  if (!VAR_1)
   VAR_4 = FUNC_1(VAR_0);
  else
   VAR_4 = FUNC_0(VAR_0) + 1;
  if (!VAR_4)
   return 0;
  if (VAR_4 == 2)
   return 1;






  if (FUNC_2())
   return 0;
 } while (VAR_0 != VAR_2);

 return 0;
}
