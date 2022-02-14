
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct tree_balance {int* insert_size; int* blknum; int ** FEB; int tb_sb; int ** CFR; int ** CFL; int ** FR; int ** FL; int ** R; int ** L; TYPE_1__* tb_path; int transaction_handle; int fs_gen; } ;
struct item_head {int dummy; } ;
struct buffer_head {int dummy; } ;
struct TYPE_8__ {scalar_t__ cur_tb; int s_fix_nodes; } ;
struct TYPE_7__ {int pos_in_item; } ;


 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct buffer_head*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct tree_balance*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 int VAR_5 ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*) ;
 struct buffer_head* FUNC_5 (TYPE_1__*) ;
 TYPE_3__* FUNC_6 (int ) ;
 int VAR_6 ;
 int FUNC_7 (int,char*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct buffer_head*) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (struct buffer_head*) ;
 int FUNC_12 (struct buffer_head*) ;
 int FUNC_13 (int,struct tree_balance*,int,int,int,struct item_head*,void const*) ;
 int FUNC_14 (struct tree_balance*,int) ;
 int FUNC_15 (struct tree_balance*,int) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (struct tree_balance*) ;
 int FUNC_18 (struct tree_balance*,int) ;
 int FUNC_19 (int ,int ) ;
 int FUNC_20 (TYPE_1__*) ;
 int FUNC_21 (int ,TYPE_1__*) ;
 int FUNC_22 (struct buffer_head*,int ,int,int) ;
 int FUNC_23 (char*) ;
 int FUNC_24 (int ,char*,char*,...) ;
 int FUNC_25 (int ,int ,int) ;
 int FUNC_26 (int ,int *) ;
 int FUNC_27 (int ,int) ;
 int FUNC_28 (int ) ;
 int FUNC_29 (struct tree_balance*) ;

int FUNC_30(int VAR_7, struct tree_balance *VAR_8,
       struct item_head *VAR_9, const void *VAR_10)
{
 int VAR_11, VAR_12, VAR_13 = FUNC_4(VAR_8->tb_path);
 int VAR_14;





 int VAR_15 = 0;
 struct buffer_head *VAR_16 = FUNC_5(VAR_8->tb_path);

 ++FUNC_6(VAR_8->tb_sb)->s_fix_nodes;

 VAR_14 = VAR_8->tb_path->pos_in_item;

 VAR_8->fs_gen = FUNC_16(VAR_8->tb_sb);







 FUNC_25(VAR_8->tb_sb,
         FUNC_8(VAR_8->tb_sb), 1);
 FUNC_19(VAR_8->transaction_handle,
      FUNC_8(VAR_8->tb_sb));
 if (FUNC_2(VAR_8))
  return VAR_6;


 if (FUNC_11(VAR_16)) {
  int VAR_17 = FUNC_28(VAR_8->tb_sb);
  FUNC_9(VAR_16);
  FUNC_27(VAR_8->tb_sb, VAR_17);
  if (FUNC_2(VAR_8))
   return VAR_6;
 }
 if (FUNC_17(VAR_8) == VAR_6)

  return VAR_6;


 for (VAR_12 = 0; VAR_12 < VAR_4 && VAR_8->insert_size[VAR_12]; VAR_12++) {
  VAR_11 = FUNC_14(VAR_8, VAR_12);
  if (VAR_11 != VAR_0)
   goto repeat;

  VAR_11 = FUNC_13(VAR_7, VAR_8, VAR_12, VAR_13,
        VAR_14, VAR_9, VAR_10);
  if (VAR_11 != VAR_0) {
   if (VAR_11 == VAR_5) {

    VAR_11 = FUNC_18(VAR_8, VAR_12);
    if (VAR_11 != VAR_0)
     goto repeat;
    if (VAR_12 != VAR_4 - 1)
     VAR_8->insert_size[VAR_12 + 1] = 0;




    break;
   }
   goto repeat;
  }

  VAR_11 = FUNC_18(VAR_8, VAR_12);
  if (VAR_11 != VAR_0)
   goto repeat;





  VAR_11 = FUNC_15(VAR_8, VAR_12);
  if (VAR_11 != VAR_0)
   goto repeat;





  if (!FUNC_3(VAR_8->tb_path, VAR_12)) {

   FUNC_7(VAR_8->blknum[VAR_12] != 1,
          "PAP-8350: creating new empty root");

   if (VAR_12 < VAR_4 - 1)
    VAR_8->insert_size[VAR_12 + 1] = 0;
  } else if (!FUNC_3(VAR_8->tb_path, VAR_12 + 1)) {






   if (VAR_8->blknum[VAR_12] > 1) {

    FUNC_7(VAR_12 == VAR_4 - 1,
           "PAP-8355: attempt to create too high of a tree");

    VAR_8->insert_size[VAR_12 + 1] =
        (VAR_1 +
         VAR_2) * (VAR_8->blknum[VAR_12] - 1) +
        VAR_1;
   } else if (VAR_12 < VAR_4 - 1)
    VAR_8->insert_size[VAR_12 + 1] = 0;
  } else
   VAR_8->insert_size[VAR_12 + 1] =
       (VAR_1 + VAR_2) * (VAR_8->blknum[VAR_12] - 1);
 }

 VAR_11 = FUNC_29(VAR_8);
 if (VAR_11 == VAR_0) {
  if (FUNC_2(VAR_8)) {
   VAR_15 = 1;
   VAR_11 = VAR_6;
   goto repeat;
  } else {
   return VAR_0;
  }
 } else {
  VAR_15 = 1;
  goto repeat;
 }

repeat:







 {
  int VAR_18;


  if (VAR_15) {
   FUNC_21(VAR_8->tb_sb, VAR_8->tb_path);
  } else {
   FUNC_20(VAR_8->tb_path);
  }

  for (VAR_18 = 0; VAR_18 < VAR_4; VAR_18++) {
   if (VAR_15) {
    FUNC_26(VAR_8->tb_sb,
         VAR_8->L[VAR_18]);
    FUNC_26(VAR_8->tb_sb,
         VAR_8->R[VAR_18]);
    FUNC_26(VAR_8->tb_sb,
         VAR_8->FL[VAR_18]);
    FUNC_26(VAR_8->tb_sb,
         VAR_8->FR[VAR_18]);
    FUNC_26(VAR_8->tb_sb,
         VAR_8->
         CFL[VAR_18]);
    FUNC_26(VAR_8->tb_sb,
         VAR_8->
         CFR[VAR_18]);
   }

   FUNC_10(VAR_8->L[VAR_18]);
   FUNC_10(VAR_8->R[VAR_18]);
   FUNC_10(VAR_8->FL[VAR_18]);
   FUNC_10(VAR_8->FR[VAR_18]);
   FUNC_10(VAR_8->CFL[VAR_18]);
   FUNC_10(VAR_8->CFR[VAR_18]);

   VAR_8->L[VAR_18] = ((void*)0);
   VAR_8->R[VAR_18] = ((void*)0);
   VAR_8->FL[VAR_18] = ((void*)0);
   VAR_8->FR[VAR_18] = ((void*)0);
   VAR_8->CFL[VAR_18] = ((void*)0);
   VAR_8->CFR[VAR_18] = ((void*)0);
  }

  if (VAR_15) {
   for (VAR_18 = 0; VAR_18 < VAR_3; VAR_18++) {
    if (VAR_8->FEB[VAR_18])
     FUNC_26
         (VAR_8->tb_sb, VAR_8->FEB[VAR_18]);
   }
  }
  return VAR_11;
 }

}
