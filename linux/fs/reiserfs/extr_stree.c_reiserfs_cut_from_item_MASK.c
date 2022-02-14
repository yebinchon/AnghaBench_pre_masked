
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct treepath {int dummy; } ;
struct tree_balance {int* insert_size; struct treepath* tb_path; } ;
struct super_block {int s_blocksize; } ;
struct reiserfs_transaction_handle {int t_trans_id; } ;
struct page {int dummy; } ;
struct item_head {int dummy; } ;
struct inode {int i_uid; struct super_block* i_sb; int i_mode; } ;
struct cpu_key {int key_length; } ;
typedef int loff_t ;
struct TYPE_2__ {int i_flags; int i_first_direct_byte; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char VAR_4 ;
 char VAR_5 ;
 char VAR_6 ;
 char VAR_7 ;
 char VAR_8 ;
 char VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (struct treepath*) ;
 int FUNC_2 (struct treepath*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (struct super_block*,int ) ;
 int VAR_13 ;
 TYPE_1__* FUNC_4 (struct inode*) ;
 int VAR_14 ;
 int FUNC_5 (int,char*) ;
 int FUNC_6 (int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_7 (struct tree_balance*,char) ;
 int VAR_18 ;
 int FUNC_8 (struct tree_balance*,int *,int *,char) ;
 int FUNC_9 (struct inode*,int) ;
 int FUNC_10 (char,struct tree_balance*,int *,int *) ;
 int VAR_19 ;
 int FUNC_11 (struct item_head*) ;
 int FUNC_12 (struct reiserfs_transaction_handle*,struct inode*,struct treepath*) ;
 int FUNC_13 (struct reiserfs_transaction_handle*,struct tree_balance*,struct super_block*,struct treepath*,int) ;
 scalar_t__ FUNC_14 (struct item_head*) ;
 int FUNC_15 (struct item_head*) ;
 int FUNC_16 (struct item_head*) ;
 int FUNC_17 (struct reiserfs_transaction_handle*,struct inode*,struct page*,struct treepath*,struct cpu_key*,int,char*) ;
 int FUNC_18 (struct treepath*) ;
 char FUNC_19 (struct reiserfs_transaction_handle*,struct inode*,struct treepath*,struct cpu_key*,int*,int*,int) ;
 int FUNC_20 (int ,int,scalar_t__,scalar_t__) ;
 int FUNC_21 (struct super_block*,int ,char*,int,int ,char) ;
 int FUNC_22 (struct super_block*,char*,char*,struct cpu_key*,...) ;
 int FUNC_23 (struct super_block*,char*,char*,...) ;
 int FUNC_24 (struct super_block*,int) ;
 int FUNC_25 (struct super_block*) ;
 int FUNC_26 (struct super_block*,struct cpu_key*,struct treepath*) ;
 int FUNC_27 (struct cpu_key*,int ) ;
 int FUNC_28 (struct cpu_key*,int ) ;
 struct item_head* FUNC_29 (struct treepath*) ;
 int FUNC_30 (struct tree_balance*) ;
 int FUNC_31 (struct page*,int) ;

int FUNC_32(struct reiserfs_transaction_handle *VAR_20,
      struct treepath *VAR_21,
      struct cpu_key *VAR_22,
      struct inode *VAR_23,
      struct page *VAR_24, loff_t VAR_25)
{
 struct super_block *VAR_26 = VAR_23->i_sb;






 struct tree_balance VAR_27;
 struct item_head *VAR_28;
 int VAR_29 = 0;
 int VAR_30 = VAR_0;
 int VAR_31 = 0;
 int VAR_32 = 0;
 char VAR_33;
 int VAR_34 = -1;
 int VAR_35;
 loff_t VAR_36 = 0;
 int VAR_37;

 FUNC_0(!VAR_20->t_trans_id);

 FUNC_13(VAR_20, &VAR_27, VAR_23->i_sb, VAR_21,
         VAR_29);





 while (1) {







  VAR_33 =
      FUNC_19(VAR_20, VAR_23, VAR_21,
           VAR_22, &VAR_31,
           &VAR_29, VAR_25);
  if (VAR_33 == VAR_4) {




   FUNC_5(VAR_30 != VAR_0,
          "PAP-5570: can not convert twice");

   VAR_30 =
       FUNC_17(VAR_20, VAR_23, VAR_24,
           VAR_21, VAR_22,
           VAR_25, &VAR_33);
   if (VAR_33 == VAR_9)

    return VAR_30;

   VAR_32 = 1;






   VAR_34 = VAR_30;
   FUNC_28(VAR_22, VAR_15);
   VAR_22->key_length = 4;
   VAR_25 -=
       (VAR_25 & (VAR_26->s_blocksize - 1));
   VAR_36 = VAR_25;
   FUNC_27(VAR_22, VAR_25 + 1);
   if (FUNC_26
       (VAR_26, VAR_22,
        VAR_21) == VAR_12) {
    FUNC_20(FUNC_2(VAR_21), 3,
         FUNC_1(VAR_21) - 1,
         FUNC_1(VAR_21) + 1);
    FUNC_22(VAR_26, "PAP-5580", "item to "
            "convert does not exist (%K)",
            VAR_22);
   }
   continue;
  }
  if (VAR_29 == 0) {
   FUNC_18(VAR_21);
   return 0;
  }

  VAR_27.insert_size[0] = VAR_29;

  VAR_30 = FUNC_10(VAR_33, &VAR_27, ((void*)0), ((void*)0));
  if (VAR_30 != VAR_14)
   break;

  FUNC_3(VAR_26, VAR_18);

  VAR_30 =
      FUNC_26(VAR_26, VAR_22, VAR_21);
  if (VAR_30 == VAR_11)
   continue;

  FUNC_23(VAR_26, "PAP-5610", "item %K not found",
     VAR_22);
  FUNC_30(&VAR_27);
  return (VAR_30 == VAR_3) ? -VAR_1 : -VAR_2;
 }


 if (VAR_30 != VAR_0) {
  if (VAR_32) {




   FUNC_12(VAR_20, VAR_23, VAR_21);
  }
  if (VAR_30 == VAR_10)
   FUNC_23(VAR_26, "reiserfs-5092",
      "NO_DISK_SPACE");
  FUNC_30(&VAR_27);
  return -VAR_1;
 }



 FUNC_5(VAR_33 == VAR_8 || VAR_33 == VAR_7, "invalid mode");


 VAR_35 =
     (VAR_33 ==
      VAR_6) ? FUNC_11(FUNC_29(VAR_21)) : -VAR_27.
     insert_size[0];
 if (VAR_34 == -1)
  VAR_30 = FUNC_7(&VAR_27, VAR_33);
 else
  VAR_30 = VAR_34;





 VAR_28 = FUNC_29(VAR_27.tb_path);
 if (!FUNC_6(VAR_23->i_mode) && FUNC_14(VAR_28)) {
  if (VAR_33 == VAR_6 &&
      (FUNC_16(VAR_28) & (VAR_26->s_blocksize - 1)) ==
      1) {

   FUNC_4(VAR_23)->i_first_direct_byte = VAR_16;
   VAR_35 = VAR_26->s_blocksize + VAR_17;
  } else {
   VAR_35 = 0;
  }
 }
 FUNC_8(&VAR_27, ((void*)0), ((void*)0), VAR_33);
 if (VAR_32) {






  FUNC_31(VAR_24, VAR_36);
  FUNC_4(VAR_23)->i_flags &= ~VAR_19;
 }





 VAR_37 = FUNC_25(VAR_26);
 FUNC_9(VAR_23, VAR_35);
 FUNC_24(VAR_26, VAR_37);
 return VAR_30;
}
