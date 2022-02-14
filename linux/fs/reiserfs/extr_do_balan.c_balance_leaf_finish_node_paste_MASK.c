
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree_balance {scalar_t__ pos_in_item; int * insert_size; int tb_sb; int zeroes_num; int item_pos; int tb_path; } ;
struct item_head {int dummy; } ;
struct buffer_info {int dummy; } ;
struct buffer_head {int dummy; } ;


 struct buffer_head* FUNC_0 (int ) ;
 int FUNC_1 (int,char*,int ) ;
 int FUNC_2 (struct tree_balance*,struct item_head* const,char const* const) ;
 int FUNC_3 (struct tree_balance*,struct buffer_info*) ;
 scalar_t__ FUNC_4 (struct item_head*) ;
 scalar_t__ FUNC_5 (struct item_head*) ;
 scalar_t__ FUNC_6 (struct item_head*) ;
 struct item_head* FUNC_7 (struct buffer_head*,int ) ;
 int FUNC_8 (struct buffer_info*,int ,scalar_t__,int ,char const* const,int ) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int ,char*,char*,int ) ;
 int FUNC_11 (struct item_head*,int ) ;

__attribute__((used)) static void FUNC_12(struct tree_balance *VAR_0,
        struct item_head * const VAR_1,
        const char * const VAR_2)
{
 struct buffer_head *VAR_3 = FUNC_0(VAR_0->tb_path);
 struct buffer_info VAR_4;
 struct item_head *VAR_5 = FUNC_7(VAR_3, VAR_0->item_pos);


 if (FUNC_5(VAR_5)) {
  FUNC_2(VAR_0, VAR_1, VAR_2);
  return;
 }



 if (VAR_0->pos_in_item == FUNC_4(VAR_5)) {
  FUNC_1(VAR_0->insert_size[0] <= 0,
         "PAP-12275: insert size must not be %d",
         VAR_0->insert_size[0]);
  FUNC_3(VAR_0, &VAR_4);
  FUNC_8(&VAR_4, VAR_0->item_pos,
         VAR_0->pos_in_item, VAR_0->insert_size[0], VAR_2,
         VAR_0->zeroes_num);

  if (FUNC_6(VAR_5))
   FUNC_11(VAR_5, 0);

  VAR_0->insert_size[0] = 0;
 }







}
