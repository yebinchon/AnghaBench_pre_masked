
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_auth_create_args {int pseudoflavor; } ;
struct rpc_auth {int dummy; } ;
struct nfs_server {int client; } ;
struct nfs_fsinfo {int dummy; } ;
struct nfs_fh {int dummy; } ;
typedef int rpc_authflavor_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct rpc_auth*) ;
 int FUNC_1 (struct nfs_server*,struct nfs_fh*,struct nfs_fsinfo*) ;
 struct rpc_auth* FUNC_2 (struct rpc_auth_create_args*,int ) ;

__attribute__((used)) static int FUNC_3(struct nfs_server *VAR_1, struct nfs_fh *VAR_2,
    struct nfs_fsinfo *VAR_3, rpc_authflavor_t VAR_4)
{
 struct rpc_auth_create_args VAR_5 = {
  .pseudoflavor = VAR_4,
 };
 struct rpc_auth *VAR_6;

 VAR_6 = FUNC_2(&VAR_5, VAR_1->client);
 if (FUNC_0(VAR_6))
  return -VAR_0;
 return FUNC_1(VAR_1, VAR_2, VAR_3);
}
