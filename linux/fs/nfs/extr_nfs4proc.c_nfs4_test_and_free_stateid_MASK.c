
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_server {TYPE_1__* nfs_client; } ;
struct nfs4_minor_version_ops {int (* test_and_free_expired ) (struct nfs_server*,int *,struct cred const*) ;} ;
struct cred {int dummy; } ;
typedef int nfs4_stateid ;
struct TYPE_2__ {struct nfs4_minor_version_ops* cl_mvops; } ;


 int FUNC_0 (struct nfs_server*,int *,struct cred const*) ;

__attribute__((used)) static void FUNC_1(struct nfs_server *VAR_0,
  nfs4_stateid *VAR_1,
  const struct cred *VAR_2)
{
 const struct nfs4_minor_version_ops *VAR_3 = VAR_0->nfs_client->cl_mvops;

 VAR_3->test_and_free_expired(VAR_0, VAR_1, VAR_2);
}
