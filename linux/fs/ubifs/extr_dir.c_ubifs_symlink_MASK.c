
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubifs_inode {int data_len; int ui_size; int ui_mutex; scalar_t__ data; } ;
struct ubifs_info {int dummy; } ;
struct ubifs_budget_req {int new_ino; int new_dent; int dirtied_ino; int new_ino_d; } ;
struct inode {int i_size; int i_ctime; int i_mtime; scalar_t__ i_link; int i_ino; TYPE_1__* i_sb; } ;
struct fscrypt_str {int len; scalar_t__ name; } ;
struct fscrypt_name {int dummy; } ;
struct dentry {int d_name; } ;
struct TYPE_2__ {struct ubifs_info* s_fs_info; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct inode*) ;
 scalar_t__ FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (struct dentry*,struct inode*) ;
 int FUNC_6 (char*,struct dentry*,char const*,int ) ;
 int FUNC_7 (struct fscrypt_name*) ;
 int FUNC_8 (struct inode*,char const*,int,struct fscrypt_str*) ;
 int FUNC_9 (struct fscrypt_name*) ;
 int FUNC_10 (struct inode*,char const*,int,int ,struct fscrypt_str*) ;
 int FUNC_11 (struct inode*,int *,int ,struct fscrypt_name*) ;
 int FUNC_12 (struct inode*) ;
 int FUNC_13 (struct inode*) ;
 scalar_t__ FUNC_14 (int,int ) ;
 int FUNC_15 (struct inode*) ;
 int FUNC_16 (scalar_t__,scalar_t__,int) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (char const*) ;
 int FUNC_20 (struct ubifs_info*,struct ubifs_budget_req*) ;
 int FUNC_21 (struct inode*,struct inode*,int *) ;
 struct ubifs_inode* FUNC_22 (struct inode*) ;
 int FUNC_23 (struct ubifs_info*,struct inode*,struct fscrypt_name*,struct inode*,int ,int ) ;
 struct inode* FUNC_24 (struct ubifs_info*,struct inode*,int) ;
 int FUNC_25 (struct ubifs_info*,struct ubifs_budget_req*) ;

__attribute__((used)) static int FUNC_26(struct inode *VAR_5, struct dentry *VAR_6,
    const char *VAR_7)
{
 struct inode *VAR_8;
 struct ubifs_inode *VAR_9;
 struct ubifs_inode *VAR_10 = FUNC_22(VAR_5);
 struct ubifs_info *VAR_11 = VAR_5->i_sb->s_fs_info;
 int VAR_12, VAR_13, VAR_14 = FUNC_19(VAR_7);
 struct fscrypt_str VAR_15;
 struct ubifs_budget_req VAR_16 = { .new_ino = 1, .new_dent = 1,
     .new_ino_d = FUNC_0(VAR_14, 8),
     .dirtied_ino = 1 };
 struct fscrypt_name VAR_17;

 FUNC_6("dent '%pd', target '%s' in dir ino %lu", VAR_6,
  VAR_7, VAR_5->i_ino);

 VAR_12 = FUNC_10(VAR_5, VAR_7, VAR_14, VAR_4,
          &VAR_15);
 if (VAR_12)
  return VAR_12;





 VAR_12 = FUNC_20(VAR_11, &VAR_16);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_11(VAR_5, &VAR_6->d_name, 0, &VAR_17);
 if (VAR_12)
  goto out_budg;

 VAR_13 = FUNC_1(FUNC_7(&VAR_17));

 VAR_8 = FUNC_24(VAR_11, VAR_5, VAR_2 | VAR_3);
 if (FUNC_3(VAR_8)) {
  VAR_12 = FUNC_4(VAR_8);
  goto out_fname;
 }

 VAR_9 = FUNC_22(VAR_8);
 VAR_9->data = FUNC_14(VAR_15.len, VAR_1);
 if (!VAR_9->data) {
  VAR_12 = -VAR_0;
  goto out_inode;
 }

 if (FUNC_2(VAR_8)) {
  VAR_15.name = VAR_9->data;
  VAR_12 = FUNC_8(VAR_8, VAR_7, VAR_14, &VAR_15);
  if (VAR_12)
   goto out_inode;
 } else {
  FUNC_16(VAR_9->data, VAR_15.name, VAR_15.len);
  VAR_8->i_link = VAR_9->data;
 }






 VAR_9->data_len = VAR_15.len - 1;
 VAR_8->i_size = FUNC_22(VAR_8)->ui_size = VAR_15.len - 1;

 VAR_12 = FUNC_21(VAR_5, VAR_8, &VAR_6->d_name);
 if (VAR_12)
  goto out_inode;

 FUNC_17(&VAR_10->ui_mutex);
 VAR_5->i_size += VAR_13;
 VAR_10->ui_size = VAR_5->i_size;
 VAR_5->i_mtime = VAR_5->i_ctime = VAR_8->i_ctime;
 VAR_12 = FUNC_23(VAR_11, VAR_5, &VAR_17, VAR_8, 0, 0);
 if (VAR_12)
  goto out_cancel;
 FUNC_18(&VAR_10->ui_mutex);

 FUNC_12(VAR_8);
 FUNC_5(VAR_6, VAR_8);
 VAR_12 = 0;
 goto out_fname;

out_cancel:
 VAR_5->i_size -= VAR_13;
 VAR_10->ui_size = VAR_5->i_size;
 FUNC_18(&VAR_10->ui_mutex);
out_inode:
 FUNC_15(VAR_8);
 FUNC_13(VAR_8);
out_fname:
 FUNC_9(&VAR_17);
out_budg:
 FUNC_25(VAR_11, &VAR_16);
 return VAR_12;
}
