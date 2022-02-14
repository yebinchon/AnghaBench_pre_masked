
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int umode_t ;
struct ubifs_inode {int dirty; int ui_mutex; } ;
struct ubifs_info {int dummy; } ;
struct ubifs_budget_req {int new_ino; int new_dent; int dirtied_ino; } ;
struct inode {int * i_op; int i_mode; int i_ino; TYPE_1__* i_sb; } ;
struct fscrypt_name {int dummy; } ;
struct dentry {int d_name; } ;
struct TYPE_2__ {struct ubifs_info* s_fs_info; } ;


 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int VAR_0 ;
 int FUNC_2 (struct dentry*,struct inode*) ;
 int FUNC_3 (char*,struct dentry*,int ,int ) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct fscrypt_name*) ;
 int FUNC_6 (struct inode*,int *,int ,struct fscrypt_name*) ;
 int FUNC_7 (struct inode*,int ,int ) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct ubifs_info*,int) ;
 int FUNC_15 (struct ubifs_info*,struct ubifs_budget_req*) ;
 int FUNC_16 (struct ubifs_info*,char*,int) ;
 int VAR_1 ;
 int FUNC_17 (struct inode*,struct inode*,int *) ;
 struct ubifs_inode* FUNC_18 (struct inode*) ;
 int FUNC_19 (struct ubifs_info*,struct inode*,struct fscrypt_name*,struct inode*,int,int ) ;
 struct inode* FUNC_20 (struct ubifs_info*,struct inode*,int ) ;
 int FUNC_21 (struct ubifs_info*,struct ubifs_budget_req*) ;

__attribute__((used)) static int FUNC_22(struct inode *VAR_2, struct dentry *VAR_3,
        umode_t VAR_4, struct inode **VAR_5)
{
 struct inode *VAR_6;
 struct ubifs_info *VAR_7 = VAR_2->i_sb->s_fs_info;
 struct ubifs_budget_req VAR_8 = { .new_ino = 1, .new_dent = 1};
 struct ubifs_budget_req VAR_9 = { .dirtied_ino = 1 };
 struct ubifs_inode *VAR_10, *VAR_11 = FUNC_18(VAR_2);
 int VAR_12, VAR_13 = 0;
 struct fscrypt_name VAR_14;






 FUNC_3("dent '%pd', mode %#hx in dir ino %lu",
  VAR_3, VAR_4, VAR_2->i_ino);

 VAR_12 = FUNC_6(VAR_2, &VAR_3->d_name, 0, &VAR_14);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_15(VAR_7, &VAR_8);
 if (VAR_12) {
  FUNC_5(&VAR_14);
  return VAR_12;
 }

 VAR_12 = FUNC_15(VAR_7, &VAR_9);
 if (VAR_12) {
  FUNC_21(VAR_7, &VAR_8);
  FUNC_5(&VAR_14);
  return VAR_12;
 }

 VAR_6 = FUNC_20(VAR_7, VAR_2, VAR_4);
 if (FUNC_0(VAR_6)) {
  VAR_12 = FUNC_1(VAR_6);
  goto out_budg;
 }
 VAR_10 = FUNC_18(VAR_6);

 if (VAR_5) {
  FUNC_7(VAR_6, VAR_6->i_mode, VAR_0);
  FUNC_14(VAR_7, VAR_6->i_op == &VAR_1);
 }

 VAR_12 = FUNC_17(VAR_2, VAR_6, &VAR_3->d_name);
 if (VAR_12)
  goto out_inode;

 FUNC_12(&VAR_10->ui_mutex);
 FUNC_8(VAR_6);

 if (VAR_5) {
  FUNC_11(VAR_6);
  FUNC_4(VAR_6);
  *VAR_5 = VAR_6;
 } else {
  FUNC_2(VAR_3, VAR_6);
 }
 FUNC_14(VAR_7, VAR_10->dirty);

 VAR_13 = 1;
 FUNC_13(&VAR_10->ui_mutex);

 FUNC_12(&VAR_11->ui_mutex);
 VAR_12 = FUNC_19(VAR_7, VAR_2, &VAR_14, VAR_6, 1, 0);
 if (VAR_12)
  goto out_cancel;
 FUNC_13(&VAR_11->ui_mutex);

 FUNC_21(VAR_7, &VAR_8);

 return 0;

out_cancel:
 FUNC_13(&VAR_11->ui_mutex);
out_inode:
 FUNC_10(VAR_6);
 if (!VAR_13)
  FUNC_9(VAR_6);
out_budg:
 FUNC_21(VAR_7, &VAR_8);
 if (!VAR_13)
  FUNC_21(VAR_7, &VAR_9);
 FUNC_5(&VAR_14);
 FUNC_16(VAR_7, "cannot create temporary file, error %d", VAR_12);
 return VAR_12;
}
