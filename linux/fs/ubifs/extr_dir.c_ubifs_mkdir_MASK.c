
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int umode_t ;
struct ubifs_inode {int ui_size; int ui_mutex; } ;
struct ubifs_info {int dummy; } ;
struct ubifs_budget_req {int new_ino; int new_dent; } ;
struct inode {int i_size; int i_ctime; int i_mtime; int i_ino; TYPE_1__* i_sb; } ;
struct fscrypt_name {int dummy; } ;
struct dentry {int d_name; } ;
struct TYPE_2__ {struct ubifs_info* s_fs_info; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int VAR_0 ;
 int FUNC_3 (struct dentry*,struct inode*) ;
 int FUNC_4 (char*,struct dentry*,int,int ) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct fscrypt_name*) ;
 int FUNC_7 (struct fscrypt_name*) ;
 int FUNC_8 (struct inode*,int *,int ,struct fscrypt_name*) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (struct inode*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct ubifs_info*,struct ubifs_budget_req*) ;
 int FUNC_16 (struct ubifs_info*,char*,int) ;
 int FUNC_17 (struct inode*,struct inode*,int *) ;
 struct ubifs_inode* FUNC_18 (struct inode*) ;
 int FUNC_19 (struct ubifs_info*,struct inode*,struct fscrypt_name*,struct inode*,int ,int ) ;
 struct inode* FUNC_20 (struct ubifs_info*,struct inode*,int) ;
 int FUNC_21 (struct ubifs_info*,struct ubifs_budget_req*) ;

__attribute__((used)) static int FUNC_22(struct inode *VAR_1, struct dentry *VAR_2, umode_t VAR_3)
{
 struct inode *VAR_4;
 struct ubifs_inode *VAR_5 = FUNC_18(VAR_1);
 struct ubifs_info *VAR_6 = VAR_1->i_sb->s_fs_info;
 int VAR_7, VAR_8;
 struct ubifs_budget_req VAR_9 = { .new_ino = 1, .new_dent = 1 };
 struct fscrypt_name VAR_10;






 FUNC_4("dent '%pd', mode %#hx in dir ino %lu",
  VAR_2, VAR_3, VAR_1->i_ino);

 VAR_7 = FUNC_15(VAR_6, &VAR_9);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_8(VAR_1, &VAR_2->d_name, 0, &VAR_10);
 if (VAR_7)
  goto out_budg;

 VAR_8 = FUNC_0(FUNC_6(&VAR_10));

 VAR_4 = FUNC_20(VAR_6, VAR_1, VAR_0 | VAR_3);
 if (FUNC_1(VAR_4)) {
  VAR_7 = FUNC_2(VAR_4);
  goto out_fname;
 }

 VAR_7 = FUNC_17(VAR_1, VAR_4, &VAR_2->d_name);
 if (VAR_7)
  goto out_inode;

 FUNC_13(&VAR_5->ui_mutex);
 FUNC_10(VAR_4);
 FUNC_9(VAR_4);
 FUNC_9(VAR_1);
 VAR_1->i_size += VAR_8;
 VAR_5->ui_size = VAR_1->i_size;
 VAR_1->i_mtime = VAR_1->i_ctime = VAR_4->i_ctime;
 VAR_7 = FUNC_19(VAR_6, VAR_1, &VAR_10, VAR_4, 0, 0);
 if (VAR_7) {
  FUNC_16(VAR_6, "cannot create directory, error %d", VAR_7);
  goto out_cancel;
 }
 FUNC_14(&VAR_5->ui_mutex);

 FUNC_21(VAR_6, &VAR_9);
 FUNC_3(VAR_2, VAR_4);
 FUNC_7(&VAR_10);
 return 0;

out_cancel:
 VAR_1->i_size -= VAR_8;
 VAR_5->ui_size = VAR_1->i_size;
 FUNC_5(VAR_1);
 FUNC_14(&VAR_5->ui_mutex);
out_inode:
 FUNC_12(VAR_4);
 FUNC_11(VAR_4);
out_fname:
 FUNC_7(&VAR_10);
out_budg:
 FUNC_21(VAR_6, &VAR_9);
 return VAR_7;
}
