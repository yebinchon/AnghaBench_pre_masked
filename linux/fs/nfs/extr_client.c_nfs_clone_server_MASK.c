
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nfs_server {scalar_t__ namelen; int mount_time; TYPE_2__* client; int fsid; TYPE_1__* nfs_client; int destroy; int cred; } ;
struct nfs_fh {int dummy; } ;
struct nfs_fattr {int fsid; } ;
typedef int rpc_authflavor_t ;
struct TYPE_4__ {int cl_timeout; } ;
struct TYPE_3__ {int cl_count; } ;


 int VAR_0 ;
 struct nfs_server* FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 struct nfs_fattr* FUNC_2 () ;
 struct nfs_server* FUNC_3 () ;
 int FUNC_4 (struct nfs_fattr*) ;
 int FUNC_5 (struct nfs_server*) ;
 int FUNC_6 (struct nfs_server*,int ,int ) ;
 int FUNC_7 (struct nfs_server*,struct nfs_fh*,struct nfs_fattr*) ;
 int FUNC_8 (struct nfs_server*,struct nfs_server*) ;
 int FUNC_9 (struct nfs_server*) ;
 int FUNC_10 (struct nfs_server*) ;
 int FUNC_11 (int *) ;

struct nfs_server *FUNC_12(struct nfs_server *VAR_3,
        struct nfs_fh *VAR_4,
        struct nfs_fattr *VAR_5,
        rpc_authflavor_t VAR_6)
{
 struct nfs_server *VAR_7;
 struct nfs_fattr *VAR_8;
 int VAR_9;

 VAR_7 = FUNC_3();
 if (!VAR_7)
  return FUNC_0(-VAR_0);

 VAR_7->cred = FUNC_1(VAR_3->cred);

 VAR_9 = -VAR_0;
 VAR_8 = FUNC_2();
 if (VAR_8 == ((void*)0))
  goto out_free_server;


 VAR_7->nfs_client = VAR_3->nfs_client;
 VAR_7->destroy = VAR_3->destroy;
 FUNC_11(&VAR_7->nfs_client->cl_count);
 FUNC_8(VAR_7, VAR_3);

 VAR_7->fsid = VAR_5->fsid;

 VAR_9 = FUNC_6(VAR_7,
   VAR_3->client->cl_timeout,
   VAR_6);
 if (VAR_9 < 0)
  goto out_free_server;


 VAR_9 = FUNC_7(VAR_7, VAR_4, VAR_8);
 if (VAR_9 < 0)
  goto out_free_server;

 if (VAR_7->namelen == 0 || VAR_7->namelen > VAR_1)
  VAR_7->namelen = VAR_1;

 VAR_9 = FUNC_10(VAR_7);
 if (VAR_9 < 0)
  goto out_free_server;

 FUNC_9(VAR_7);
 VAR_7->mount_time = VAR_2;

 FUNC_4(VAR_8);
 return VAR_7;

out_free_server:
 FUNC_4(VAR_8);
 FUNC_5(VAR_7);
 return FUNC_0(VAR_9);
}
