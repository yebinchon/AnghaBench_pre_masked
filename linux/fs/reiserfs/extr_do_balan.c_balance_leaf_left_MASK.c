
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree_balance {scalar_t__* lnum; scalar_t__ item_pos; int lbytes; } ;
struct item_head {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_1 (struct tree_balance*,struct item_head* const,char const* const) ;
 unsigned int FUNC_2 (struct tree_balance*,struct item_head* const,char const* const) ;
 int FUNC_3 (struct tree_balance*,scalar_t__,int ) ;

__attribute__((used)) static unsigned int FUNC_4(struct tree_balance *VAR_2,
          struct item_head * const VAR_3,
          const char * const VAR_4, int VAR_5)
{
 if (VAR_2->lnum[0] <= 0)
  return 0;


 if (VAR_2->item_pos < VAR_2->lnum[0]) {
  FUNC_0(VAR_5 != VAR_0 && VAR_5 != VAR_1);

  if (VAR_5 == VAR_0)
   return FUNC_1(VAR_2, VAR_3, VAR_4);
  else
   return FUNC_2(VAR_2, VAR_3, VAR_4);
 } else

  FUNC_3(VAR_2, VAR_2->lnum[0], VAR_2->lbytes);
 return 0;
}
