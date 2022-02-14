
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct inode {scalar_t__ i_nlink; } ;
struct fuse_inode {int lock; int attr_version; } ;
struct fuse_conn {int attr_version; } ;
struct TYPE_7__ {int name; scalar_t__ len; } ;
struct dentry {TYPE_2__ d_name; } ;
struct TYPE_8__ {int in_numargs; TYPE_1__* in_args; int nodeid; int opcode; } ;
struct TYPE_6__ {int value; scalar_t__ size; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__) ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 int FUNC_1 (int *) ;
 struct inode* FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct dentry*) ;
 int FUNC_7 (struct dentry*) ;
 int FUNC_8 (struct fuse_conn*,TYPE_3__*) ;
 int FUNC_9 (struct inode*) ;
 struct fuse_conn* FUNC_10 (struct inode*) ;
 struct fuse_inode* FUNC_11 (struct inode*) ;
 int FUNC_12 (struct inode*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static int FUNC_15(struct inode *VAR_3, struct dentry *VAR_4)
{
 int VAR_5;
 struct fuse_conn *VAR_6 = FUNC_10(VAR_3);
 FUNC_0(VAR_2);

 VAR_2.opcode = VAR_1;
 VAR_2.nodeid = FUNC_12(VAR_3);
 VAR_2.in_numargs = 1;
 VAR_2.in_args[0].size = VAR_4->d_name.len + 1;
 VAR_2.in_args[0].value = VAR_4->d_name.name;
 VAR_5 = FUNC_8(VAR_6, &VAR_2);
 if (!VAR_5) {
  struct inode *VAR_7 = FUNC_2(VAR_4);
  struct fuse_inode *VAR_8 = FUNC_11(VAR_7);

  FUNC_13(&VAR_8->lock);
  VAR_8->attr_version = FUNC_1(&VAR_6->attr_version);






  if (VAR_7->i_nlink > 0)
   FUNC_3(VAR_7);
  FUNC_14(&VAR_8->lock);
  FUNC_5(VAR_7);
  FUNC_4(VAR_3);
  FUNC_7(VAR_4);
  FUNC_9(VAR_7);
 } else if (VAR_5 == -VAR_0)
  FUNC_6(VAR_4);
 return VAR_5;
}
