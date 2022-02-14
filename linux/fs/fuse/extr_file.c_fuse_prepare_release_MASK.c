
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct fuse_release_in {int dummy; } ;
struct TYPE_6__ {int in_numargs; int opcode; int force; int nocreds; int nodeid; TYPE_1__* in_args; } ;
struct TYPE_5__ {int flags; int fh; } ;
struct fuse_release_args {TYPE_3__ args; TYPE_2__ inarg; } ;
struct fuse_inode {int lock; } ;
struct fuse_file {int nodeid; int fh; int poll_wait; int polled_node; int write_entry; struct fuse_release_args* release_args; struct fuse_conn* fc; } ;
struct fuse_conn {int lock; int polled_files; } ;
struct TYPE_4__ {int size; TYPE_2__* value; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct fuse_inode*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct fuse_inode *VAR_0, struct fuse_file *VAR_1,
     int VAR_2, int VAR_3)
{
 struct fuse_conn *VAR_4 = VAR_1->fc;
 struct fuse_release_args *VAR_5 = VAR_1->release_args;


 if (FUNC_1(VAR_0)) {
  FUNC_4(&VAR_0->lock);
  FUNC_2(&VAR_1->write_entry);
  FUNC_5(&VAR_0->lock);
 }
 FUNC_4(&VAR_4->lock);
 if (!FUNC_0(&VAR_1->polled_node))
  FUNC_3(&VAR_1->polled_node, &VAR_4->polled_files);
 FUNC_5(&VAR_4->lock);

 FUNC_6(&VAR_1->poll_wait);

 VAR_5->inarg.fh = VAR_1->fh;
 VAR_5->inarg.flags = VAR_2;
 VAR_5->args.in_numargs = 1;
 VAR_5->args.in_args[0].size = sizeof(struct fuse_release_in);
 VAR_5->args.in_args[0].value = &VAR_5->inarg;
 VAR_5->args.opcode = VAR_3;
 VAR_5->args.nodeid = VAR_1->nodeid;
 VAR_5->args.force = 1;
 VAR_5->args.nocreds = 1;
}
