
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct treepath {int dummy; } ;
struct tree_balance {int key; } ;
struct reiserfs_transaction_handle {TYPE_1__* t_super; int t_trans_id; } ;
struct item_head {int dummy; } ;
struct inode {TYPE_1__* i_sb; int i_uid; int i_mode; } ;
struct cpu_key {int on_disk_key; } ;
struct TYPE_10__ {int s_blocksize; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int ) ;
 int VAR_11 ;
 int FUNC_3 (struct tree_balance*,struct item_head*,char const*,int ) ;
 int FUNC_4 (struct inode*,int) ;
 int FUNC_5 (struct inode*,int) ;
 int FUNC_6 (int ,struct tree_balance*,struct item_head*,char const*) ;
 scalar_t__ FUNC_7 (int,TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (struct item_head*) ;
 int FUNC_10 (struct item_head*) ;
 int FUNC_11 (struct reiserfs_transaction_handle*,struct tree_balance*,TYPE_1__*,struct treepath*,scalar_t__) ;
 int VAR_12 ;
 scalar_t__ FUNC_12 (struct item_head*) ;
 int FUNC_13 (struct treepath*) ;
 int FUNC_14 (TYPE_1__*,int ,char*,int,int ,int ) ;
 int FUNC_15 (TYPE_1__*,char*,char*,struct cpu_key const*) ;
 int FUNC_16 (TYPE_1__*,int) ;
 int FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (TYPE_1__*,struct cpu_key const*,struct treepath*) ;
 int FUNC_19 (struct tree_balance*) ;

int FUNC_20(struct reiserfs_transaction_handle *VAR_13,
    struct treepath *VAR_14, const struct cpu_key *VAR_15,
    struct item_head *VAR_16, struct inode *VAR_17,
    const char *VAR_18)
{
 struct tree_balance VAR_19;
 int VAR_20;
 int VAR_21 = 0;
 int VAR_22 = 0;

 FUNC_0(!VAR_13->t_trans_id);

 if (VAR_17) {
  int VAR_23;
  VAR_21 = FUNC_8(VAR_17->i_sb);
  VAR_22 = FUNC_10(VAR_16);






  if (!FUNC_2(VAR_17->i_mode) && FUNC_12(VAR_16))
   VAR_22 = VAR_17->i_sb->s_blocksize + VAR_11;
  VAR_23 = FUNC_17(VAR_17->i_sb);
  VAR_20 = FUNC_4(VAR_17, VAR_22);
  FUNC_16(VAR_17->i_sb, VAR_23);
  if (VAR_20) {
   FUNC_13(VAR_14);
   return VAR_20;
  }
 }
 FUNC_11(VAR_13, &VAR_19, VAR_13->t_super, VAR_14,
         VAR_4 + FUNC_10(VAR_16));







 if (VAR_17 && FUNC_7(VAR_21, VAR_17->i_sb)) {
  goto search_again;
 }

 while ((VAR_20 =
  FUNC_6(VAR_7, &VAR_19, VAR_16,
     VAR_18)) == VAR_10) {
search_again:

  FUNC_1(VAR_13->t_super, VAR_12);
  VAR_20 = FUNC_18(VAR_13->t_super, VAR_15, VAR_14);
  if (VAR_20 == VAR_5) {
   VAR_20 = -VAR_2;
   goto error_out;
  }
  if (VAR_20 == VAR_6) {
   FUNC_15(VAR_13->t_super, "PAP-5760",
      "key %K already exists in the tree",
      VAR_15);
   VAR_20 = -VAR_1;
   goto error_out;
  }
 }


 if (VAR_20 == VAR_0) {
  FUNC_3(&VAR_19, VAR_16, VAR_18, VAR_7);
  return 0;
 }

 VAR_20 = (VAR_20 == VAR_8) ? -VAR_3 : -VAR_2;
error_out:

 FUNC_19(&VAR_19);





 if (VAR_17) {
  int VAR_24 = FUNC_17(VAR_17->i_sb);
  FUNC_5(VAR_17, VAR_22);
  FUNC_16(VAR_17->i_sb, VAR_24);
 }
 return VAR_20;
}
