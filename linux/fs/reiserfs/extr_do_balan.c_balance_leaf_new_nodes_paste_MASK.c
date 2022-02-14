
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree_balance {int* snum; int item_pos; int* sbytes; int * S_new; int tb_path; } ;
struct item_head {int dummy; } ;
struct buffer_head {int dummy; } ;


 int FUNC_0 (struct buffer_head*) ;
 int VAR_0 ;
 struct buffer_head* FUNC_1 (int ) ;
 int FUNC_2 (struct tree_balance*,struct item_head* const,char const* const,struct item_head*,struct buffer_head**,int) ;
 int FUNC_3 (struct tree_balance*,struct item_head* const,char const* const,struct item_head*,struct buffer_head**,int) ;
 int FUNC_4 (int ,struct tree_balance*,int,int,int ) ;

__attribute__((used)) static void FUNC_5(struct tree_balance *VAR_1,
      struct item_head * const VAR_2,
      const char * const VAR_3,
      struct item_head *VAR_4,
      struct buffer_head **VAR_5,
      int VAR_6)
{
 struct buffer_head *VAR_7 = FUNC_1(VAR_1->tb_path);
 int VAR_8 = FUNC_0(VAR_7);


 if (VAR_8 - VAR_1->snum[VAR_6] > VAR_1->item_pos) {
  FUNC_4(VAR_0, VAR_1,
    VAR_1->snum[VAR_6], VAR_1->sbytes[VAR_6], VAR_1->S_new[VAR_6]);
  return;
 }



 if (VAR_1->item_pos == VAR_8 - VAR_1->snum[VAR_6] && VAR_1->sbytes[VAR_6] != -1)

  FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4,
         VAR_5, VAR_6);
 else

  FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4,
         VAR_5, VAR_6);
}
