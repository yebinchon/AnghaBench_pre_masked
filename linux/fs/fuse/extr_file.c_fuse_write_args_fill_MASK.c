
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {size_t size; int offset; int fh; } ;
struct TYPE_12__ {int out; TYPE_3__ in; } ;
struct fuse_args {int in_numargs; int out_numargs; TYPE_5__* out_args; TYPE_4__* in_args; int nodeid; int opcode; } ;
struct TYPE_7__ {struct fuse_args args; } ;
struct fuse_io_args {TYPE_6__ write; TYPE_1__ ap; } ;
struct fuse_file {TYPE_2__* fc; int nodeid; int fh; } ;
typedef int loff_t ;
struct TYPE_11__ {int size; int * value; } ;
struct TYPE_10__ {int size; TYPE_3__* value; } ;
struct TYPE_8__ {int minor; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct fuse_io_args *VAR_2, struct fuse_file *VAR_3,
     loff_t VAR_4, size_t VAR_5)
{
 struct fuse_args *VAR_6 = &VAR_2->ap.args;

 VAR_2->write.in.fh = VAR_3->fh;
 VAR_2->write.in.offset = VAR_4;
 VAR_2->write.in.size = VAR_5;
 VAR_6->opcode = VAR_1;
 VAR_6->nodeid = VAR_3->nodeid;
 VAR_6->in_numargs = 2;
 if (VAR_3->fc->minor < 9)
  VAR_6->in_args[0].size = VAR_0;
 else
  VAR_6->in_args[0].size = sizeof(VAR_2->write.in);
 VAR_6->in_args[0].value = &VAR_2->write.in;
 VAR_6->in_args[1].size = VAR_5;
 VAR_6->out_numargs = 1;
 VAR_6->out_args[0].size = sizeof(VAR_2->write.out);
 VAR_6->out_args[0].value = &VAR_2->write.out;
}
