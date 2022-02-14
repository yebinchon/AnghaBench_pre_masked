
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct qstr {int name; scalar_t__ len; } ;
struct fuse_entry_out {int dummy; } ;
struct fuse_conn {int dummy; } ;
struct fuse_args {int in_numargs; int out_numargs; TYPE_2__* out_args; TYPE_1__* in_args; int nodeid; int opcode; } ;
struct TYPE_4__ {int size; struct fuse_entry_out* value; } ;
struct TYPE_3__ {int value; scalar_t__ size; } ;


 int VAR_0 ;
 int FUNC_0 (struct fuse_entry_out*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct fuse_conn *VAR_1, struct fuse_args *VAR_2,
        u64 VAR_3, const struct qstr *VAR_4,
        struct fuse_entry_out *VAR_5)
{
 FUNC_0(VAR_5, 0, sizeof(struct fuse_entry_out));
 VAR_2->opcode = VAR_0;
 VAR_2->nodeid = VAR_3;
 VAR_2->in_numargs = 1;
 VAR_2->in_args[0].size = VAR_4->len + 1;
 VAR_2->in_args[0].value = VAR_4->name;
 VAR_2->out_numargs = 1;
 VAR_2->out_args[0].size = sizeof(struct fuse_entry_out);
 VAR_2->out_args[0].value = VAR_5;
}
