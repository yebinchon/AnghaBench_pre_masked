
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree_balance {scalar_t__ item_pos; scalar_t__ s0num; } ;
struct item_head {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct tree_balance*,struct item_head* const,char const* const) ;
 int FUNC_1 (struct tree_balance*,struct item_head* const,char const* const) ;

__attribute__((used)) static void FUNC_2(struct tree_balance *VAR_1,
          struct item_head * const VAR_2,
          const char * const VAR_3, int VAR_4)
{

 if (0 <= VAR_1->item_pos && VAR_1->item_pos < VAR_1->s0num) {
  if (VAR_4 == VAR_0)
   FUNC_0(VAR_1, VAR_2, VAR_3);
  else
   FUNC_1(VAR_1, VAR_2, VAR_3);
 }
}
