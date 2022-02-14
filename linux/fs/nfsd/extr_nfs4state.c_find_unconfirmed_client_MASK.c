
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd_net {int client_lock; struct list_head* unconf_id_hashtbl; } ;
struct nfs4_client {int dummy; } ;
struct list_head {int dummy; } ;
typedef int clientid_t ;


 struct nfs4_client* FUNC_0 (struct list_head*,int *,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static struct nfs4_client *
FUNC_2(clientid_t *VAR_0, bool VAR_1, struct nfsd_net *VAR_2)
{
 struct list_head *VAR_3 = VAR_2->unconf_id_hashtbl;

 FUNC_1(&VAR_2->client_lock);
 return FUNC_0(VAR_3, VAR_0, VAR_1);
}
