
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd_net {int client_lock; } ;
struct nfsd4_session {struct nfs4_client* se_client; } ;
struct nfs4_client {int net; } ;


 struct nfsd_net* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct nfsd4_session*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct nfsd4_session *VAR_1)
{
 struct nfs4_client *VAR_2 = VAR_1->se_client;
 struct nfsd_net *VAR_3 = FUNC_0(VAR_2->net, VAR_0);

 FUNC_2(&VAR_3->client_lock);
 FUNC_1(VAR_1);
 FUNC_3(&VAR_3->client_lock);
}
