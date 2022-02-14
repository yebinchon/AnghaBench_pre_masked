
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree_balance {scalar_t__ pos_in_item; int * insert_size; int * lkey; scalar_t__* CFL; int * L; int item_pos; int zeroes_num; int tb_path; } ;
struct reiserfs_de_head {int dummy; } ;
struct item_head {int dummy; } ;
struct buffer_info {int dummy; } ;
struct buffer_head {int dummy; } ;


 int VAR_0 ;
 struct buffer_head* FUNC_0 (int ) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (struct tree_balance*,struct buffer_info*) ;
 scalar_t__ FUNC_3 (struct item_head*) ;
 struct item_head* FUNC_4 (struct buffer_head*,int ) ;
 int FUNC_5 (struct buffer_info*,int ,scalar_t__,int,struct reiserfs_de_head*,char const* const,int ) ;
 int FUNC_6 (struct buffer_info*,int ,scalar_t__,int ,char const* const,int ) ;
 int FUNC_7 (struct tree_balance*,scalar_t__,int ,struct buffer_head*,int ) ;

__attribute__((used)) static void FUNC_8(struct tree_balance *VAR_1,
        struct item_head * const VAR_2,
        const char * const VAR_3)
{
 struct buffer_head *VAR_4 = FUNC_0(VAR_1->tb_path);
 struct item_head *VAR_5 = FUNC_4(VAR_4, VAR_1->item_pos);
 struct buffer_info VAR_6;

 if (VAR_1->pos_in_item >= 0 && VAR_1->pos_in_item <= FUNC_3(VAR_5)) {
  FUNC_1(!VAR_1->insert_size[0],
         "PAP-12260: insert_size is 0 already");


  FUNC_2(VAR_1, &VAR_6);
  FUNC_6(&VAR_6, VAR_1->item_pos, VAR_1->pos_in_item,
         VAR_1->insert_size[0], VAR_3, VAR_1->zeroes_num);


  FUNC_5(&VAR_6, VAR_1->item_pos, VAR_1->pos_in_item, 1,
       (struct reiserfs_de_head *)VAR_3,
       VAR_3 + VAR_0, VAR_1->insert_size[0]);

  if (!VAR_1->item_pos && !VAR_1->pos_in_item) {
   FUNC_1(!VAR_1->CFL[0] || !VAR_1->L[0],
          "PAP-12270: CFL[0]/L[0] must  be specified");
   if (VAR_1->CFL[0])
    FUNC_7(VAR_1, VAR_1->CFL[0], VAR_1->lkey[0],
         VAR_4, 0);
  }

  VAR_1->insert_size[0] = 0;
 }
}
