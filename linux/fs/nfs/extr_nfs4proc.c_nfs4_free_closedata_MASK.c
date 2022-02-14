
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct nfs4_state_owner {int dummy; } ;
struct TYPE_8__ {int seqid; } ;
struct TYPE_7__ {int lr_ret; } ;
struct TYPE_6__ {int res; int arg; scalar_t__ roc; } ;
struct nfs4_closedata {TYPE_3__ arg; TYPE_5__* state; TYPE_2__ res; TYPE_1__ lr; } ;
struct TYPE_10__ {TYPE_4__* inode; struct nfs4_state_owner* owner; } ;
struct TYPE_9__ {struct super_block* i_sb; } ;


 int FUNC_0 (struct nfs4_closedata*) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (struct nfs4_state_owner*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct super_block*) ;
 int FUNC_5 (int *,int *,int ) ;

__attribute__((used)) static void FUNC_6(void *VAR_0)
{
 struct nfs4_closedata *VAR_1 = VAR_0;
 struct nfs4_state_owner *VAR_2 = VAR_1->state->owner;
 struct super_block *VAR_3 = VAR_1->state->inode->i_sb;

 if (VAR_1->lr.roc)
  FUNC_5(&VAR_1->lr.arg, &VAR_1->lr.res,
    VAR_1->res.lr_ret);
 FUNC_1(VAR_1->state);
 FUNC_3(VAR_1->arg.seqid);
 FUNC_2(VAR_2);
 FUNC_4(VAR_3);
 FUNC_0(VAR_1);
}
