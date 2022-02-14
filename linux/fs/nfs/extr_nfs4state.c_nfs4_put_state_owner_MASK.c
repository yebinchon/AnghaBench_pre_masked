
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_server {int state_owners_lru; struct nfs_client* nfs_client; } ;
struct nfs_client {int cl_lock; } ;
struct nfs4_state_owner {int so_lru; int so_expires; int so_count; struct nfs_server* so_server; } ;


 int FUNC_0 (int *,int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct nfs4_state_owner *VAR_1)
{
 struct nfs_server *VAR_2 = VAR_1->so_server;
 struct nfs_client *VAR_3 = VAR_2->nfs_client;

 if (!FUNC_0(&VAR_1->so_count, &VAR_3->cl_lock))
  return;

 VAR_1->so_expires = VAR_0;
 FUNC_1(&VAR_1->so_lru, &VAR_2->state_owners_lru);
 FUNC_2(&VAR_3->cl_lock);
}
