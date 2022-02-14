
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_server {TYPE_1__* nfs_client; } ;
struct nfs4_minor_version_ops {int (* test_and_free_expired ) (struct nfs_server*,int *,struct cred const*) ;} ;
struct inode {int dummy; } ;
struct cred {int dummy; } ;
typedef int nfs4_stateid ;
struct TYPE_2__ {struct nfs4_minor_version_ops* cl_mvops; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nfs_server* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*,int *) ;
 int FUNC_2 (struct nfs_server*,int *,struct cred const*) ;

__attribute__((used)) static void
FUNC_3(struct inode *VAR_2,
  nfs4_stateid *VAR_3,
  const struct cred *VAR_4)
{
 struct nfs_server *VAR_5 = FUNC_0(VAR_2);
 const struct nfs4_minor_version_ops *VAR_6 = VAR_5->nfs_client->cl_mvops;
 int VAR_7;

 if (!VAR_4)
  return;
 VAR_7 = VAR_6->test_and_free_expired(VAR_5, VAR_3, VAR_4);
 if (VAR_7 == -VAR_1 || VAR_7 == -VAR_0)
  FUNC_1(VAR_2, VAR_3);
}
