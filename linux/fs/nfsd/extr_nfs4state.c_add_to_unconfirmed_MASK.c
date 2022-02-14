
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfsd_net {int * unconf_id_hashtbl; int unconf_name_tree; int client_lock; } ;
struct TYPE_2__ {int cl_id; } ;
struct nfs4_client {int cl_idhash; TYPE_1__ cl_clientid; int cl_flags; int net; } ;


 int VAR_0 ;
 int FUNC_0 (struct nfs4_client*,int *) ;
 int FUNC_1 (int ,int *) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 struct nfsd_net* FUNC_5 (int ,int ) ;
 int VAR_1 ;
 int FUNC_6 (struct nfs4_client*) ;

__attribute__((used)) static void
FUNC_7(struct nfs4_client *VAR_2)
{
 unsigned int VAR_3;
 struct nfsd_net *VAR_4 = FUNC_5(VAR_2->net, VAR_1);

 FUNC_4(&VAR_4->client_lock);

 FUNC_1(VAR_0, &VAR_2->cl_flags);
 FUNC_0(VAR_2, &VAR_4->unconf_name_tree);
 VAR_3 = FUNC_2(VAR_2->cl_clientid.cl_id);
 FUNC_3(&VAR_2->cl_idhash, &VAR_4->unconf_id_hashtbl[VAR_3]);
 FUNC_6(VAR_2);
}
