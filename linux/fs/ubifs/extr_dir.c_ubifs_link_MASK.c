
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ubifs_inode {int ui_size; int data_len; } ;
struct ubifs_info {int dummy; } ;
struct ubifs_budget_req {int new_dent; int dirtied_ino; int dirtied_ino_d; } ;
struct inode {scalar_t__ i_nlink; int i_size; int i_ino; int i_ctime; int i_mtime; TYPE_1__* i_sb; } ;
struct fscrypt_name {int dummy; } ;
struct TYPE_4__ {int len; } ;
struct dentry {TYPE_2__ d_name; } ;
struct TYPE_3__ {struct ubifs_info* s_fs_info; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct inode*) ;
 struct inode* FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct dentry*,struct inode*) ;
 int FUNC_5 (struct ubifs_info*,struct inode*) ;
 int FUNC_6 (char*,struct dentry*,int ,scalar_t__,int ) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct fscrypt_name*) ;
 int FUNC_9 (struct dentry*,struct inode*,struct dentry*) ;
 int FUNC_10 (struct inode*,TYPE_2__*,int ,struct fscrypt_name*) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (struct inode*) ;
 int FUNC_13 (struct inode*) ;
 int FUNC_14 (struct inode*) ;
 int FUNC_15 (struct inode*,struct inode*) ;
 int FUNC_16 (struct ubifs_info*,int ) ;
 int FUNC_17 (struct ubifs_info*,int ) ;
 int FUNC_18 (struct ubifs_info*,struct ubifs_budget_req*) ;
 int FUNC_19 (struct ubifs_info*,int ) ;
 struct ubifs_inode* FUNC_20 (struct inode*) ;
 int FUNC_21 (struct ubifs_info*,struct inode*,struct fscrypt_name*,struct inode*,int ,int ) ;
 int FUNC_22 (struct ubifs_info*,struct ubifs_budget_req*) ;
 int FUNC_23 (struct inode*,struct inode*) ;

__attribute__((used)) static int FUNC_24(struct dentry *VAR_0, struct inode *VAR_1,
        struct dentry *VAR_2)
{
 struct ubifs_info *VAR_3 = VAR_1->i_sb->s_fs_info;
 struct inode *VAR_4 = FUNC_3(VAR_0);
 struct ubifs_inode *VAR_5 = FUNC_20(VAR_4);
 struct ubifs_inode *VAR_6 = FUNC_20(VAR_1);
 int VAR_7, VAR_8 = FUNC_1(VAR_2->d_name.len);
 struct ubifs_budget_req VAR_9 = { .new_dent = 1, .dirtied_ino = 2,
    .dirtied_ino_d = FUNC_0(VAR_5->data_len, 8) };
 struct fscrypt_name VAR_10;






 FUNC_6("dent '%pd' to ino %lu (nlink %d) in dir ino %lu",
  VAR_2, VAR_4->i_ino,
  VAR_4->i_nlink, VAR_1->i_ino);
 FUNC_17(VAR_3, FUNC_13(VAR_1));
 FUNC_17(VAR_3, FUNC_13(VAR_4));

 VAR_7 = FUNC_9(VAR_0, VAR_1, VAR_2);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_10(VAR_1, &VAR_2->d_name, 0, &VAR_10);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_5(VAR_3, VAR_4);
 if (VAR_7)
  goto out_fname;

 VAR_7 = FUNC_18(VAR_3, &VAR_9);
 if (VAR_7)
  goto out_fname;

 FUNC_15(VAR_1, VAR_4);


 if (VAR_4->i_nlink == 0)
  FUNC_19(VAR_3, VAR_4->i_ino);

 FUNC_12(VAR_4);
 FUNC_11(VAR_4);
 VAR_4->i_ctime = FUNC_2(VAR_4);
 VAR_1->i_size += VAR_8;
 VAR_6->ui_size = VAR_1->i_size;
 VAR_1->i_mtime = VAR_1->i_ctime = VAR_4->i_ctime;
 VAR_7 = FUNC_21(VAR_3, VAR_1, &VAR_10, VAR_4, 0, 0);
 if (VAR_7)
  goto out_cancel;
 FUNC_23(VAR_1, VAR_4);

 FUNC_22(VAR_3, &VAR_9);
 FUNC_4(VAR_2, VAR_4);
 FUNC_8(&VAR_10);
 return 0;

out_cancel:
 VAR_1->i_size -= VAR_8;
 VAR_6->ui_size = VAR_1->i_size;
 FUNC_7(VAR_4);
 if (VAR_4->i_nlink == 0)
  FUNC_16(VAR_3, VAR_4->i_ino);
 FUNC_23(VAR_1, VAR_4);
 FUNC_22(VAR_3, &VAR_9);
 FUNC_14(VAR_4);
out_fname:
 FUNC_8(&VAR_10);
 return VAR_7;
}
