
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfsd4_lock {int lk_new_owner; int lk_new_lock_seqid; } ;
struct nfs4_ol_stateid {int dummy; } ;
struct TYPE_2__ {int so_strhash; int * so_ops; int so_seqid; scalar_t__ so_is_open_owner; int so_stateids; } ;
struct nfs4_lockowner {TYPE_1__ lo_owner; int lo_blocked; } ;
struct nfs4_client {int cl_lock; int * cl_ownerstr_hashtbl; } ;


 int FUNC_0 (int *) ;
 struct nfs4_lockowner* FUNC_1 (int ,int *,struct nfs4_client*) ;
 struct nfs4_lockowner* FUNC_2 (struct nfs4_client*,int *) ;
 int FUNC_3 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static struct nfs4_lockowner *
FUNC_7(unsigned int VAR_2, struct nfs4_client *VAR_3,
      struct nfs4_ol_stateid *VAR_4,
      struct nfsd4_lock *VAR_5)
{
 struct nfs4_lockowner *VAR_6, *VAR_7;

 VAR_6 = FUNC_1(VAR_1, &VAR_5->lk_new_owner, VAR_3);
 if (!VAR_6)
  return ((void*)0);
 FUNC_0(&VAR_6->lo_blocked);
 FUNC_0(&VAR_6->lo_owner.so_stateids);
 VAR_6->lo_owner.so_is_open_owner = 0;
 VAR_6->lo_owner.so_seqid = VAR_5->lk_new_lock_seqid;
 VAR_6->lo_owner.so_ops = &VAR_0;
 FUNC_5(&VAR_3->cl_lock);
 VAR_7 = FUNC_2(VAR_3, &VAR_5->lk_new_owner);
 if (VAR_7 == ((void*)0)) {
  FUNC_3(&VAR_6->lo_owner.so_strhash,
    &VAR_3->cl_ownerstr_hashtbl[VAR_2]);
  VAR_7 = VAR_6;
 } else
  FUNC_4(&VAR_6->lo_owner);

 FUNC_6(&VAR_3->cl_lock);
 return VAR_7;
}
