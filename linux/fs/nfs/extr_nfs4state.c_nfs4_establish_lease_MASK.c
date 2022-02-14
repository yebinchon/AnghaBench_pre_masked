
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_client {TYPE_1__* cl_mvops; } ;
struct nfs4_state_recovery_ops {int (* establish_clid ) (struct nfs_client*,struct cred const*) ;} ;
struct cred {int dummy; } ;
struct TYPE_2__ {struct nfs4_state_recovery_ops* reboot_recovery_ops; } ;


 int VAR_0 ;
 int FUNC_0 (struct nfs_client*) ;
 struct cred* FUNC_1 (struct nfs_client*) ;
 int FUNC_2 (struct nfs_client*) ;
 int FUNC_3 (struct cred const*) ;
 int FUNC_4 (struct nfs_client*,struct cred const*) ;

__attribute__((used)) static int FUNC_5(struct nfs_client *VAR_1)
{
 const struct cred *VAR_2;
 const struct nfs4_state_recovery_ops *VAR_3 =
  VAR_1->cl_mvops->reboot_recovery_ops;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_1);
 if (VAR_4 != 0)
  return VAR_4;
 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2 == ((void*)0))
  return -VAR_0;
 VAR_4 = VAR_3->establish_clid(VAR_1, VAR_2);
 FUNC_3(VAR_2);
 if (VAR_4 != 0)
  return VAR_4;
 FUNC_2(VAR_1);
 return 0;
}
