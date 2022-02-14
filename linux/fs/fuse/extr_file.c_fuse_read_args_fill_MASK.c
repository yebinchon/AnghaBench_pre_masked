
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {size_t size; int flags; int offset; int fh; } ;
struct TYPE_9__ {TYPE_3__ in; } ;
struct fuse_args {int opcode; int in_numargs; int out_argvar; int out_numargs; TYPE_5__* out_args; TYPE_2__* in_args; int nodeid; } ;
struct TYPE_6__ {struct fuse_args args; } ;
struct fuse_io_args {TYPE_4__ read; TYPE_1__ ap; } ;
struct fuse_file {int nodeid; int fh; } ;
struct file {int f_flags; struct fuse_file* private_data; } ;
typedef int loff_t ;
struct TYPE_10__ {size_t size; } ;
struct TYPE_7__ {int size; TYPE_3__* value; } ;



void FUNC_0(struct fuse_io_args *VAR_0, struct file *VAR_1, loff_t VAR_2,
    size_t VAR_3, int VAR_4)
{
 struct fuse_file *VAR_5 = VAR_1->private_data;
 struct fuse_args *VAR_6 = &VAR_0->ap.args;

 VAR_0->read.in.fh = VAR_5->fh;
 VAR_0->read.in.offset = VAR_2;
 VAR_0->read.in.size = VAR_3;
 VAR_0->read.in.flags = VAR_1->f_flags;
 VAR_6->opcode = VAR_4;
 VAR_6->nodeid = VAR_5->nodeid;
 VAR_6->in_numargs = 1;
 VAR_6->in_args[0].size = sizeof(VAR_0->read.in);
 VAR_6->in_args[0].value = &VAR_0->read.in;
 VAR_6->out_argvar = 1;
 VAR_6->out_numargs = 1;
 VAR_6->out_args[0].size = VAR_3;
}
