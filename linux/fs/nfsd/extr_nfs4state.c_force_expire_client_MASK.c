
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd_net {int client_lock; } ;
struct nfs4_client {int * cl_nfsd_dentry; int cl_lru; int cl_rpc_users; int cl_lock; scalar_t__ cl_time; int net; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct nfs4_client*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 struct nfsd_net* FUNC_3 (int ,int ) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct nfs4_client*) ;
 int FUNC_7 (int ,int) ;

__attribute__((used)) static void FUNC_8(struct nfs4_client *VAR_2)
{
 struct nfsd_net *VAR_3 = FUNC_3(VAR_2->net, VAR_1);
 bool VAR_4;

 FUNC_4(&VAR_2->cl_lock);
 VAR_2->cl_time = 0;
 FUNC_5(&VAR_2->cl_lock);

 FUNC_7(VAR_0, FUNC_0(&VAR_2->cl_rpc_users) == 0);
 FUNC_4(&VAR_3->client_lock);
 VAR_4 = FUNC_2(&VAR_2->cl_lru);
 if (!VAR_4)
  FUNC_6(VAR_2);
 FUNC_5(&VAR_3->client_lock);

 if (!VAR_4)
  FUNC_1(VAR_2);
 else
  FUNC_7(VAR_0, VAR_2->cl_nfsd_dentry == ((void*)0));
}
