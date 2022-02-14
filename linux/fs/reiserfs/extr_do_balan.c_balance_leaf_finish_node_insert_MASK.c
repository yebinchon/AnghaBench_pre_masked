
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree_balance {int * lkey; scalar_t__* CFL; int item_pos; int zeroes_num; int tb_path; } ;
struct item_head {int dummy; } ;
struct buffer_info {int dummy; } ;
struct buffer_head {int dummy; } ;


 struct buffer_head* FUNC_0 (int ) ;
 int FUNC_1 (struct tree_balance*,struct buffer_info*) ;
 int FUNC_2 (struct buffer_info*,int ,struct item_head* const,char const* const,int ) ;
 int FUNC_3 (struct tree_balance*,scalar_t__,int ,struct buffer_head*,int ) ;

__attribute__((used)) static void FUNC_4(struct tree_balance *VAR_0,
         struct item_head * const VAR_1,
         const char * const VAR_2)
{
 struct buffer_head *VAR_3 = FUNC_0(VAR_0->tb_path);
 struct buffer_info VAR_4;
 FUNC_1(VAR_0, &VAR_4);
 FUNC_2(&VAR_4, VAR_0->item_pos, VAR_1, VAR_2, VAR_0->zeroes_num);


 if (VAR_0->item_pos == 0) {
  if (VAR_0->CFL[0])
   FUNC_3(VAR_0, VAR_0->CFL[0], VAR_0->lkey[0], VAR_3, 0);

 }
}
