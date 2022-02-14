
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nfs_server {int lockowner_id; } ;
struct nfs4_state {TYPE_1__* owner; } ;
struct TYPE_4__ {scalar_t__ owner_id; } ;
struct nfs4_lock_state {int ls_locks; TYPE_2__ ls_seqid; int ls_owner; struct nfs4_state* ls_state; int ls_count; } ;
typedef int fl_owner_t ;
struct TYPE_3__ {struct nfs_server* so_server; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (struct nfs4_lock_state*) ;
 struct nfs4_lock_state* FUNC_3 (int,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *,int) ;

__attribute__((used)) static struct nfs4_lock_state *FUNC_6(struct nfs4_state *VAR_1, fl_owner_t VAR_2)
{
 struct nfs4_lock_state *VAR_3;
 struct nfs_server *VAR_4 = VAR_1->owner->so_server;

 VAR_3 = FUNC_3(sizeof(*VAR_3), VAR_0);
 if (VAR_3 == ((void*)0))
  return ((void*)0);
 FUNC_4(&VAR_3->ls_seqid);
 FUNC_5(&VAR_3->ls_count, 1);
 VAR_3->ls_state = VAR_1;
 VAR_3->ls_owner = VAR_2;
 VAR_3->ls_seqid.owner_id = FUNC_1(&VAR_4->lockowner_id, 0, 0, VAR_0);
 if (VAR_3->ls_seqid.owner_id < 0)
  goto out_free;
 FUNC_0(&VAR_3->ls_locks);
 return VAR_3;
out_free:
 FUNC_2(VAR_3);
 return ((void*)0);
}
