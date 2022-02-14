
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_3__ {int pid; int type; int end; int start; } ;
struct fuse_lk_in {int lk_flags; TYPE_1__ lk; int owner; int fh; } ;
struct fuse_file {int fh; } ;
struct fuse_conn {int dummy; } ;
struct fuse_args {int opcode; int in_numargs; TYPE_2__* in_args; int nodeid; } ;
struct file_lock {int fl_type; int fl_end; int fl_start; int fl_owner; } ;
struct file {struct fuse_file* private_data; } ;
typedef int pid_t ;
struct TYPE_4__ {int size; struct fuse_lk_in* value; } ;


 int VAR_0 ;
 struct inode* FUNC_0 (struct file*) ;
 int FUNC_1 (struct fuse_conn*,int ) ;
 struct fuse_conn* FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct fuse_lk_in*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct fuse_args *VAR_1, struct file *VAR_2,
    const struct file_lock *VAR_3, int VAR_4, pid_t VAR_5,
    int VAR_6, struct fuse_lk_in *VAR_7)
{
 struct inode *VAR_8 = FUNC_0(VAR_2);
 struct fuse_conn *VAR_9 = FUNC_2(VAR_8);
 struct fuse_file *VAR_10 = VAR_2->private_data;

 FUNC_4(VAR_7, 0, sizeof(*VAR_7));
 VAR_7->fh = VAR_10->fh;
 VAR_7->owner = FUNC_1(VAR_9, VAR_3->fl_owner);
 VAR_7->lk.start = VAR_3->fl_start;
 VAR_7->lk.end = VAR_3->fl_end;
 VAR_7->lk.type = VAR_3->fl_type;
 VAR_7->lk.pid = VAR_5;
 if (VAR_6)
  VAR_7->lk_flags |= VAR_0;
 VAR_1->opcode = VAR_4;
 VAR_1->nodeid = FUNC_3(VAR_8);
 VAR_1->in_numargs = 1;
 VAR_1->in_args[0].size = sizeof(*VAR_7);
 VAR_1->in_args[0].value = VAR_7;
}
