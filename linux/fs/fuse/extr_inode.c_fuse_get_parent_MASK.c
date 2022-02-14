
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {int dummy; } ;
struct inode {int i_sb; } ;
struct fuse_entry_out {int dummy; } ;
struct fuse_conn {int export_support; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct dentry*) ;
 struct qstr FUNC_2 (char*,int) ;
 struct inode* FUNC_3 (struct dentry*) ;
 struct dentry* FUNC_4 (struct inode*) ;
 int FUNC_5 (struct dentry*) ;
 int FUNC_6 (int ,scalar_t__,struct qstr const*,struct fuse_entry_out*,struct inode**) ;
 struct fuse_conn* FUNC_7 (struct inode*) ;
 scalar_t__ FUNC_8 (struct inode*) ;

__attribute__((used)) static struct dentry *FUNC_9(struct dentry *VAR_3)
{
 struct inode *VAR_4 = FUNC_3(VAR_3);
 struct fuse_conn *VAR_5 = FUNC_7(VAR_4);
 struct inode *VAR_6;
 struct dentry *VAR_7;
 struct fuse_entry_out VAR_8;
 const struct qstr VAR_9 = FUNC_2("..", 2);
 int VAR_10;

 if (!VAR_5->export_support)
  return FUNC_0(-VAR_1);

 VAR_10 = FUNC_6(VAR_4->i_sb, FUNC_8(VAR_4),
          &VAR_9, &VAR_8, &VAR_6);
 if (VAR_10) {
  if (VAR_10 == -VAR_0)
   return FUNC_0(-VAR_1);
  return FUNC_0(VAR_10);
 }

 VAR_7 = FUNC_4(VAR_6);
 if (!FUNC_1(VAR_7) && FUNC_8(VAR_6) != VAR_2)
  FUNC_5(VAR_7);

 return VAR_7;
}
