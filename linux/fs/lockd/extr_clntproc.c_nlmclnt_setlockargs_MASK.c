
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_14__ {int fl_type; int fl_end; int fl_start; } ;
struct TYPE_10__ {int len; int data; } ;
struct nlm_lock {char* caller; TYPE_7__ fl; scalar_t__ svid; TYPE_3__ oh; int fh; } ;
struct nlm_args {int cookie; struct nlm_lock lock; } ;
struct nlm_rqst {int a_owner; TYPE_2__* a_host; struct nlm_args a_args; } ;
struct nfs_fh {int dummy; } ;
struct TYPE_12__ {TYPE_4__* owner; } ;
struct TYPE_13__ {TYPE_5__ nfs_fl; } ;
struct file_lock {int fl_type; int fl_end; int fl_start; TYPE_6__ fl_u; int fl_file; } ;
struct TYPE_11__ {scalar_t__ pid; } ;
struct TYPE_9__ {TYPE_1__* h_rpcclnt; } ;
struct TYPE_8__ {char* cl_nodename; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int,char*,unsigned int,char*) ;

__attribute__((used)) static void FUNC_5(struct nlm_rqst *VAR_0, struct file_lock *VAR_1)
{
 struct nlm_args *VAR_2 = &VAR_0->a_args;
 struct nlm_lock *VAR_3 = &VAR_2->lock;
 char *VAR_4 = VAR_0->a_host->h_rpcclnt->cl_nodename;

 FUNC_3(&VAR_2->cookie);
 FUNC_2(&VAR_3->fh, FUNC_0(FUNC_1(VAR_1->fl_file)), sizeof(struct nfs_fh));
 VAR_3->caller = VAR_4;
 VAR_3->oh.data = VAR_0->a_owner;
 VAR_3->oh.len = FUNC_4(VAR_0->a_owner, sizeof(VAR_0->a_owner), "%u@%s",
    (unsigned int)VAR_1->fl_u.nfs_fl.owner->pid,
    VAR_4);
 VAR_3->svid = VAR_1->fl_u.nfs_fl.owner->pid;
 VAR_3->fl.fl_start = VAR_1->fl_start;
 VAR_3->fl.fl_end = VAR_1->fl_end;
 VAR_3->fl.fl_type = VAR_1->fl_type;
}
