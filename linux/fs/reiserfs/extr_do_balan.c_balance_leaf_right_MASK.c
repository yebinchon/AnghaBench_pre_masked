
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree_balance {scalar_t__* rnum; } ;
struct item_head {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct tree_balance*,struct item_head* const,char const* const) ;
 int FUNC_2 (struct tree_balance*,struct item_head* const,char const* const) ;

__attribute__((used)) static void FUNC_3(struct tree_balance *VAR_2,
          struct item_head * const VAR_3,
          const char * const VAR_4, int VAR_5)
{
 if (VAR_2->rnum[0] <= 0)
  return;

 FUNC_0(VAR_5 != VAR_0 && VAR_5 != VAR_1);

 if (VAR_5 == VAR_0)
  FUNC_1(VAR_2, VAR_3, VAR_4);
 else
  FUNC_2(VAR_2, VAR_3, VAR_4);
}
