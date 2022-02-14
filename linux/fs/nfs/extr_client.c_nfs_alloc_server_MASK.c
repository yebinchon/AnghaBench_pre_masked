
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_server {int uoc_rpcwaitq; int lockowner_id; int openowner_id; int io_stats; int active; int ss_copies; int state_owners_lru; int layouts; int delegations; int master_link; int client_link; int client_acl; int client; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct nfs_server*) ;
 struct nfs_server* FUNC_5 (int,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (struct nfs_server*) ;
 int FUNC_8 (int *,char*) ;

struct nfs_server *FUNC_9(void)
{
 struct nfs_server *VAR_2;

 VAR_2 = FUNC_5(sizeof(struct nfs_server), VAR_1);
 if (!VAR_2)
  return ((void*)0);

 VAR_2->client = VAR_2->client_acl = FUNC_0(-VAR_0);


 FUNC_1(&VAR_2->client_link);
 FUNC_1(&VAR_2->master_link);
 FUNC_1(&VAR_2->delegations);
 FUNC_1(&VAR_2->layouts);
 FUNC_1(&VAR_2->state_owners_lru);
 FUNC_1(&VAR_2->ss_copies);

 FUNC_2(&VAR_2->active, 0);

 VAR_2->io_stats = FUNC_6();
 if (!VAR_2->io_stats) {
  FUNC_4(VAR_2);
  return ((void*)0);
 }

 FUNC_3(&VAR_2->openowner_id);
 FUNC_3(&VAR_2->lockowner_id);
 FUNC_7(VAR_2);
 FUNC_8(&VAR_2->uoc_rpcwaitq, "NFS UOC");

 return VAR_2;
}
