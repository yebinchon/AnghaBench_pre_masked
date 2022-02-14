
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u32 ;
struct super_block {struct nfs_server* s_fs_info; } ;
struct nfs_server {int flags; unsigned int acregmin; unsigned int acregmax; unsigned int acdirmin; unsigned int acdirmax; TYPE_6__* nfs_client; int port; TYPE_4__* client; int wsize; int rsize; } ;
struct TYPE_15__ {int addrlen; int address; int port; } ;
struct nfs_parsed_mount_data {int flags; unsigned int acregmin; unsigned int acregmax; unsigned int acdirmin; unsigned int acdirmax; unsigned int timeo; int version; int lsm_opts; TYPE_7__ nfs_server; int net; int minorversion; int selected_flavor; int retrans; int wsize; int rsize; } ;
struct nfs_mount_data {int version; } ;
struct nfs4_mount_data {int version; } ;
struct TYPE_16__ {TYPE_5__* nsproxy; } ;
struct TYPE_14__ {int cl_addr; int cl_minorversion; int cl_addrlen; TYPE_1__* rpc_ops; } ;
struct TYPE_13__ {int net_ns; } ;
struct TYPE_12__ {TYPE_3__* cl_timeout; TYPE_2__* cl_auth; } ;
struct TYPE_11__ {unsigned int to_initval; int to_retries; } ;
struct TYPE_10__ {int au_flavor; } ;
struct TYPE_9__ {int version; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_8__* VAR_5 ;
 int FUNC_0 (int *,int *,int ) ;
 struct nfs_parsed_mount_data* FUNC_1 () ;
 int FUNC_2 (struct nfs_server*,struct nfs_parsed_mount_data*) ;
 int FUNC_3 (struct nfs_parsed_mount_data*) ;
 int FUNC_4 (char*,struct nfs_parsed_mount_data*) ;
 int FUNC_5 (struct super_block*,int ) ;
 int FUNC_6 (struct super_block*) ;

int
FUNC_7(struct super_block *VAR_6, int *VAR_7, char *VAR_8)
{
 int VAR_9;
 struct nfs_server *VAR_10 = VAR_6->s_fs_info;
 struct nfs_parsed_mount_data *VAR_11;
 struct nfs_mount_data *VAR_12 = (struct nfs_mount_data *)VAR_8;
 struct nfs4_mount_data *VAR_13 = (struct nfs4_mount_data *)VAR_8;
 u32 VAR_14 = VAR_10->nfs_client->rpc_ops->version;

 FUNC_6(VAR_6);







 if ((VAR_14 == 4 && (!VAR_13 || VAR_13->version == 1)) ||
     (VAR_14 <= 3 && (!VAR_12 || (VAR_12->version >= 1 &&
        VAR_12->version <= 6))))
  return 0;

 VAR_11 = FUNC_1();
 if (VAR_11 == ((void*)0))
  return -VAR_1;


 VAR_11->flags = VAR_10->flags;
 VAR_11->rsize = VAR_10->rsize;
 VAR_11->wsize = VAR_10->wsize;
 VAR_11->retrans = VAR_10->client->cl_timeout->to_retries;
 VAR_11->selected_flavor = VAR_10->client->cl_auth->au_flavor;
 VAR_11->acregmin = VAR_10->acregmin / VAR_2;
 VAR_11->acregmax = VAR_10->acregmax / VAR_2;
 VAR_11->acdirmin = VAR_10->acdirmin / VAR_2;
 VAR_11->acdirmax = VAR_10->acdirmax / VAR_2;
 VAR_11->timeo = 10U * VAR_10->client->cl_timeout->to_initval / VAR_2;
 VAR_11->nfs_server.port = VAR_10->port;
 VAR_11->nfs_server.addrlen = VAR_10->nfs_client->cl_addrlen;
 VAR_11->version = VAR_14;
 VAR_11->minorversion = VAR_10->nfs_client->cl_minorversion;
 VAR_11->net = VAR_5->nsproxy->net_ns;
 FUNC_0(&VAR_11->nfs_server.address, &VAR_10->nfs_client->cl_addr,
  VAR_11->nfs_server.addrlen);


 VAR_9 = -VAR_0;
 if (!FUNC_4((char *)VAR_12, VAR_11))
  goto out;







 if (VAR_11->flags & VAR_3)
  *VAR_7 |= VAR_4;


 VAR_9 = FUNC_2(VAR_10, VAR_11);
 if (!VAR_9)
  VAR_9 = FUNC_5(VAR_6, VAR_11->lsm_opts);
out:
 FUNC_3(VAR_11);
 return VAR_9;
}
