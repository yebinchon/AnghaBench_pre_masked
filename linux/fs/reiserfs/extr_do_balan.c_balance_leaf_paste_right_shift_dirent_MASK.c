
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree_balance {int rbytes; int pos_in_item; int * rnum; int * insert_size; int * R; int * rkey; int * CFR; int zeroes_num; int item_pos; int tb_path; } ;
struct reiserfs_de_head {int dummy; } ;
struct item_head {int dummy; } ;
struct buffer_info {int dummy; } ;
struct buffer_head {int dummy; } ;


 int VAR_0 ;
 struct buffer_head* FUNC_0 (int ) ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (struct tree_balance*,struct buffer_info*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct buffer_head*,int ) ;
 int FUNC_5 (struct buffer_info*,int ,int,int,struct reiserfs_de_head*,char const* const,int ) ;
 int FUNC_6 (struct buffer_info*,int ,int,int ,char const* const,int ) ;
 int FUNC_7 (struct tree_balance*,int ,int) ;
 int FUNC_8 (struct tree_balance*,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_9(struct tree_balance *VAR_1,
         struct item_head * const VAR_2,
         const char * const VAR_3)
{
 struct buffer_head *VAR_4 = FUNC_0(VAR_1->tb_path);
 struct buffer_info VAR_5;
 int VAR_6;

 FUNC_1(VAR_1->zeroes_num,
        "PAP-12145: invalid parameter in case of a directory");
 VAR_6 = FUNC_3(FUNC_4(VAR_4, VAR_1->item_pos));


 if (VAR_6 - VAR_1->rbytes < VAR_1->pos_in_item) {
  int VAR_7;

  FUNC_1(VAR_1->rbytes - 1 >= VAR_6 || !VAR_1->insert_size[0],
         "PAP-12150: no enough of entries to shift to R[0]: "
         "rbytes=%d, entry_count=%d", VAR_1->rbytes, VAR_6);






  FUNC_7(VAR_1, VAR_1->rnum[0], VAR_1->rbytes - 1);


  VAR_7 = VAR_1->pos_in_item - VAR_6 +
           VAR_1->rbytes - 1;
  FUNC_2(VAR_1, &VAR_5);
  FUNC_6(&VAR_5, 0, VAR_7,
         VAR_1->insert_size[0], VAR_3, VAR_1->zeroes_num);


  FUNC_5(&VAR_5, 0, VAR_7, 1,
       (struct reiserfs_de_head *) VAR_3,
       VAR_3 + VAR_0, VAR_1->insert_size[0]);


  if (VAR_7 == 0)
   FUNC_8(VAR_1, VAR_1->CFR[0], VAR_1->rkey[0], VAR_1->R[0], 0);

  VAR_1->insert_size[0] = 0;
  VAR_1->pos_in_item++;
 } else {

  FUNC_7(VAR_1, VAR_1->rnum[0], VAR_1->rbytes);
 }
}
