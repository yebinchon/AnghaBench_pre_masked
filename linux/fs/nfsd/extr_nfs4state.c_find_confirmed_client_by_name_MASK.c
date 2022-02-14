
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_netobj {int dummy; } ;
struct nfsd_net {int conf_name_tree; int client_lock; } ;
struct nfs4_client {int dummy; } ;


 struct nfs4_client* FUNC_0 (struct xdr_netobj*,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static struct nfs4_client *
FUNC_2(struct xdr_netobj *VAR_0, struct nfsd_net *VAR_1)
{
 FUNC_1(&VAR_1->client_lock);
 return FUNC_0(VAR_0, &VAR_1->conf_name_tree);
}
