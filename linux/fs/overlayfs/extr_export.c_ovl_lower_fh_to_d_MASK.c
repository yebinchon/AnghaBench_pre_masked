
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {struct ovl_fs* s_fs_info; } ;
struct ovl_path {struct inode* dentry; } ;
struct ovl_fs {scalar_t__ indexdir; } ;
struct ovl_fh {int dummy; } ;
struct inode {int d_flags; } ;
struct dentry {int d_flags; } ;


 int VAR_0 ;
 struct inode* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 struct inode* FUNC_4 (struct inode*) ;
 scalar_t__ FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct ovl_fs*,struct ovl_fh*,int,int *,struct ovl_path**) ;
 struct inode* FUNC_9 (struct super_block*,struct inode*,struct ovl_path*,struct inode*) ;
 struct inode* FUNC_10 (struct ovl_fs*,struct ovl_fh*) ;
 struct inode* FUNC_11 (struct ovl_fs*,struct inode*) ;
 struct inode* FUNC_12 (struct super_block*,struct inode*,int) ;
 int FUNC_13 (struct inode*,struct inode*,int) ;

__attribute__((used)) static struct dentry *FUNC_14(struct super_block *VAR_1,
     struct ovl_fh *VAR_2)
{
 struct ovl_fs *VAR_3 = VAR_1->s_fs_info;
 struct ovl_path VAR_4 = { };
 struct ovl_path *VAR_5 = &VAR_4;
 struct dentry *VAR_6 = ((void*)0);
 struct dentry *VAR_7 = ((void*)0);
 struct inode *VAR_8;
 int VAR_9;


 VAR_9 = FUNC_8(VAR_3, VAR_2, 0, ((void*)0), &VAR_5);
 if (VAR_9)
  return FUNC_0(VAR_9);

 if (!FUNC_5(VAR_4.dentry) ||
     !(VAR_4.dentry->d_flags & VAR_0)) {
  VAR_8 = FUNC_12(VAR_1, VAR_4.dentry, 0);
  VAR_9 = FUNC_3(VAR_8);
  if (FUNC_1(VAR_8))
   goto out_err;
  if (VAR_8) {
   VAR_6 = FUNC_4(VAR_8);
   FUNC_7(VAR_8);
   if (VAR_6)
    goto out;
  }
 }


 if (VAR_3->indexdir) {
  VAR_7 = FUNC_10(VAR_3, VAR_2);
  VAR_9 = FUNC_3(VAR_7);
  if (FUNC_1(VAR_7)) {
   VAR_7 = ((void*)0);
   goto out_err;
  }
 }


 if (VAR_7 && FUNC_5(VAR_7)) {
  struct dentry *VAR_10 = FUNC_11(VAR_3, VAR_7);

  VAR_9 = FUNC_3(VAR_10);
  if (FUNC_2(VAR_10))
   goto out_err;

  VAR_6 = FUNC_9(VAR_1, VAR_10, ((void*)0), ((void*)0));
  FUNC_6(VAR_10);
  goto out;
 }


 if (FUNC_5(VAR_4.dentry)) {
  FUNC_6(VAR_4.dentry);
  VAR_4.dentry = ((void*)0);
  VAR_9 = FUNC_8(VAR_3, VAR_2, 1, ((void*)0), &VAR_5);
  if (VAR_9)
   goto out_err;
 }
 if (VAR_7) {
  VAR_9 = FUNC_13(VAR_7, VAR_4.dentry, 0);
  if (VAR_9)
   goto out_err;
 }


 VAR_6 = FUNC_9(VAR_1, ((void*)0), &VAR_4, VAR_7);

out:
 FUNC_6(VAR_4.dentry);
 FUNC_6(VAR_7);
 return VAR_6;

out_err:
 VAR_6 = FUNC_0(VAR_9);
 goto out;
}
