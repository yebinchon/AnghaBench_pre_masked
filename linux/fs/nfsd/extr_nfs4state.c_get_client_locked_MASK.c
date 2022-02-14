
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd_net {int client_lock; } ;
struct nfs4_client {int cl_rpc_users; int net; } ;
typedef int __be32 ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct nfs4_client*) ;
 int FUNC_2 (int *) ;
 struct nfsd_net* FUNC_3 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static __be32 FUNC_4(struct nfs4_client *VAR_3)
{
 struct nfsd_net *VAR_4 = FUNC_3(VAR_3->net, VAR_1);

 FUNC_2(&VAR_4->client_lock);

 if (FUNC_1(VAR_3))
  return VAR_2;
 FUNC_0(&VAR_3->cl_rpc_users);
 return VAR_0;
}
