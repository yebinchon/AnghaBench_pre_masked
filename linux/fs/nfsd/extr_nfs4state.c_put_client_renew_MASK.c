
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd_net {int client_lock; } ;
struct nfs4_client {int cl_rpc_users; int net; } ;


 int FUNC_0 (int *,int *) ;
 int VAR_0 ;
 int FUNC_1 (struct nfs4_client*) ;
 struct nfsd_net* FUNC_2 (int ,int ) ;
 int VAR_1 ;
 int FUNC_3 (struct nfs4_client*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct nfs4_client *VAR_2)
{
 struct nfsd_net *VAR_3 = FUNC_2(VAR_2->net, VAR_1);

 if (!FUNC_0(&VAR_2->cl_rpc_users, &VAR_3->client_lock))
  return;
 if (!FUNC_1(VAR_2))
  FUNC_3(VAR_2);
 else
  FUNC_5(&VAR_0);
 FUNC_4(&VAR_3->client_lock);
}
