
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_client {int cl_owner_id; int cl_implid; int cl_serverscope; int cl_serverowner; int cl_rpcwaitq; int cl_res_state; TYPE_1__* cl_mvops; } ;
struct TYPE_2__ {int (* shutdown_client ) (struct nfs_client*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nfs_client*) ;
 int FUNC_3 (struct nfs_client*) ;
 int FUNC_4 (struct nfs_client*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct nfs_client*) ;

__attribute__((used)) static void FUNC_7(struct nfs_client *VAR_2)
{
 if (FUNC_0(VAR_1, &VAR_2->cl_res_state))
  FUNC_3(VAR_2);
 VAR_2->cl_mvops->shutdown_client(VAR_2);
 FUNC_2(VAR_2);
 if (FUNC_0(VAR_0, &VAR_2->cl_res_state))
  FUNC_4(VAR_2);

 FUNC_5(&VAR_2->cl_rpcwaitq);
 FUNC_1(VAR_2->cl_serverowner);
 FUNC_1(VAR_2->cl_serverscope);
 FUNC_1(VAR_2->cl_implid);
 FUNC_1(VAR_2->cl_owner_id);
}
