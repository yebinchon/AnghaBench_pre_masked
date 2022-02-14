
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_net {int nfs_client_lock; } ;
struct nfs_client {scalar_t__ rpc_ops; scalar_t__ cl_minorversion; scalar_t__ cl_cons_state; scalar_t__ cl_clientid; int cl_count; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct nfs_client*,struct nfs_client*) ;
 int FUNC_1 (struct nfs_client*) ;
 int FUNC_2 (struct nfs_client*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct nfs_client *VAR_1, struct nfs_client *VAR_2,
        struct nfs_client **VAR_3, struct nfs_net *VAR_4)
{
 int VAR_5;

 if (VAR_1->rpc_ops != VAR_2->rpc_ops)
  return 1;

 if (VAR_1->cl_minorversion != VAR_2->cl_minorversion)
  return 1;





 if (VAR_1->cl_cons_state > VAR_0) {
  FUNC_3(&VAR_1->cl_count);
  FUNC_5(&VAR_4->nfs_client_lock);

  FUNC_1(*VAR_3);
  *VAR_3 = VAR_1;

  VAR_5 = FUNC_2(VAR_1);
  FUNC_4(&VAR_4->nfs_client_lock);

  if (VAR_5 < 0)
   return VAR_5;
 }

 if (VAR_1->cl_cons_state != VAR_0)
  return 1;

 if (VAR_1->cl_clientid != VAR_2->cl_clientid)
  return 1;




 if (!FUNC_0(VAR_1, VAR_2))
  return 1;

 return 0;
}
