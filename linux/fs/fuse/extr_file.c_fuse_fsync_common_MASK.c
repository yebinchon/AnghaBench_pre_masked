
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct inode {int dummy; } ;
struct fuse_fsync_in {int fsync_flags; int fh; } ;
struct fuse_file {int fh; } ;
struct fuse_conn {int dummy; } ;
struct file {struct fuse_file* private_data; TYPE_1__* f_mapping; } ;
typedef int loff_t ;
typedef int inarg ;
struct TYPE_8__ {int opcode; int in_numargs; TYPE_2__* in_args; int nodeid; } ;
struct TYPE_7__ {int size; struct fuse_fsync_in* value; } ;
struct TYPE_6__ {struct inode* host; } ;


 int FUNC_0 (TYPE_3__) ;
 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 int FUNC_1 (struct fuse_conn*,TYPE_3__*) ;
 struct fuse_conn* FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct fuse_fsync_in*,int ,int) ;

int FUNC_5(struct file *VAR_2, loff_t VAR_3, loff_t VAR_4,
        int VAR_5, int VAR_6)
{
 struct inode *VAR_7 = VAR_2->f_mapping->host;
 struct fuse_conn *VAR_8 = FUNC_2(VAR_7);
 struct fuse_file *VAR_9 = VAR_2->private_data;
 FUNC_0(VAR_1);
 struct fuse_fsync_in VAR_10;

 FUNC_4(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.fh = VAR_9->fh;
 VAR_10.fsync_flags = VAR_5 ? VAR_0 : 0;
 VAR_1.opcode = VAR_6;
 VAR_1.nodeid = FUNC_3(VAR_7);
 VAR_1.in_numargs = 1;
 VAR_1.in_args[0].size = sizeof(VAR_10);
 VAR_1.in_args[0].value = &VAR_10;
 return FUNC_1(VAR_8, &VAR_1);
}
