
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct qstr {int dummy; } ;
struct inode {scalar_t__ i_generation; } ;
struct fuse_inode_handle {scalar_t__ nodeid; scalar_t__ generation; } ;
struct fuse_entry_out {int dummy; } ;
struct fuse_conn {int export_support; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dentry* FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct dentry*) ;
 struct qstr FUNC_2 (char*,int) ;
 struct dentry* FUNC_3 (struct inode*) ;
 int VAR_4 ;
 int FUNC_4 (struct dentry*) ;
 int FUNC_5 (struct super_block*,scalar_t__,struct qstr const*,struct fuse_entry_out*,struct inode**) ;
 struct fuse_conn* FUNC_6 (struct super_block*) ;
 scalar_t__ FUNC_7 (struct inode*) ;
 struct inode* FUNC_8 (struct super_block*,scalar_t__,int ,scalar_t__*) ;
 int FUNC_9 (struct inode*) ;

__attribute__((used)) static struct dentry *FUNC_10(struct super_block *VAR_5,
          struct fuse_inode_handle *VAR_6)
{
 struct fuse_conn *VAR_7 = FUNC_6(VAR_5);
 struct inode *VAR_8;
 struct dentry *VAR_9;
 int VAR_10 = -VAR_2;

 if (VAR_6->nodeid == 0)
  goto out_err;

 VAR_8 = FUNC_8(VAR_5, VAR_6->nodeid, VAR_4, &VAR_6->nodeid);
 if (!VAR_8) {
  struct fuse_entry_out VAR_11;
  const struct qstr VAR_12 = FUNC_2(".", 1);

  if (!VAR_7->export_support)
   goto out_err;

  VAR_10 = FUNC_5(VAR_5, VAR_6->nodeid, &VAR_12, &VAR_11,
           &VAR_8);
  if (VAR_10 && VAR_10 != -VAR_1)
   goto out_err;
  if (VAR_10 || !VAR_8) {
   VAR_10 = -VAR_2;
   goto out_err;
  }
  VAR_10 = -VAR_0;
  if (FUNC_7(VAR_8) != VAR_6->nodeid)
   goto out_iput;
 }
 VAR_10 = -VAR_2;
 if (VAR_8->i_generation != VAR_6->generation)
  goto out_iput;

 VAR_9 = FUNC_3(VAR_8);
 if (!FUNC_1(VAR_9) && FUNC_7(VAR_8) != VAR_3)
  FUNC_4(VAR_9);

 return VAR_9;

 out_iput:
 FUNC_9(VAR_8);
 out_err:
 return FUNC_0(VAR_10);
}
