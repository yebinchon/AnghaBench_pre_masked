
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int dummy; } ;
struct fuse_setattr_in {int dummy; } ;
struct fuse_conn {int dummy; } ;
struct fuse_attr_out {int dummy; } ;
struct fuse_args {int in_numargs; int out_numargs; TYPE_2__* out_args; TYPE_1__* in_args; int nodeid; int opcode; } ;
struct TYPE_4__ {int size; struct fuse_attr_out* value; } ;
struct TYPE_3__ {int size; struct fuse_setattr_in* value; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*) ;

__attribute__((used)) static void FUNC_1(struct fuse_conn *VAR_1, struct fuse_args *VAR_2,
         struct inode *VAR_3,
         struct fuse_setattr_in *VAR_4,
         struct fuse_attr_out *VAR_5)
{
 VAR_2->opcode = VAR_0;
 VAR_2->nodeid = FUNC_0(VAR_3);
 VAR_2->in_numargs = 1;
 VAR_2->in_args[0].size = sizeof(*VAR_4);
 VAR_2->in_args[0].value = VAR_4;
 VAR_2->out_numargs = 1;
 VAR_2->out_args[0].size = sizeof(*VAR_5);
 VAR_2->out_args[0].value = VAR_5;
}
