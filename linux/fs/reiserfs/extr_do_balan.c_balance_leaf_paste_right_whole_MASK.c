
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree_balance {int* rnum; scalar_t__ pos_in_item; int item_pos; int * insert_size; int zeroes_num; int * R; int * rkey; int * CFR; int rbytes; int tb_path; } ;
struct reiserfs_de_head {int dummy; } ;
struct item_head {int dummy; } ;
struct buffer_info {int dummy; } ;
struct buffer_head {int dummy; } ;


 int FUNC_0 (struct buffer_head*) ;
 int VAR_0 ;
 struct buffer_head* FUNC_1 (int ) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (struct tree_balance*,struct buffer_info*) ;
 scalar_t__ FUNC_4 (struct item_head*) ;
 scalar_t__ FUNC_5 (struct item_head*) ;
 struct item_head* FUNC_6 (int ,int) ;
 int FUNC_7 (struct buffer_info*,int,scalar_t__,int,struct reiserfs_de_head*,char const* const,int ) ;
 int FUNC_8 (struct buffer_info*,int,scalar_t__,int ,char const* const,int ) ;
 int FUNC_9 (struct tree_balance*,int,int ) ;
 int FUNC_10 (struct tree_balance*,int ,int ,int ,int ) ;
 int FUNC_11 (struct item_head*,int ) ;

__attribute__((used)) static void FUNC_12(struct tree_balance *VAR_1,
         struct item_head * const VAR_2,
         const char * const VAR_3)
{
 struct buffer_head *VAR_4 = FUNC_1(VAR_1->tb_path);
 int VAR_5 = FUNC_0(VAR_4);
 struct item_head *VAR_6;
 struct buffer_info VAR_7;

       FUNC_3(VAR_1, &VAR_7);
 FUNC_9(VAR_1, VAR_1->rnum[0], VAR_1->rbytes);


 if (VAR_1->pos_in_item >= 0) {
  FUNC_3(VAR_1, &VAR_7);
  FUNC_8(&VAR_7, VAR_1->item_pos - VAR_5 + VAR_1->rnum[0],
         VAR_1->pos_in_item, VAR_1->insert_size[0], VAR_3,
         VAR_1->zeroes_num);
 }


 VAR_6 = FUNC_6(VAR_1->R[0], VAR_1->item_pos - VAR_5 + VAR_1->rnum[0]);
 if (FUNC_4(VAR_6) && VAR_1->pos_in_item >= 0) {
  FUNC_7(&VAR_7, VAR_1->item_pos - VAR_5 + VAR_1->rnum[0],
       VAR_1->pos_in_item, 1,
       (struct reiserfs_de_head *)VAR_3,
       VAR_3 + VAR_0, VAR_1->insert_size[0]);

  if (!VAR_1->pos_in_item) {

   FUNC_2(VAR_1->item_pos - VAR_5 + VAR_1->rnum[0],
          "PAP-12165: directory item must be first "
          "item of node when pasting is in 0th position");


   FUNC_10(VAR_1, VAR_1->CFR[0], VAR_1->rkey[0], VAR_1->R[0], 0);
  }
 }

 if (FUNC_5(VAR_6))
  FUNC_11(VAR_6, 0);
 VAR_1->zeroes_num = VAR_1->insert_size[0] = 0;
}
