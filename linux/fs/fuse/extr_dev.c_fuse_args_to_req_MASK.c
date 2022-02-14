
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nodeid; int opcode; } ;
struct TYPE_4__ {TYPE_1__ h; } ;
struct fuse_req {struct fuse_args* args; TYPE_2__ in; } ;
struct fuse_args {int nodeid; int opcode; } ;



__attribute__((used)) static void FUNC_0(struct fuse_req *VAR_0, struct fuse_args *VAR_1)
{
 VAR_0->in.h.opcode = VAR_1->opcode;
 VAR_0->in.h.nodeid = VAR_1->nodeid;
 VAR_0->args = VAR_1;
}
