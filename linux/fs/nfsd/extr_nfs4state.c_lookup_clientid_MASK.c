
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd_net {int client_lock; } ;
struct nfsd4_compound_state {struct nfs4_client* clp; int session; } ;
struct nfs4_client {int cl_rpc_users; int cl_clientid; } ;
typedef int clientid_t ;
typedef int __be32 ;


 scalar_t__ FUNC_0 (int *,struct nfsd_net*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 struct nfs4_client* FUNC_3 (int *,int,struct nfsd_net*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static __be32 FUNC_7(clientid_t *VAR_3,
  struct nfsd4_compound_state *VAR_4,
  struct nfsd_net *VAR_5)
{
 struct nfs4_client *VAR_6;

 if (VAR_4->clp) {
  VAR_6 = VAR_4->clp;
  if (!FUNC_4(&VAR_6->cl_clientid, VAR_3))
   return VAR_2;
  return VAR_0;
 }

 if (FUNC_0(VAR_3, VAR_5))
  return VAR_2;






 FUNC_1(VAR_4->session);
 FUNC_5(&VAR_5->client_lock);
 VAR_6 = FUNC_3(VAR_3, 0, VAR_5);
 if (!VAR_6) {
  FUNC_6(&VAR_5->client_lock);
  return VAR_1;
 }
 FUNC_2(&VAR_6->cl_rpc_users);
 FUNC_6(&VAR_5->client_lock);


 VAR_4->clp = VAR_6;
 return VAR_0;
}
