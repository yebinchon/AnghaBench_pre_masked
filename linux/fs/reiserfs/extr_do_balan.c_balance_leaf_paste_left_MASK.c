
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree_balance {int item_pos; int* lnum; int lbytes; } ;
struct item_head {int dummy; } ;


 unsigned int FUNC_0 (struct tree_balance*,struct item_head* const,char const* const) ;
 int FUNC_1 (struct tree_balance*,struct item_head* const,char const* const) ;

__attribute__((used)) static unsigned int FUNC_2(struct tree_balance *VAR_0,
         struct item_head * const VAR_1,
         const char * const VAR_2)
{

 if (VAR_0->item_pos == VAR_0->lnum[0] - 1 && VAR_0->lbytes != -1)
  return FUNC_0(VAR_0, VAR_1, VAR_2);
 else
  FUNC_1(VAR_0, VAR_1, VAR_2);
 return 0;
}
