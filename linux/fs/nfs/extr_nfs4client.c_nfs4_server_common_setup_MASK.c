
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ minor; scalar_t__ major; } ;
struct nfs_server {int flags; scalar_t__ namelen; int destroy; int mount_time; TYPE_4__ fsid; int caps; TYPE_3__* client; TYPE_5__* nfs_client; } ;
struct nfs_fh {int dummy; } ;
struct nfs_fattr {int dummy; } ;
struct TYPE_11__ {TYPE_1__* cl_mvops; } ;
struct TYPE_9__ {TYPE_2__* cl_auth; } ;
struct TYPE_8__ {scalar_t__ au_flavor; } ;
struct TYPE_7__ {int init_caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (char*,unsigned long long,unsigned long long) ;
 scalar_t__ FUNC_1 (TYPE_5__*) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (struct nfs_server*,struct nfs_fh*,int) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (struct nfs_server*) ;
 struct nfs_fattr* FUNC_5 () ;
 int FUNC_6 (struct nfs_fh*,char*) ;
 int FUNC_7 (struct nfs_fattr*) ;
 int FUNC_8 (struct nfs_server*,struct nfs_fh*,struct nfs_fattr*) ;
 int FUNC_9 (struct nfs_server*) ;

__attribute__((used)) static int FUNC_10(struct nfs_server *VAR_10,
  struct nfs_fh *VAR_11, bool VAR_12)
{
 struct nfs_fattr *VAR_13;
 int VAR_14;


 if (FUNC_1(VAR_10->nfs_client))
  return -VAR_1;

 VAR_13 = FUNC_5();
 if (VAR_13 == ((void*)0))
  return -VAR_0;


 VAR_14 = FUNC_3(VAR_10->nfs_client);
 if (VAR_14 < 0)
  goto out;


 VAR_10->caps |= VAR_10->nfs_client->cl_mvops->init_caps;
 if (VAR_10->flags & VAR_5)
   VAR_10->caps &= ~VAR_3;




 if (VAR_9 &&
   VAR_10->client->cl_auth->au_flavor == VAR_6)
  VAR_10->caps |= VAR_4;



 VAR_14 = FUNC_2(VAR_10, VAR_11, VAR_12);
 if (VAR_14 < 0)
  goto out;

 FUNC_0("Server FSID: %llx:%llx\n",
   (unsigned long long) VAR_10->fsid.major,
   (unsigned long long) VAR_10->fsid.minor);
 FUNC_6(VAR_11, "Pseudo-fs root FH");

 VAR_14 = FUNC_8(VAR_10, VAR_11, VAR_13);
 if (VAR_14 < 0)
  goto out;

 FUNC_4(VAR_10);

 if (VAR_10->namelen == 0 || VAR_10->namelen > VAR_2)
  VAR_10->namelen = VAR_2;

 FUNC_9(VAR_10);
 VAR_10->mount_time = VAR_7;
 VAR_10->destroy = VAR_8;
out:
 FUNC_7(VAR_13);
 return VAR_14;
}
