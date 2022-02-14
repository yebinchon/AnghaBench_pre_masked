
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd_net {int client_lock; } ;
struct nfsd4_session {struct nfs4_client* se_client; int se_perclnt; int se_hash; } ;
struct nfs4_client {int cl_lock; int net; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct nfsd_net* FUNC_2 (int ,int ) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct nfsd4_session *VAR_1)
{
 struct nfs4_client *VAR_2 = VAR_1->se_client;
 struct nfsd_net *VAR_3 = FUNC_2(VAR_2->net, VAR_0);

 FUNC_1(&VAR_3->client_lock);

 FUNC_0(&VAR_1->se_hash);
 FUNC_3(&VAR_1->se_client->cl_lock);
 FUNC_0(&VAR_1->se_perclnt);
 FUNC_4(&VAR_1->se_client->cl_lock);
}
