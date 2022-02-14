
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd_net {int client_lock; } ;
struct nfsd4_session {int se_ref; struct nfs4_client* se_client; } ;
struct nfs4_client {int net; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct nfsd4_session*) ;
 scalar_t__ FUNC_2 (struct nfsd4_session*) ;
 int FUNC_3 (int *) ;
 struct nfsd_net* FUNC_4 (int ,int ) ;
 int VAR_0 ;
 int FUNC_5 (struct nfs4_client*) ;

__attribute__((used)) static void FUNC_6(struct nfsd4_session *VAR_1)
{
 struct nfs4_client *VAR_2 = VAR_1->se_client;
 struct nfsd_net *VAR_3 = FUNC_4(VAR_2->net, VAR_0);

 FUNC_3(&VAR_3->client_lock);

 if (FUNC_0(&VAR_1->se_ref) && FUNC_2(VAR_1))
  FUNC_1(VAR_1);
 FUNC_5(VAR_2);
}
