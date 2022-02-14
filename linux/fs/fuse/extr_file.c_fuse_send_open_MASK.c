
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
struct fuse_open_out {int dummy; } ;
struct fuse_open_in {int flags; } ;
struct fuse_conn {int atomic_o_trunc; } ;
struct file {int f_flags; } ;
typedef int inarg ;
struct TYPE_8__ {int opcode; int in_numargs; int out_numargs; TYPE_2__* out_args; TYPE_1__* in_args; int nodeid; } ;
struct TYPE_7__ {int size; struct fuse_open_out* value; } ;
struct TYPE_6__ {int size; struct fuse_open_in* value; } ;


 int FUNC_0 (TYPE_3__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__ VAR_4 ;
 int FUNC_1 (struct fuse_conn*,TYPE_3__*) ;
 int FUNC_2 (struct fuse_open_in*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct fuse_conn *VAR_5, u64 VAR_6, struct file *VAR_7,
     int VAR_8, struct fuse_open_out *VAR_9)
{
 struct fuse_open_in VAR_10;
 FUNC_0(VAR_4);

 FUNC_2(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.flags = VAR_7->f_flags & ~(VAR_0 | VAR_1 | VAR_2);
 if (!VAR_5->atomic_o_trunc)
  VAR_10.flags &= ~VAR_3;
 VAR_4.opcode = VAR_8;
 VAR_4.nodeid = VAR_6;
 VAR_4.in_numargs = 1;
 VAR_4.in_args[0].size = sizeof(VAR_10);
 VAR_4.in_args[0].value = &VAR_10;
 VAR_4.out_numargs = 1;
 VAR_4.out_args[0].size = sizeof(*VAR_9);
 VAR_4.out_args[0].value = VAR_9;

 return FUNC_1(VAR_5, &VAR_4);
}
