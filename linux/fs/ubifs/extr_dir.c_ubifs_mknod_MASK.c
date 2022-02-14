
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ubifs_dev_desc {int dummy; } ubifs_dev_desc ;
typedef int umode_t ;
struct ubifs_inode {int ui_size; int data_len; int ui_mutex; union ubifs_dev_desc* data; } ;
struct ubifs_info {int dummy; } ;
struct ubifs_budget_req {int new_ino; int new_dent; int dirtied_ino; int new_ino_d; } ;
struct inode {int i_size; int i_ctime; int i_mtime; int i_mode; int i_ino; TYPE_1__* i_sb; } ;
struct fscrypt_name {int dummy; } ;
struct dentry {int d_name; } ;
typedef int dev_t ;
struct TYPE_2__ {struct ubifs_info* s_fs_info; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct dentry*,struct inode*) ;
 int FUNC_7 (char*,struct dentry*,int ) ;
 int FUNC_8 (struct fscrypt_name*) ;
 int FUNC_9 (struct fscrypt_name*) ;
 int FUNC_10 (struct inode*,int *,int ,struct fscrypt_name*) ;
 int FUNC_11 (struct inode*,int ,int ) ;
 int FUNC_12 (struct inode*) ;
 int FUNC_13 (struct inode*) ;
 int FUNC_14 (union ubifs_dev_desc*) ;
 union ubifs_dev_desc* FUNC_15 (int,int ) ;
 int FUNC_16 (struct inode*) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (struct ubifs_info*,struct ubifs_budget_req*) ;
 int FUNC_20 (union ubifs_dev_desc*,int ) ;
 int FUNC_21 (struct inode*,struct inode*,int *) ;
 struct ubifs_inode* FUNC_22 (struct inode*) ;
 int FUNC_23 (struct ubifs_info*,struct inode*,struct fscrypt_name*,struct inode*,int ,int ) ;
 struct inode* FUNC_24 (struct ubifs_info*,struct inode*,int ) ;
 int FUNC_25 (struct ubifs_info*,struct ubifs_budget_req*) ;

__attribute__((used)) static int FUNC_26(struct inode *VAR_2, struct dentry *VAR_3,
         umode_t VAR_4, dev_t VAR_5)
{
 struct inode *VAR_6;
 struct ubifs_inode *VAR_7;
 struct ubifs_inode *VAR_8 = FUNC_22(VAR_2);
 struct ubifs_info *VAR_9 = VAR_2->i_sb->s_fs_info;
 union ubifs_dev_desc *VAR_10 = ((void*)0);
 int VAR_11;
 int VAR_12, VAR_13 = 0;
 struct ubifs_budget_req VAR_14 = { .new_ino = 1, .new_dent = 1,
     .dirtied_ino = 1 };
 struct fscrypt_name VAR_15;






 FUNC_7("dent '%pd' in dir ino %lu", VAR_3, VAR_2->i_ino);

 if (FUNC_4(VAR_4) || FUNC_5(VAR_4)) {
  VAR_10 = FUNC_15(sizeof(union ubifs_dev_desc), VAR_1);
  if (!VAR_10)
   return -VAR_0;
  VAR_13 = FUNC_20(VAR_10, VAR_5);
 }

 VAR_14.new_ino_d = FUNC_0(VAR_13, 8);
 VAR_12 = FUNC_19(VAR_9, &VAR_14);
 if (VAR_12) {
  FUNC_14(VAR_10);
  return VAR_12;
 }

 VAR_12 = FUNC_10(VAR_2, &VAR_3->d_name, 0, &VAR_15);
 if (VAR_12) {
  FUNC_14(VAR_10);
  goto out_budg;
 }

 VAR_11 = FUNC_1(FUNC_8(&VAR_15));

 VAR_6 = FUNC_24(VAR_9, VAR_2, VAR_4);
 if (FUNC_2(VAR_6)) {
  FUNC_14(VAR_10);
  VAR_12 = FUNC_3(VAR_6);
  goto out_fname;
 }

 FUNC_11(VAR_6, VAR_6->i_mode, VAR_5);
 VAR_6->i_size = FUNC_22(VAR_6)->ui_size = VAR_13;
 VAR_7 = FUNC_22(VAR_6);
 VAR_7->data = VAR_10;
 VAR_7->data_len = VAR_13;

 VAR_12 = FUNC_21(VAR_2, VAR_6, &VAR_3->d_name);
 if (VAR_12)
  goto out_inode;

 FUNC_17(&VAR_8->ui_mutex);
 VAR_2->i_size += VAR_11;
 VAR_8->ui_size = VAR_2->i_size;
 VAR_2->i_mtime = VAR_2->i_ctime = VAR_6->i_ctime;
 VAR_12 = FUNC_23(VAR_9, VAR_2, &VAR_15, VAR_6, 0, 0);
 if (VAR_12)
  goto out_cancel;
 FUNC_18(&VAR_8->ui_mutex);

 FUNC_25(VAR_9, &VAR_14);
 FUNC_12(VAR_6);
 FUNC_6(VAR_3, VAR_6);
 FUNC_9(&VAR_15);
 return 0;

out_cancel:
 VAR_2->i_size -= VAR_11;
 VAR_8->ui_size = VAR_2->i_size;
 FUNC_18(&VAR_8->ui_mutex);
out_inode:
 FUNC_16(VAR_6);
 FUNC_13(VAR_6);
out_fname:
 FUNC_9(&VAR_15);
out_budg:
 FUNC_25(VAR_9, &VAR_14);
 return VAR_12;
}
