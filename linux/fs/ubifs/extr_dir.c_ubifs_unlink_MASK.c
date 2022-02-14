
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ubifs_inode {int ui_size; } ;
struct TYPE_4__ {scalar_t__ nospace_rp; scalar_t__ nospace; } ;
struct ubifs_info {TYPE_2__ bi; } ;
struct ubifs_budget_req {int mod_dent; int dirtied_ino; } ;
struct inode {unsigned int i_nlink; int i_size; int i_ctime; int i_mtime; int i_ino; TYPE_1__* i_sb; } ;
struct fscrypt_name {int dummy; } ;
struct dentry {int d_name; } ;
struct TYPE_3__ {struct ubifs_info* s_fs_info; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct inode*) ;
 struct inode* FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct ubifs_info*,struct inode*) ;
 int FUNC_4 (char*,struct dentry*,int ,unsigned int,int ) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct fscrypt_name*) ;
 int FUNC_7 (struct fscrypt_name*) ;
 int FUNC_8 (struct inode*,int *,int,struct fscrypt_name*) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (struct inode*,struct inode*) ;
 int FUNC_11 (struct inode*,unsigned int) ;
 int FUNC_12 () ;
 int FUNC_13 (struct ubifs_info*,int ) ;
 int FUNC_14 (struct ubifs_info*,struct ubifs_budget_req*) ;
 struct ubifs_inode* FUNC_15 (struct inode*) ;
 int FUNC_16 (struct ubifs_info*,struct inode*,struct fscrypt_name*,struct inode*,int,int ) ;
 int FUNC_17 (struct inode*) ;
 int FUNC_18 (struct ubifs_info*,struct ubifs_budget_req*) ;
 int FUNC_19 (struct inode*,struct inode*) ;

__attribute__((used)) static int FUNC_20(struct inode *VAR_1, struct dentry *VAR_2)
{
 struct ubifs_info *VAR_3 = VAR_1->i_sb->s_fs_info;
 struct inode *VAR_4 = FUNC_2(VAR_2);
 struct ubifs_inode *VAR_5 = FUNC_15(VAR_1);
 int VAR_6, VAR_7, VAR_8 = 1;
 struct ubifs_budget_req VAR_9 = { .mod_dent = 1, .dirtied_ino = 2 };
 unsigned int VAR_10 = VAR_4->i_nlink;
 struct fscrypt_name VAR_11;
 FUNC_4("dent '%pd' from ino %lu (nlink %d) in dir ino %lu",
  VAR_2, VAR_4->i_ino,
  VAR_4->i_nlink, VAR_1->i_ino);

 VAR_6 = FUNC_8(VAR_1, &VAR_2->d_name, 1, &VAR_11);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_17(VAR_4);
 if (VAR_6)
  return VAR_6;

 VAR_7 = FUNC_0(FUNC_6(&VAR_11));

 FUNC_13(VAR_3, FUNC_9(VAR_1));
 FUNC_13(VAR_3, FUNC_9(VAR_4));
 VAR_6 = FUNC_3(VAR_3, VAR_4);
 if (VAR_6)
  goto out_fname;

 VAR_6 = FUNC_14(VAR_3, &VAR_9);
 if (VAR_6) {
  if (VAR_6 != -VAR_0)
   goto out_fname;
  VAR_8 = 0;
 }

 FUNC_10(VAR_1, VAR_4);
 VAR_4->i_ctime = FUNC_1(VAR_1);
 FUNC_5(VAR_4);
 VAR_1->i_size -= VAR_7;
 VAR_5->ui_size = VAR_1->i_size;
 VAR_1->i_mtime = VAR_1->i_ctime = VAR_4->i_ctime;
 VAR_6 = FUNC_16(VAR_3, VAR_1, &VAR_11, VAR_4, 1, 0);
 if (VAR_6)
  goto out_cancel;
 FUNC_19(VAR_1, VAR_4);

 if (VAR_8)
  FUNC_18(VAR_3, &VAR_9);
 else {

  VAR_3->bi.nospace = VAR_3->bi.nospace_rp = 0;
  FUNC_12();
 }
 FUNC_7(&VAR_11);
 return 0;

out_cancel:
 VAR_1->i_size += VAR_7;
 VAR_5->ui_size = VAR_1->i_size;
 FUNC_11(VAR_4, VAR_10);
 FUNC_19(VAR_1, VAR_4);
 if (VAR_8)
  FUNC_18(VAR_3, &VAR_9);
out_fname:
 FUNC_7(&VAR_11);
 return VAR_6;
}
