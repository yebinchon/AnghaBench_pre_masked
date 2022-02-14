
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_server {int master_link; int client_link; struct nfs_client* nfs_client; } ;
struct nfs_net {int nfs_client_lock; int nfs_volume_list; } ;
struct nfs_client {int cl_res_state; int cl_superblocks; int cl_net; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 struct nfs_net* FUNC_3 (int ,int ) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct nfs_server *VAR_2)
{
 struct nfs_client *VAR_3 = VAR_2->nfs_client;
 struct nfs_net *VAR_4 = FUNC_3(VAR_3->cl_net, VAR_1);

 FUNC_4(&VAR_4->nfs_client_lock);
 FUNC_2(&VAR_2->client_link, &VAR_3->cl_superblocks);
 FUNC_1(&VAR_2->master_link, &VAR_4->nfs_volume_list);
 FUNC_0(VAR_0, &VAR_3->cl_res_state);
 FUNC_5(&VAR_4->nfs_client_lock);

}
