
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nfs_server {struct nfs_client* nfs_client; } ;
struct nfs_client {TYPE_2__* cl_mvops; } ;
struct nfs4_state {TYPE_1__* owner; int state_lock; int flags; int lock_states; } ;
struct nfs4_lock_state {int ls_flags; int ls_locks; int ls_count; struct nfs4_state* ls_state; } ;
struct TYPE_4__ {int (* free_lock_state ) (struct nfs_server*,struct nfs4_lock_state*) ;} ;
struct TYPE_3__ {struct nfs_server* so_server; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct nfs_server*,struct nfs4_lock_state*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct nfs_server*,struct nfs4_lock_state*) ;
 scalar_t__ FUNC_7 (int ,int *) ;

void FUNC_8(struct nfs4_lock_state *VAR_2)
{
 struct nfs_server *VAR_3;
 struct nfs4_state *VAR_4;

 if (VAR_2 == ((void*)0))
  return;
 VAR_4 = VAR_2->ls_state;
 if (!FUNC_4(&VAR_2->ls_count, &VAR_4->state_lock))
  return;
 FUNC_1(&VAR_2->ls_locks);
 if (FUNC_2(&VAR_4->lock_states))
  FUNC_0(VAR_0, &VAR_4->flags);
 FUNC_5(&VAR_4->state_lock);
 VAR_3 = VAR_4->owner->so_server;
 if (FUNC_7(VAR_1, &VAR_2->ls_flags)) {
  struct nfs_client *VAR_5 = VAR_3->nfs_client;

  VAR_5->cl_mvops->free_lock_state(VAR_3, VAR_2);
 } else
  FUNC_3(VAR_3, VAR_2);
}
