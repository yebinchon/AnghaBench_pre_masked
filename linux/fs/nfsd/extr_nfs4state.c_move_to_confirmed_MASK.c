
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfsd_net {int conf_name_tree; int unconf_name_tree; int * conf_id_hashtbl; int client_lock; } ;
struct TYPE_2__ {int cl_id; } ;
struct nfs4_client {int cl_flags; int cl_namenode; int cl_idhash; int net; TYPE_1__ cl_clientid; } ;


 int VAR_0 ;
 int FUNC_0 (struct nfs4_client*,int *) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (char*,struct nfs4_client*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 struct nfsd_net* FUNC_5 (int ,int ) ;
 int VAR_1 ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (struct nfs4_client*) ;
 int FUNC_8 (int ,int *) ;

__attribute__((used)) static void
FUNC_9(struct nfs4_client *VAR_2)
{
 unsigned int VAR_3 = FUNC_1(VAR_2->cl_clientid.cl_id);
 struct nfsd_net *VAR_4 = FUNC_5(VAR_2->net, VAR_1);

 FUNC_4(&VAR_4->client_lock);

 FUNC_2("NFSD: move_to_confirm nfs4_client %p\n", VAR_2);
 FUNC_3(&VAR_2->cl_idhash, &VAR_4->conf_id_hashtbl[VAR_3]);
 FUNC_6(&VAR_2->cl_namenode, &VAR_4->unconf_name_tree);
 FUNC_0(VAR_2, &VAR_4->conf_name_tree);
 FUNC_8(VAR_0, &VAR_2->cl_flags);
 FUNC_7(VAR_2);
}
