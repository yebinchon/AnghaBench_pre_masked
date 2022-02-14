
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct nfs_subversion {TYPE_3__* rpc_ops; } ;
struct TYPE_10__ {scalar_t__ minor; scalar_t__ major; } ;
struct nfs_server {scalar_t__ namelen; int mount_time; TYPE_5__ fsid; int caps; TYPE_2__* nfs_client; int cred; } ;
struct nfs_mount_info {int mntfh; TYPE_4__* parsed; } ;
struct nfs_fattr {int valid; int fsid; } ;
struct TYPE_9__ {int flags; } ;
struct TYPE_8__ {int (* getattr ) (struct nfs_server*,int ,struct nfs_fattr*,int *,int *) ;} ;
struct TYPE_7__ {TYPE_1__* rpc_ops; } ;
struct TYPE_6__ {int version; } ;


 int VAR_0 ;
 struct nfs_server* FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 () ;
 int FUNC_2 (char*,unsigned long long,...) ;
 int FUNC_3 (int ) ;
 int VAR_6 ;
 int FUNC_4 (TYPE_5__*,int *,int) ;
 struct nfs_fattr* FUNC_5 () ;
 struct nfs_server* FUNC_6 () ;
 int FUNC_7 (struct nfs_fattr*) ;
 int FUNC_8 (struct nfs_server*) ;
 int FUNC_9 (struct nfs_server*,TYPE_4__*,struct nfs_subversion*) ;
 int FUNC_10 (struct nfs_server*,int ,struct nfs_fattr*) ;
 int FUNC_11 (struct nfs_server*) ;
 int FUNC_12 (struct nfs_server*,int ,struct nfs_fattr*,int *,int *) ;

struct nfs_server *FUNC_13(struct nfs_mount_info *VAR_7,
         struct nfs_subversion *VAR_8)
{
 struct nfs_server *VAR_9;
 struct nfs_fattr *VAR_10;
 int VAR_11;

 VAR_9 = FUNC_6();
 if (!VAR_9)
  return FUNC_0(-VAR_0);

 VAR_9->cred = FUNC_3(FUNC_1());

 VAR_11 = -VAR_0;
 VAR_10 = FUNC_5();
 if (VAR_10 == ((void*)0))
  goto error;


 VAR_11 = FUNC_9(VAR_9, VAR_7->parsed, VAR_8);
 if (VAR_11 < 0)
  goto error;


 VAR_11 = FUNC_10(VAR_9, VAR_7->mntfh, VAR_10);
 if (VAR_11 < 0)
  goto error;
 if (VAR_9->nfs_client->rpc_ops->version == 3) {
  if (VAR_9->namelen == 0 || VAR_9->namelen > VAR_2)
   VAR_9->namelen = VAR_2;
  if (!(VAR_7->parsed->flags & VAR_5))
   VAR_9->caps |= VAR_4;
 } else {
  if (VAR_9->namelen == 0 || VAR_9->namelen > VAR_1)
   VAR_9->namelen = VAR_1;
 }

 if (!(VAR_10->valid & VAR_3)) {
  VAR_11 = VAR_8->rpc_ops->getattr(VAR_9, VAR_7->mntfh,
    VAR_10, ((void*)0), ((void*)0));
  if (VAR_11 < 0) {
   FUNC_2("nfs_create_server: getattr error = %d\n", -VAR_11);
   goto error;
  }
 }
 FUNC_4(&VAR_9->fsid, &VAR_10->fsid, sizeof(VAR_9->fsid));

 FUNC_2("Server FSID: %llx:%llx\n",
  (unsigned long long) VAR_9->fsid.major,
  (unsigned long long) VAR_9->fsid.minor);

 FUNC_11(VAR_9);
 VAR_9->mount_time = VAR_6;
 FUNC_7(VAR_10);
 return VAR_9;

error:
 FUNC_7(VAR_10);
 FUNC_8(VAR_9);
 return FUNC_0(VAR_11);
}
