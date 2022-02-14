
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_server {scalar_t__ namelen; struct nfs_client* nfs_client; } ;
struct nfs_pathconf {scalar_t__ max_namelen; struct nfs_fattr* fattr; } ;
struct nfs_fsinfo {int layouttype; scalar_t__ nlayouttypes; struct nfs_fattr* fattr; } ;
struct nfs_fh {int dummy; } ;
struct nfs_fattr {int dummy; } ;
struct nfs_client {TYPE_1__* rpc_ops; } ;
struct TYPE_2__ {int (* set_capabilities ) (struct nfs_server*,struct nfs_fh*) ;int (* fsinfo ) (struct nfs_server*,struct nfs_fh*,struct nfs_fsinfo*) ;scalar_t__ (* pathconf ) (struct nfs_server*,struct nfs_fh*,struct nfs_pathconf*) ;} ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct nfs_fattr*) ;
 int FUNC_2 (struct nfs_server*,struct nfs_fsinfo*) ;
 int FUNC_3 (struct nfs_server*,struct nfs_fh*) ;
 int FUNC_4 (struct nfs_server*,struct nfs_fh*,struct nfs_fsinfo*) ;
 scalar_t__ FUNC_5 (struct nfs_server*,struct nfs_fh*,struct nfs_pathconf*) ;

int FUNC_6(struct nfs_server *VAR_0, struct nfs_fh *VAR_1, struct nfs_fattr *VAR_2)
{
 struct nfs_fsinfo VAR_3;
 struct nfs_client *VAR_4 = VAR_0->nfs_client;
 int VAR_5;

 if (VAR_4->rpc_ops->set_capabilities != ((void*)0)) {
  VAR_5 = VAR_4->rpc_ops->set_capabilities(VAR_0, VAR_1);
  if (VAR_5 < 0)
   return VAR_5;
 }

 VAR_3.fattr = VAR_2;
 VAR_3.nlayouttypes = 0;
 FUNC_0(VAR_3.layouttype, 0, sizeof(VAR_3.layouttype));
 VAR_5 = VAR_4->rpc_ops->fsinfo(VAR_0, VAR_1, &VAR_3);
 if (VAR_5 < 0)
  return VAR_5;

 FUNC_2(VAR_0, &VAR_3);


 if (VAR_0->namelen == 0) {
  struct nfs_pathconf VAR_6;

  VAR_6.fattr = VAR_2;
  FUNC_1(VAR_2);

  if (VAR_4->rpc_ops->pathconf(VAR_0, VAR_1, &VAR_6) >= 0)
   VAR_0->namelen = VAR_6.max_namelen;
 }

 return 0;
}
