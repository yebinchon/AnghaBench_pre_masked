
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree_balance {int lbytes; int pos_in_item; int * lnum; int * insert_size; scalar_t__ item_pos; int zeroes_num; int * L; } ;
struct reiserfs_de_head {int dummy; } ;
struct item_head {int dummy; } ;
struct buffer_info {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct tree_balance*,struct buffer_info*) ;
 int FUNC_3 (struct item_head*) ;
 struct item_head* FUNC_4 (int ,int) ;
 int FUNC_5 (struct buffer_info*,scalar_t__,int,int,struct reiserfs_de_head*,char const* const,int ) ;
 int FUNC_6 (struct buffer_info*,scalar_t__,int,int ,char const* const,int ) ;
 int FUNC_7 (struct tree_balance*,int ,int) ;

__attribute__((used)) static void FUNC_8(struct tree_balance *VAR_1,
       struct item_head * const VAR_2,
       const char * const VAR_3)
{
 int VAR_4 = FUNC_0(VAR_1->L[0]);
 struct buffer_info VAR_5;

 FUNC_1(VAR_1->zeroes_num,
        "PAP-12090: invalid parameter in case of a directory");


 if (VAR_1->lbytes > VAR_1->pos_in_item) {

  struct item_head *VAR_6;
  int VAR_7, VAR_8 = VAR_1->pos_in_item;





  VAR_7 = FUNC_7(VAR_1, VAR_1->lnum[0], VAR_1->lbytes - 1);
  if (VAR_7 && !VAR_1->item_pos) {
   VAR_6 = FUNC_4(VAR_1->L[0], FUNC_0(VAR_1->L[0]) - 1);
   VAR_8 += FUNC_3(VAR_6) -
      (VAR_1->lbytes - 1);
  }


  FUNC_2(VAR_1, &VAR_5);
  FUNC_6(&VAR_5, VAR_4 + VAR_1->item_pos - VAR_7,
         VAR_8, VAR_1->insert_size[0],
         VAR_3, VAR_1->zeroes_num);
  FUNC_5(&VAR_5, VAR_4 + VAR_1->item_pos - VAR_7,
       VAR_8, 1,
       (struct reiserfs_de_head *) VAR_3,
       VAR_3 + VAR_0, VAR_1->insert_size[0]);
  VAR_1->insert_size[0] = 0;
 } else {





  FUNC_7(VAR_1, VAR_1->lnum[0], VAR_1->lbytes);
 }


 VAR_1->pos_in_item -= VAR_1->lbytes;
}
