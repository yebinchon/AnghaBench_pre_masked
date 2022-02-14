
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_client {int cl_state; TYPE_1__* cl_mvops; } ;
struct nfs4_state_maintenance_ops {int (* renew_lease ) (struct nfs_client*,struct cred const*) ;struct cred* (* get_state_renewal_cred ) (struct nfs_client*) ;} ;
struct cred {int dummy; } ;
struct TYPE_2__ {struct nfs4_state_maintenance_ops* state_renewal_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct cred* FUNC_0 (struct nfs_client*) ;
 int FUNC_1 (struct nfs_client*,int) ;
 int FUNC_2 (struct cred const*) ;
 int FUNC_3 (int ,int *) ;
 struct cred* FUNC_4 (struct nfs_client*) ;
 int FUNC_5 (struct nfs_client*,struct cred const*) ;
 scalar_t__ FUNC_6 (int ,int *) ;

__attribute__((used)) static int FUNC_7(struct nfs_client *VAR_4)
{
 const struct cred *VAR_5;
 const struct nfs4_state_maintenance_ops *VAR_6 =
  VAR_4->cl_mvops->state_renewal_ops;
 int VAR_7;


 if (FUNC_6(VAR_3, &VAR_4->cl_state))
  return 0;
 VAR_5 = VAR_6->get_state_renewal_cred(VAR_4);
 if (VAR_5 == ((void*)0)) {
  VAR_5 = FUNC_0(VAR_4);
  VAR_7 = -VAR_0;
  if (VAR_5 == ((void*)0))
   goto out;
 }
 VAR_7 = VAR_6->renew_lease(VAR_4, VAR_5);
 FUNC_2(VAR_5);
 if (VAR_7 == -VAR_1) {
  FUNC_3(VAR_2, &VAR_4->cl_state);
  return 0;
 }
out:
 return FUNC_1(VAR_4, VAR_7);
}
