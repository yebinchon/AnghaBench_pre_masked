
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct nilfs_root {scalar_t__ cno; } ;
struct inode {int i_size; int i_blocks; int i_mode; } ;
struct dentry {int i_size; int i_blocks; int i_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (int ) ;
 struct inode* FUNC_3 (struct inode*) ;
 struct inode* FUNC_4 (struct inode*) ;
 struct inode* FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*) ;
 struct inode* FUNC_7 (struct super_block*,struct nilfs_root*,int ) ;
 int FUNC_8 (struct super_block*,int ,char*,...) ;

__attribute__((used)) static int FUNC_9(struct super_block *VAR_5,
     struct nilfs_root *VAR_6,
     struct dentry **VAR_7)
{
 struct inode *VAR_8;
 struct dentry *VAR_9;
 int VAR_10 = 0;

 VAR_8 = FUNC_7(VAR_5, VAR_6, VAR_4);
 if (FUNC_0(VAR_8)) {
  VAR_10 = FUNC_1(VAR_8);
  FUNC_8(VAR_5, VAR_2, "error %d getting root inode", VAR_10);
  goto out;
 }
 if (!FUNC_2(VAR_8->i_mode) || !VAR_8->i_blocks || !VAR_8->i_size) {
  FUNC_6(VAR_8);
  FUNC_8(VAR_5, VAR_2, "corrupt root inode");
  VAR_10 = -VAR_0;
  goto out;
 }

 if (VAR_6->cno == VAR_3) {
  VAR_9 = FUNC_3(VAR_8);
  if (!VAR_9) {
   VAR_9 = FUNC_4(VAR_8);
   if (!VAR_9) {
    VAR_10 = -VAR_1;
    goto failed_dentry;
   }
  } else {
   FUNC_6(VAR_8);
  }
 } else {
  VAR_9 = FUNC_5(VAR_8);
  if (FUNC_0(VAR_9)) {
   VAR_10 = FUNC_1(VAR_9);
   goto failed_dentry;
  }
 }
 *VAR_7 = VAR_9;
 out:
 return VAR_10;

 failed_dentry:
 FUNC_8(VAR_5, VAR_2, "error %d getting root dentry", VAR_10);
 goto out;
}
