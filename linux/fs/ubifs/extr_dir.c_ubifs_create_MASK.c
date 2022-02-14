
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int umode_t ;
struct ubifs_inode {int ui_size; int ui_mutex; } ;
struct ubifs_info {int dummy; } ;
struct ubifs_budget_req {int new_ino; int new_dent; int dirtied_ino; } ;
struct inode {int i_size; int i_ctime; int i_mtime; int i_ino; TYPE_1__* i_sb; } ;
struct fscrypt_name {int dummy; } ;
struct dentry {int d_name; } ;
struct TYPE_2__ {struct ubifs_info* s_fs_info; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct dentry*,struct inode*) ;
 int FUNC_4 (char*,struct dentry*,int ,int ) ;
 int FUNC_5 (struct fscrypt_name*) ;
 int FUNC_6 (struct fscrypt_name*) ;
 int FUNC_7 (struct inode*,int *,int ,struct fscrypt_name*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct ubifs_info*,struct ubifs_budget_req*) ;
 int FUNC_14 (struct ubifs_info*,char*,int) ;
 int FUNC_15 (struct inode*,struct inode*,int *) ;
 struct ubifs_inode* FUNC_16 (struct inode*) ;
 int FUNC_17 (struct ubifs_info*,struct inode*,struct fscrypt_name*,struct inode*,int ,int ) ;
 struct inode* FUNC_18 (struct ubifs_info*,struct inode*,int ) ;
 int FUNC_19 (struct ubifs_info*,struct ubifs_budget_req*) ;

__attribute__((used)) static int FUNC_20(struct inode *VAR_0, struct dentry *VAR_1, umode_t VAR_2,
   bool VAR_3)
{
 struct inode *VAR_4;
 struct ubifs_info *VAR_5 = VAR_0->i_sb->s_fs_info;
 struct ubifs_budget_req VAR_6 = { .new_ino = 1, .new_dent = 1,
     .dirtied_ino = 1 };
 struct ubifs_inode *VAR_7 = FUNC_16(VAR_0);
 struct fscrypt_name VAR_8;
 int VAR_9, VAR_10;






 FUNC_4("dent '%pd', mode %#hx in dir ino %lu",
  VAR_1, VAR_2, VAR_0->i_ino);

 VAR_9 = FUNC_13(VAR_5, &VAR_6);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_7(VAR_0, &VAR_1->d_name, 0, &VAR_8);
 if (VAR_9)
  goto out_budg;

 VAR_10 = FUNC_0(FUNC_5(&VAR_8));

 VAR_4 = FUNC_18(VAR_5, VAR_0, VAR_2);
 if (FUNC_1(VAR_4)) {
  VAR_9 = FUNC_2(VAR_4);
  goto out_fname;
 }

 VAR_9 = FUNC_15(VAR_0, VAR_4, &VAR_1->d_name);
 if (VAR_9)
  goto out_inode;

 FUNC_11(&VAR_7->ui_mutex);
 VAR_0->i_size += VAR_10;
 VAR_7->ui_size = VAR_0->i_size;
 VAR_0->i_mtime = VAR_0->i_ctime = VAR_4->i_ctime;
 VAR_9 = FUNC_17(VAR_5, VAR_0, &VAR_8, VAR_4, 0, 0);
 if (VAR_9)
  goto out_cancel;
 FUNC_12(&VAR_7->ui_mutex);

 FUNC_19(VAR_5, &VAR_6);
 FUNC_6(&VAR_8);
 FUNC_8(VAR_4);
 FUNC_3(VAR_1, VAR_4);
 return 0;

out_cancel:
 VAR_0->i_size -= VAR_10;
 VAR_7->ui_size = VAR_0->i_size;
 FUNC_12(&VAR_7->ui_mutex);
out_inode:
 FUNC_10(VAR_4);
 FUNC_9(VAR_4);
out_fname:
 FUNC_6(&VAR_8);
out_budg:
 FUNC_19(VAR_5, &VAR_6);
 FUNC_14(VAR_5, "cannot create regular file, error %d", VAR_9);
 return VAR_9;
}
