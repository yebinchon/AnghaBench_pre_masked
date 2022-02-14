
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_server {int openowner_id; } ;
struct TYPE_2__ {scalar_t__ owner_id; } ;
struct nfs4_state_owner {int so_delegreturn_mutex; int so_reclaim_seqcount; int so_lru; int so_count; TYPE_1__ so_seqid; int so_states; int so_lock; int so_cred; struct nfs_server* so_server; } ;
struct cred {int dummy; } ;
typedef int gfp_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct cred const*) ;
 scalar_t__ FUNC_3 (int *,int ,int ,int ) ;
 int FUNC_4 (struct nfs4_state_owner*) ;
 struct nfs4_state_owner* FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static struct nfs4_state_owner *
FUNC_10(struct nfs_server *VAR_0,
  const struct cred *VAR_1,
  gfp_t VAR_2)
{
 struct nfs4_state_owner *VAR_3;

 VAR_3 = FUNC_5(sizeof(*VAR_3), VAR_2);
 if (!VAR_3)
  return ((void*)0);
 VAR_3->so_seqid.owner_id = FUNC_3(&VAR_0->openowner_id, 0, 0,
      VAR_2);
 if (VAR_3->so_seqid.owner_id < 0) {
  FUNC_4(VAR_3);
  return ((void*)0);
 }
 VAR_3->so_server = VAR_0;
 VAR_3->so_cred = FUNC_2(VAR_1);
 FUNC_9(&VAR_3->so_lock);
 FUNC_0(&VAR_3->so_states);
 FUNC_7(&VAR_3->so_seqid);
 FUNC_1(&VAR_3->so_count, 1);
 FUNC_0(&VAR_3->so_lru);
 FUNC_8(&VAR_3->so_reclaim_seqcount);
 FUNC_6(&VAR_3->so_delegreturn_mutex);
 return VAR_3;
}
