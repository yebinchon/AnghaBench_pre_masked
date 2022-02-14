
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_server {struct nfs_server* client_acl; } ;
struct nfs_fh {int dummy; } ;
struct nfs_fattr {int dummy; } ;
typedef int rpc_authflavor_t ;


 int FUNC_0 (struct nfs_server*) ;
 struct nfs_server* FUNC_1 (struct nfs_server*,struct nfs_fh*,struct nfs_fattr*,int ) ;
 int FUNC_2 (struct nfs_server*) ;

struct nfs_server *FUNC_3(struct nfs_server *VAR_0,
         struct nfs_fh *VAR_1,
         struct nfs_fattr *VAR_2,
         rpc_authflavor_t VAR_3)
{
 struct nfs_server *VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
 if (!FUNC_0(VAR_4) && !FUNC_0(VAR_0->client_acl))
  FUNC_2(VAR_4);
 return VAR_4;
}
