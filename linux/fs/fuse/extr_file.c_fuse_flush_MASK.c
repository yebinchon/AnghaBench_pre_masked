
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct inode {int dummy; } ;
struct fuse_flush_in {int lock_owner; int fh; } ;
struct fuse_file {int fh; } ;
struct fuse_conn {int no_flush; } ;
struct file {int f_mapping; struct fuse_file* private_data; } ;
typedef int inarg ;
typedef int fl_owner_t ;
struct TYPE_6__ {int in_numargs; int force; TYPE_1__* in_args; int nodeid; int opcode; } ;
struct TYPE_5__ {int size; struct fuse_flush_in* value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__) ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 struct inode* FUNC_1 (struct file*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct fuse_conn*,int ) ;
 int FUNC_4 (struct fuse_conn*,TYPE_2__*) ;
 int FUNC_5 (struct inode*) ;
 struct fuse_conn* FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*) ;
 scalar_t__ FUNC_10 (struct inode*) ;
 int FUNC_11 (struct fuse_flush_in*,int ,int) ;
 int FUNC_12 (struct inode*,int) ;

__attribute__((used)) static int FUNC_13(struct file *VAR_4, fl_owner_t VAR_5)
{
 struct inode *VAR_6 = FUNC_1(VAR_4);
 struct fuse_conn *VAR_7 = FUNC_6(VAR_6);
 struct fuse_file *VAR_8 = VAR_4->private_data;
 struct fuse_flush_in VAR_9;
 FUNC_0(VAR_3);
 int VAR_10;

 if (FUNC_10(VAR_6))
  return -VAR_0;

 if (VAR_7->no_flush)
  return 0;

 VAR_10 = FUNC_12(VAR_6, 1);
 if (VAR_10)
  return VAR_10;

 FUNC_8(VAR_6);
 FUNC_5(VAR_6);
 FUNC_9(VAR_6);

 VAR_10 = FUNC_2(VAR_4->f_mapping);
 if (VAR_10)
  return VAR_10;

 FUNC_11(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.fh = VAR_8->fh;
 VAR_9.lock_owner = FUNC_3(VAR_7, VAR_5);
 VAR_3.opcode = VAR_2;
 VAR_3.nodeid = FUNC_7(VAR_6);
 VAR_3.in_numargs = 1;
 VAR_3.in_args[0].size = sizeof(VAR_9);
 VAR_3.in_args[0].value = &VAR_9;
 VAR_3.force = 1;

 VAR_10 = FUNC_4(VAR_7, &VAR_3);
 if (VAR_10 == -VAR_1) {
  VAR_7->no_flush = 1;
  VAR_10 = 0;
 }
 return VAR_10;
}
