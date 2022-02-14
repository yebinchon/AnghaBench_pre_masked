
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct treepath {int dummy; } ;
struct tree_balance {int key; } ;
struct super_block {int dummy; } ;
struct reiserfs_transaction_handle {int t_super; int t_trans_id; } ;
struct inode {int i_uid; struct super_block* i_sb; } ;
struct cpu_key {int on_disk_key; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct treepath*,struct cpu_key const*) ;
 int FUNC_3 (struct tree_balance*,int *,char const*,int ) ;
 int FUNC_4 (struct inode*,int) ;
 int FUNC_5 (struct inode*,int) ;
 int FUNC_6 (int ,struct tree_balance*,int *,char const*) ;
 scalar_t__ FUNC_7 (int,struct super_block*) ;
 int FUNC_8 (struct super_block*) ;
 int FUNC_9 (struct reiserfs_transaction_handle*,struct tree_balance*,int ,struct treepath*,int) ;
 int FUNC_10 (int *) ;
 int VAR_10 ;
 int FUNC_11 (struct treepath*) ;
 int FUNC_12 (struct super_block*,int ,char*,int,int ,int ) ;
 int FUNC_13 (struct super_block*,char*,char*,struct cpu_key const*) ;
 int FUNC_14 (struct super_block*,int) ;
 int FUNC_15 (struct super_block*) ;
 int FUNC_16 (int ,struct cpu_key const*,struct treepath*) ;
 int FUNC_17 (struct tree_balance*) ;

int FUNC_18(struct reiserfs_transaction_handle *VAR_11,

        struct treepath *VAR_12,

        const struct cpu_key *VAR_13,

        struct inode *VAR_14,

        const char *VAR_15,

        int VAR_16)
{
 struct super_block *VAR_17 = VAR_14->i_sb;
 struct tree_balance VAR_18;
 int VAR_19;
 int VAR_20;
 int VAR_21;

 FUNC_0(!VAR_11->t_trans_id);

 VAR_20 = FUNC_8(VAR_14->i_sb);
 VAR_21 = FUNC_15(VAR_17);
 VAR_19 = FUNC_4(VAR_14, VAR_16);
 FUNC_14(VAR_17, VAR_21);
 if (VAR_19) {
  FUNC_11(VAR_12);
  return VAR_19;
 }
 FUNC_9(VAR_11, &VAR_18, VAR_11->t_super, VAR_12,
         VAR_16);





 if (FUNC_7(VAR_20, VAR_14->i_sb)) {
  goto search_again;
 }

 while ((VAR_19 =
  FUNC_6(VAR_5, &VAR_18, ((void*)0),
     VAR_15)) == VAR_9) {
search_again:

  FUNC_1(VAR_11->t_super, VAR_10);
  VAR_19 =
      FUNC_16(VAR_11->t_super, VAR_13,
            VAR_12);
  if (VAR_19 == VAR_4) {
   VAR_19 = -VAR_2;
   goto error_out;
  }
  if (VAR_19 == VAR_7) {
   FUNC_13(VAR_14->i_sb, "PAP-5710",
      "entry or pasted byte (%K) exists",
      VAR_13);
   VAR_19 = -VAR_1;
   goto error_out;
  }



 }





 if (VAR_19 == VAR_0) {
  FUNC_3(&VAR_18, ((void*)0) , VAR_15, VAR_5);
  return 0;
 }
 VAR_19 = (VAR_19 == VAR_6) ? -VAR_3 : -VAR_2;
error_out:

 FUNC_17(&VAR_18);






 VAR_21 = FUNC_15(VAR_17);
 FUNC_5(VAR_14, VAR_16);
 FUNC_14(VAR_17, VAR_21);
 return VAR_19;
}
