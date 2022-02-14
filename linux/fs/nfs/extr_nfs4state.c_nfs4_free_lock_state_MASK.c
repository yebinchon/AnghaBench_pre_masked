
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_server {int lockowner_id; } ;
struct TYPE_2__ {int owner_id; } ;
struct nfs4_lock_state {TYPE_1__ ls_seqid; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct nfs4_lock_state*) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(struct nfs_server *VAR_0, struct nfs4_lock_state *VAR_1)
{
 FUNC_0(&VAR_0->lockowner_id, VAR_1->ls_seqid.owner_id);
 FUNC_2(&VAR_1->ls_seqid);
 FUNC_1(VAR_1);
}
