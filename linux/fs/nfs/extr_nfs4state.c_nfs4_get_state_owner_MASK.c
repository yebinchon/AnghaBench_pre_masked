
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_server {struct nfs_client* nfs_client; } ;
struct nfs_client {int cl_lock; } ;
struct nfs4_state_owner {int dummy; } ;
struct cred {int dummy; } ;
typedef int gfp_t ;


 struct nfs4_state_owner* FUNC_0 (struct nfs_server*,struct cred const*,int ) ;
 struct nfs4_state_owner* FUNC_1 (struct nfs_server*,struct cred const*) ;
 int FUNC_2 (struct nfs4_state_owner*) ;
 int FUNC_3 (struct nfs_server*) ;
 struct nfs4_state_owner* FUNC_4 (struct nfs4_state_owner*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

struct nfs4_state_owner *FUNC_7(struct nfs_server *VAR_0,
           const struct cred *VAR_1,
           gfp_t VAR_2)
{
 struct nfs_client *VAR_3 = VAR_0->nfs_client;
 struct nfs4_state_owner *VAR_4, *VAR_5;

 FUNC_5(&VAR_3->cl_lock);
 VAR_4 = FUNC_1(VAR_0, VAR_1);
 FUNC_6(&VAR_3->cl_lock);
 if (VAR_4 != ((void*)0))
  goto out;
 VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2);
 if (VAR_5 == ((void*)0))
  goto out;
 FUNC_5(&VAR_3->cl_lock);
 VAR_4 = FUNC_4(VAR_5);
 FUNC_6(&VAR_3->cl_lock);
 if (VAR_4 != VAR_5)
  FUNC_2(VAR_5);
out:
 FUNC_3(VAR_0);
 return VAR_4;
}
