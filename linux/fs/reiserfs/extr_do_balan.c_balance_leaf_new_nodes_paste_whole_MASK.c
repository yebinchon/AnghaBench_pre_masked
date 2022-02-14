
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree_balance {int item_pos; scalar_t__ pos_in_item; scalar_t__* insert_size; int* snum; scalar_t__ zeroes_num; struct buffer_head** S_new; int * sbytes; int tb_sb; int tb_path; } ;
struct reiserfs_de_head {int dummy; } ;
struct item_head {int dummy; } ;
struct buffer_info {int dummy; } ;
struct buffer_head {int dummy; } ;


 int FUNC_0 (struct buffer_head*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct buffer_head* FUNC_1 (int ) ;
 int FUNC_2 (int,char*,int) ;
 int FUNC_3 (struct tree_balance*,struct buffer_info*,struct buffer_head*) ;
 scalar_t__ FUNC_4 (struct item_head*) ;
 scalar_t__ FUNC_5 (struct item_head*) ;
 scalar_t__ FUNC_6 (struct item_head*) ;
 struct item_head* FUNC_7 (struct buffer_head*,int) ;
 int FUNC_8 (int ,struct tree_balance*,int,int ,struct buffer_head*) ;
 int FUNC_9 (struct buffer_info*,int,scalar_t__,int,struct reiserfs_de_head*,char const* const,scalar_t__) ;
 int FUNC_10 (struct buffer_info*,int,scalar_t__,scalar_t__,char const* const,scalar_t__) ;
 int FUNC_11 (int ,char*,char*) ;
 int FUNC_12 (struct item_head*,int ) ;

__attribute__((used)) static void FUNC_13(struct tree_balance *VAR_2,
            struct item_head * const VAR_3,
            const char * const VAR_4,
            struct item_head *VAR_5,
            struct buffer_head **VAR_6,
            int VAR_7)

{
 struct buffer_head *VAR_8 = FUNC_1(VAR_2->tb_path);
 int VAR_9 = FUNC_0(VAR_8);
 int VAR_10;
 struct item_head *VAR_11;
 struct buffer_info VAR_12;
 VAR_10 = FUNC_8(VAR_1, VAR_2, VAR_2->snum[VAR_7],
      VAR_2->sbytes[VAR_7], VAR_2->S_new[VAR_7]);

 FUNC_2(VAR_10,
        "PAP-12240: unexpected value returned by leaf_move_items (%d)",
        VAR_10);


 FUNC_3(VAR_2, &VAR_12, VAR_2->S_new[VAR_7]);
 FUNC_10(&VAR_12, VAR_2->item_pos - VAR_9 + VAR_2->snum[VAR_7],
        VAR_2->pos_in_item, VAR_2->insert_size[0],
        VAR_4, VAR_2->zeroes_num);

 VAR_11 = FUNC_7(VAR_2->S_new[VAR_7], VAR_2->item_pos - VAR_9 +
      VAR_2->snum[VAR_7]);
 if (FUNC_5(VAR_11))
  FUNC_9(&VAR_12, VAR_2->item_pos - VAR_9 + VAR_2->snum[VAR_7],
       VAR_2->pos_in_item, 1,
       (struct reiserfs_de_head *)VAR_4,
       VAR_4 + VAR_0, VAR_2->insert_size[0]);


 if (FUNC_6(VAR_11))
  FUNC_12(VAR_11, 0);

 VAR_2->zeroes_num = VAR_2->insert_size[0] = 0;

}
