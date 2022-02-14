
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree_balance {int item_pos; int zeroes_num; int * insert_size; int pos_in_item; int * L; int lbytes; int * lnum; int tb_path; } ;
struct reiserfs_de_head {int dummy; } ;
struct item_head {int dummy; } ;
struct buffer_info {int dummy; } ;
struct buffer_head {int b_size; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct buffer_head* FUNC_1 (int ) ;
 int FUNC_2 (struct tree_balance*,struct buffer_info*) ;
 scalar_t__ FUNC_3 (struct item_head*) ;
 scalar_t__ FUNC_4 (struct item_head*) ;
 scalar_t__ FUNC_5 (struct item_head*) ;
 scalar_t__ FUNC_6 (struct item_head*) ;
 struct item_head* FUNC_7 (int ,int) ;
 int FUNC_8 (struct buffer_head*,int ) ;
 int FUNC_9 (struct buffer_info*,int,int ,int,struct reiserfs_de_head*,char const* const,int ) ;
 int FUNC_10 (struct buffer_info*,int,int ,int ,char const* const,int ) ;
 int FUNC_11 (struct tree_balance*,int ,int ) ;
 scalar_t__ FUNC_12 (int ,int ) ;
 int FUNC_13 (struct item_head*,int ) ;

__attribute__((used)) static void FUNC_14(struct tree_balance *VAR_1,
       struct item_head * const VAR_2,
       const char * const VAR_3)
{
 struct buffer_head *VAR_4 = FUNC_1(VAR_1->tb_path);
 int VAR_5 = FUNC_0(VAR_1->L[0]);
 struct buffer_info VAR_6;
 struct item_head *VAR_7;
 int VAR_8;


 if (!VAR_1->item_pos &&
     FUNC_12(FUNC_8(VAR_4, 0), VAR_4->b_size)) {




  VAR_7 = FUNC_7(VAR_1->L[0], VAR_5 - 1);
  if (FUNC_5(VAR_7))
   VAR_1->pos_in_item += FUNC_3(VAR_7);
  else
   VAR_1->pos_in_item += FUNC_4(VAR_7);
 }





 VAR_8 = FUNC_11(VAR_1, VAR_1->lnum[0], VAR_1->lbytes);


 FUNC_2(VAR_1, &VAR_6);
 FUNC_10(&VAR_6, VAR_5 + VAR_1->item_pos - VAR_8, VAR_1->pos_in_item,
        VAR_1->insert_size[0], VAR_3, VAR_1->zeroes_num);


 VAR_7 = FUNC_7(VAR_1->L[0], VAR_5 + VAR_1->item_pos - VAR_8);
 if (FUNC_5(VAR_7))
  FUNC_9(&VAR_6, VAR_5 + VAR_1->item_pos - VAR_8,
       VAR_1->pos_in_item, 1,
       (struct reiserfs_de_head *)VAR_3,
       VAR_3 + VAR_0, VAR_1->insert_size[0]);





 if (FUNC_6(VAR_7))
  FUNC_13(VAR_7, 0);

 VAR_1->insert_size[0] = 0;
 VAR_1->zeroes_num = 0;
}
