
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_server {int cred; int io_stats; int openowner_id; int lockowner_id; int nfs_client; int client; int client_acl; int (* destroy ) (struct nfs_server*) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nfs_server*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (struct nfs_server*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct nfs_server*) ;

void FUNC_10(struct nfs_server *VAR_0)
{
 FUNC_6(VAR_0);

 if (VAR_0->destroy != ((void*)0))
  VAR_0->destroy(VAR_0);

 if (!FUNC_0(VAR_0->client_acl))
  FUNC_8(VAR_0->client_acl);
 if (!FUNC_0(VAR_0->client))
  FUNC_8(VAR_0->client);

 FUNC_4(VAR_0->nfs_client);

 FUNC_1(&VAR_0->lockowner_id);
 FUNC_1(&VAR_0->openowner_id);
 FUNC_3(VAR_0->io_stats);
 FUNC_7(VAR_0->cred);
 FUNC_2(VAR_0);
 FUNC_5();
}
