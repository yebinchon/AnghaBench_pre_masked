
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_server {scalar_t__ client; TYPE_1__* nfs_client; } ;
struct nfs_fsinfo {int dummy; } ;
struct nfs_fh {int dummy; } ;
struct TYPE_2__ {scalar_t__ cl_rpcclient; } ;


 int FUNC_0 (scalar_t__,struct nfs_fh*,struct nfs_fsinfo*) ;

__attribute__((used)) static int
FUNC_1(struct nfs_server *VAR_0, struct nfs_fh *VAR_1,
     struct nfs_fsinfo *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0->client, VAR_1, VAR_2);
 if (VAR_3 && VAR_0->nfs_client->cl_rpcclient != VAR_0->client)
  VAR_3 = FUNC_0(VAR_0->nfs_client->cl_rpcclient, VAR_1, VAR_2);
 return VAR_3;
}
