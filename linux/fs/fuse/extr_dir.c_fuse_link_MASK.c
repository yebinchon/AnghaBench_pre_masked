
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct inode {int i_mode; } ;
struct fuse_link_in {int oldnodeid; } ;
struct fuse_inode {int lock; int attr_version; } ;
struct fuse_conn {int attr_version; } ;
struct TYPE_7__ {int len; struct fuse_link_in* name; } ;
struct dentry {TYPE_2__ d_name; } ;
typedef int inarg ;
struct TYPE_8__ {int in_numargs; TYPE_1__* in_args; int opcode; } ;
struct TYPE_6__ {int size; struct fuse_link_in* value; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__) ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct fuse_conn*,TYPE_3__*,struct inode*,struct dentry*,int ) ;
 struct inode* FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;
 struct fuse_conn* FUNC_6 (struct inode*) ;
 struct fuse_inode* FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (struct fuse_link_in*,int ,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct dentry *VAR_3, struct inode *VAR_4,
       struct dentry *VAR_5)
{
 int VAR_6;
 struct fuse_link_in VAR_7;
 struct inode *VAR_8 = FUNC_3(VAR_3);
 struct fuse_conn *VAR_9 = FUNC_6(VAR_8);
 FUNC_0(VAR_2);

 FUNC_10(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.oldnodeid = FUNC_8(VAR_8);
 VAR_2.opcode = VAR_1;
 VAR_2.in_numargs = 2;
 VAR_2.in_args[0].size = sizeof(VAR_7);
 VAR_2.in_args[0].value = &VAR_7;
 VAR_2.in_args[1].size = VAR_5->d_name.len + 1;
 VAR_2.in_args[1].value = VAR_5->d_name.name;
 VAR_6 = FUNC_2(VAR_9, &VAR_2, VAR_4, VAR_5, VAR_8->i_mode);






 if (!VAR_6) {
  struct fuse_inode *VAR_10 = FUNC_7(VAR_8);

  FUNC_11(&VAR_10->lock);
  VAR_10->attr_version = FUNC_1(&VAR_9->attr_version);
  FUNC_9(VAR_8);
  FUNC_12(&VAR_10->lock);
  FUNC_4(VAR_8);
  FUNC_5(VAR_8);
 } else if (VAR_6 == -VAR_0) {
  FUNC_4(VAR_8);
 }
 return VAR_6;
}
