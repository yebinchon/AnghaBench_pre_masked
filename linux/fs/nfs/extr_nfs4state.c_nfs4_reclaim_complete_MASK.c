
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_client {int dummy; } ;
struct nfs4_state_recovery_ops {int (* reclaim_complete ) (struct nfs_client*,struct cred const*) ;} ;
struct cred {int dummy; } ;


 int FUNC_0 (struct nfs_client*,struct cred const*) ;

__attribute__((used)) static int FUNC_1(struct nfs_client *VAR_0,
     const struct nfs4_state_recovery_ops *VAR_1,
     const struct cred *VAR_2)
{

 if (VAR_1->reclaim_complete)
  return VAR_1->reclaim_complete(VAR_0, VAR_2);
 return 0;
}
