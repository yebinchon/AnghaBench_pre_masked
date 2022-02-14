
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int umode_t ;
struct inode {int i_sb; } ;
struct fuse_forget_link {int dummy; } ;
struct TYPE_4__ {int mode; } ;
struct fuse_entry_out {int nodeid; TYPE_2__ attr; int generation; } ;
struct fuse_conn {int dummy; } ;
struct fuse_args {int out_numargs; TYPE_1__* out_args; int nodeid; } ;
struct dentry {int dummy; } ;
typedef int outarg ;
struct TYPE_3__ {int size; struct fuse_entry_out* value; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 int VAR_2 ;
 int FUNC_2 (struct dentry*) ;
 struct dentry* FUNC_3 (struct inode*,struct dentry*) ;
 int FUNC_4 (struct dentry*) ;
 int FUNC_5 (struct fuse_entry_out*) ;
 struct fuse_forget_link* FUNC_6 () ;
 int FUNC_7 (struct dentry*,struct fuse_entry_out*) ;
 int FUNC_8 (struct inode*) ;
 struct inode* FUNC_9 (int ,int ,int ,TYPE_2__*,int ,int ) ;
 int FUNC_10 (struct fuse_conn*,struct fuse_forget_link*,int ,int) ;
 int FUNC_11 (struct fuse_conn*,struct fuse_args*) ;
 int FUNC_12 (struct inode*) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (struct fuse_forget_link*) ;
 int FUNC_15 (struct fuse_entry_out*,int ,int) ;

__attribute__((used)) static int FUNC_16(struct fuse_conn *VAR_3, struct fuse_args *VAR_4,
       struct inode *VAR_5, struct dentry *VAR_6,
       umode_t VAR_7)
{
 struct fuse_entry_out VAR_8;
 struct inode *VAR_9;
 struct dentry *VAR_10;
 int VAR_11;
 struct fuse_forget_link *VAR_12;

 VAR_12 = FUNC_6();
 if (!VAR_12)
  return -VAR_1;

 FUNC_15(&VAR_8, 0, sizeof(VAR_8));
 VAR_4->nodeid = FUNC_12(VAR_5);
 VAR_4->out_numargs = 1;
 VAR_4->out_args[0].size = sizeof(VAR_8);
 VAR_4->out_args[0].value = &VAR_8;
 VAR_11 = FUNC_11(VAR_3, VAR_4);
 if (VAR_11)
  goto out_put_forget_req;

 VAR_11 = -VAR_0;
 if (FUNC_13(VAR_8.nodeid))
  goto out_put_forget_req;

 if ((VAR_8.attr.mode ^ VAR_7) & VAR_2)
  goto out_put_forget_req;

 VAR_9 = FUNC_9(VAR_5->i_sb, VAR_8.nodeid, VAR_8.generation,
     &VAR_8.attr, FUNC_5(&VAR_8), 0);
 if (!VAR_9) {
  FUNC_10(VAR_3, VAR_12, VAR_8.nodeid, 1);
  return -VAR_1;
 }
 FUNC_14(VAR_12);

 FUNC_2(VAR_6);
 VAR_10 = FUNC_3(VAR_9, VAR_6);
 if (FUNC_0(VAR_10))
  return FUNC_1(VAR_10);

 if (VAR_10) {
  FUNC_7(VAR_10, &VAR_8);
  FUNC_4(VAR_10);
 } else {
  FUNC_7(VAR_6, &VAR_8);
 }
 FUNC_8(VAR_5);
 return 0;

 out_put_forget_req:
 FUNC_14(VAR_12);
 return VAR_11;
}
