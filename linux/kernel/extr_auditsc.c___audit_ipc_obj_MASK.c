
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kern_ipc_perm {int mode; int gid; int uid; } ;
struct TYPE_2__ {int osid; scalar_t__ has_perm; int mode; int gid; int uid; } ;
struct audit_context {int type; TYPE_1__ ipc; } ;


 int VAR_0 ;
 struct audit_context* FUNC_0 () ;
 int FUNC_1 (struct kern_ipc_perm*,int *) ;

void FUNC_2(struct kern_ipc_perm *VAR_1)
{
 struct audit_context *VAR_2 = FUNC_0();
 VAR_2->ipc.uid = VAR_1->uid;
 VAR_2->ipc.gid = VAR_1->gid;
 VAR_2->ipc.mode = VAR_1->mode;
 VAR_2->ipc.has_perm = 0;
 FUNC_1(VAR_1, &VAR_2->ipc.osid);
 VAR_2->type = VAR_0;
}
