
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_clnt {int dummy; } ;
struct nfs_client {struct rpc_clnt* cl_rpcclient; } ;
struct nfs4_ff_layout_mirror {TYPE_2__* mirror_ds; } ;
struct inode {int dummy; } ;
struct TYPE_4__ {TYPE_1__* ds_versions; } ;
struct TYPE_3__ {int version; } ;


 int FUNC_0 () ;
 struct rpc_clnt* FUNC_1 (struct nfs_client*,struct inode*) ;

struct rpc_clnt *
FUNC_2(struct nfs4_ff_layout_mirror *VAR_0,
     struct nfs_client *VAR_1, struct inode *VAR_2)
{
 switch (VAR_0->mirror_ds->ds_versions[0].version) {
 case 3:

  return VAR_1->cl_rpcclient;
 case 4:
  return FUNC_1(VAR_1, VAR_2);
 default:
  FUNC_0();
 }
}
