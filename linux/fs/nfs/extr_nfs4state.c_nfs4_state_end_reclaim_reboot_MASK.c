
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_client {int cl_state; TYPE_1__* cl_mvops; } ;
struct nfs4_state_recovery_ops {int dummy; } ;
struct cred {int dummy; } ;
struct TYPE_2__ {struct nfs4_state_recovery_ops* reboot_recovery_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct cred* FUNC_0 (struct nfs_client*) ;
 int FUNC_1 (struct nfs_client*,struct nfs4_state_recovery_ops const*,struct cred const*) ;
 int FUNC_2 (struct nfs_client*) ;
 int FUNC_3 (struct cred const*) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct nfs_client *VAR_2)
{
 const struct nfs4_state_recovery_ops *VAR_3;
 const struct cred *VAR_4;
 int VAR_5;

 if (!FUNC_2(VAR_2))
  return;
 VAR_3 = VAR_2->cl_mvops->reboot_recovery_ops;
 VAR_4 = FUNC_0(VAR_2);
 VAR_5 = FUNC_1(VAR_2, VAR_3, VAR_4);
 FUNC_3(VAR_4);
 if (VAR_5 == -VAR_1)
  FUNC_4(VAR_0, &VAR_2->cl_state);
}
