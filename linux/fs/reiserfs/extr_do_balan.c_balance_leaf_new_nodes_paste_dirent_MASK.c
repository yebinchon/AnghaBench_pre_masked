
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree_balance {int* sbytes; int pos_in_item; int * S_new; int * snum; int * insert_size; int zeroes_num; int item_pos; int tb_path; } ;
struct reiserfs_de_head {int dummy; } ;
struct item_head {int dummy; } ;
struct buffer_info {int dummy; } ;
struct buffer_head {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct buffer_head* FUNC_0 (int ) ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (struct tree_balance*,struct buffer_info*,int ) ;
 int FUNC_3 (struct item_head*) ;
 struct item_head* FUNC_4 (struct buffer_head*,int ) ;
 int FUNC_5 (int ,struct tree_balance*,int ,int,int ) ;
 int FUNC_6 (struct buffer_info*,int ,int,int,struct reiserfs_de_head*,char const* const,int ) ;
 int FUNC_7 (struct buffer_info*,int ,int,int ,char const* const,int ) ;

__attribute__((used)) static void FUNC_8(struct tree_balance *VAR_2,
      struct item_head * const VAR_3,
      const char * const VAR_4,
      struct item_head *VAR_5,
      struct buffer_head **VAR_6,
      int VAR_7)
{
 struct buffer_head *VAR_8 = FUNC_0(VAR_2->tb_path);
 struct item_head *VAR_9 = FUNC_4(VAR_8, VAR_2->item_pos);
 int VAR_10 = FUNC_3(VAR_9);
 struct buffer_info VAR_11;

 if (VAR_10 - VAR_2->sbytes[VAR_7] < VAR_2->pos_in_item &&
     VAR_2->pos_in_item <= VAR_10) {


  FUNC_1(!VAR_2->insert_size[0],
         "PAP-12215: insert_size is already 0");
  FUNC_1(VAR_2->sbytes[VAR_7] - 1 >= VAR_10,
         "PAP-12220: there are no so much entries (%d), only %d",
         VAR_2->sbytes[VAR_7] - 1, VAR_10);






  FUNC_5(VAR_1, VAR_2, VAR_2->snum[VAR_7],
    VAR_2->sbytes[VAR_7] - 1, VAR_2->S_new[VAR_7]);





  FUNC_2(VAR_2, &VAR_11, VAR_2->S_new[VAR_7]);
  FUNC_7(&VAR_11, 0, VAR_2->pos_in_item - VAR_10 +
         VAR_2->sbytes[VAR_7] - 1, VAR_2->insert_size[0],
         VAR_4, VAR_2->zeroes_num);


  FUNC_6(&VAR_11, 0, VAR_2->pos_in_item - VAR_10 +
       VAR_2->sbytes[VAR_7] - 1, 1,
       (struct reiserfs_de_head *) VAR_4,
       VAR_4 + VAR_0, VAR_2->insert_size[0]);

  VAR_2->insert_size[0] = 0;
  VAR_2->pos_in_item++;
 } else {

  FUNC_5(VAR_1, VAR_2, VAR_2->snum[VAR_7],
    VAR_2->sbytes[VAR_7], VAR_2->S_new[VAR_7]);
 }

}
