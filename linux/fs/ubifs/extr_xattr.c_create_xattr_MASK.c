
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubifs_inode {int data_len; int xattr_cnt; int xattr_names; int xattr; int ui_size; int ui_mutex; int flags; int xattr_size; int data; } ;
struct ubifs_info {int dummy; } ;
struct ubifs_budget_req {int new_ino; int new_dent; int dirtied_ino; int dirtied_ino_d; int new_ino_d; } ;
struct inode {int i_flags; int i_size; int i_ctime; int * i_fop; int * i_op; TYPE_1__* i_mapping; int i_ino; } ;
struct fscrypt_name {int dummy; } ;
struct TYPE_2__ {int * a_ops; } ;


 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (struct inode*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_6 (struct fscrypt_name const*) ;
 int FUNC_7 (struct fscrypt_name const*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (void const*,int,int ) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int ,int ) ;
 int FUNC_15 (struct ubifs_info*,struct ubifs_budget_req*) ;
 int FUNC_16 (struct ubifs_info*,char*,int ,int,...) ;
 struct ubifs_inode* FUNC_17 (struct inode*) ;
 int FUNC_18 (struct ubifs_info*,struct inode*,struct fscrypt_name const*,struct inode*,int ,int) ;
 struct inode* FUNC_19 (struct ubifs_info*,struct inode*,int) ;
 int FUNC_20 (struct ubifs_info*,struct ubifs_budget_req*) ;
 int FUNC_21 (struct inode*) ;
 int FUNC_22 (struct ubifs_info*) ;

__attribute__((used)) static int FUNC_23(struct ubifs_info *VAR_15, struct inode *VAR_16,
   const struct fscrypt_name *VAR_17, const void *VAR_18, int VAR_19)
{
 int VAR_20, VAR_21;
 struct inode *VAR_22;
 struct ubifs_inode *VAR_23, *VAR_24 = FUNC_17(VAR_16);
 struct ubifs_budget_req VAR_25 = { .new_ino = 1, .new_dent = 1,
    .new_ino_d = FUNC_0(VAR_19, 8), .dirtied_ino = 1,
    .dirtied_ino_d = FUNC_0(VAR_24->data_len, 8) };

 if (VAR_24->xattr_cnt >= FUNC_22(VAR_15)) {
  FUNC_16(VAR_15, "inode %lu already has too many xattrs (%d), cannot create more",
     VAR_16->i_ino, VAR_24->xattr_cnt);
  return -VAR_1;
 }






 VAR_21 = VAR_24->xattr_names + VAR_24->xattr_cnt + FUNC_6(VAR_17) + 1;
 if (VAR_21 > VAR_11) {
  FUNC_16(VAR_15, "cannot add one more xattr name to inode %lu, total names length would become %d, max. is %d",
     VAR_16->i_ino, VAR_21, VAR_11);
  return -VAR_1;
 }

 VAR_20 = FUNC_15(VAR_15, &VAR_25);
 if (VAR_20)
  return VAR_20;

 VAR_22 = FUNC_19(VAR_15, VAR_16, VAR_3 | VAR_4);
 if (FUNC_3(VAR_22)) {
  VAR_20 = FUNC_4(VAR_22);
  goto out_budg;
 }


 VAR_22->i_mapping->a_ops = &VAR_12;
 VAR_22->i_op = &VAR_14;
 VAR_22->i_fop = &VAR_13;

 VAR_22->i_flags |= VAR_7 | VAR_5 | VAR_6;
 VAR_23 = FUNC_17(VAR_22);
 VAR_23->xattr = 1;
 VAR_23->flags |= VAR_9;
 VAR_23->data = FUNC_10(VAR_18, VAR_19, VAR_2);
 if (!VAR_23->data) {
  VAR_20 = -VAR_0;
  goto out_free;
 }
 VAR_22->i_size = VAR_23->ui_size = VAR_19;
 VAR_23->data_len = VAR_19;

 FUNC_12(&VAR_24->ui_mutex);
 VAR_16->i_ctime = FUNC_5(VAR_16);
 VAR_24->xattr_cnt += 1;
 VAR_24->xattr_size += FUNC_1(FUNC_6(VAR_17));
 VAR_24->xattr_size += FUNC_2(VAR_19);
 VAR_24->xattr_names += FUNC_6(VAR_17);







 if (FUNC_14(FUNC_7(VAR_17), VAR_10) == 0)
  VAR_24->flags |= VAR_8;

 VAR_20 = FUNC_18(VAR_15, VAR_16, VAR_17, VAR_22, 0, 1);
 if (VAR_20)
  goto out_cancel;
 FUNC_21(VAR_16);
 FUNC_13(&VAR_24->ui_mutex);

 FUNC_20(VAR_15, &VAR_25);
 FUNC_8(VAR_22);
 FUNC_9(VAR_22);
 return 0;

out_cancel:
 VAR_24->xattr_cnt -= 1;
 VAR_24->xattr_size -= FUNC_1(FUNC_6(VAR_17));
 VAR_24->xattr_size -= FUNC_2(VAR_19);
 VAR_24->xattr_names -= FUNC_6(VAR_17);
 VAR_24->flags &= ~VAR_8;
 FUNC_13(&VAR_24->ui_mutex);
out_free:
 FUNC_11(VAR_22);
 FUNC_9(VAR_22);
out_budg:
 FUNC_20(VAR_15, &VAR_25);
 return VAR_20;
}
