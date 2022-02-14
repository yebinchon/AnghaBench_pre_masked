
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree_balance {int* rnum; int item_pos; int rbytes; int tb_path; } ;
struct item_head {int dummy; } ;
struct buffer_head {int dummy; } ;


 int FUNC_0 (struct buffer_head*) ;
 struct buffer_head* FUNC_1 (int ) ;
 int FUNC_2 (struct tree_balance*,struct item_head* const,char const* const) ;
 int FUNC_3 (struct tree_balance*,struct item_head* const,char const* const) ;
 int FUNC_4 (struct tree_balance*,int,int) ;

__attribute__((used)) static void FUNC_5(struct tree_balance *VAR_0,
         struct item_head * const VAR_1,
         const char * const VAR_2)
{
 struct buffer_head *VAR_3 = FUNC_1(VAR_0->tb_path);
 int VAR_4 = FUNC_0(VAR_3);


 if (VAR_4 - VAR_0->rnum[0] > VAR_0->item_pos) {
  FUNC_4(VAR_0, VAR_0->rnum[0], VAR_0->rbytes);
  return;
 }



 if (VAR_0->item_pos == VAR_4 - VAR_0->rnum[0] && VAR_0->rbytes != -1)

  FUNC_2(VAR_0, VAR_1, VAR_2);
 else

  FUNC_3(VAR_0, VAR_1, VAR_2);
}
