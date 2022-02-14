
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
struct nfs_server {int flags; scalar_t__ rsize; scalar_t__ wsize; unsigned int acregmin; unsigned int acregmax; unsigned int acdirmin; unsigned int acdirmax; int options; scalar_t__ port; TYPE_6__* nfs_client; TYPE_4__* client; } ;
struct TYPE_11__ {scalar_t__ port; scalar_t__ addrlen; int address; } ;
struct nfs_parsed_mount_data {int flags; scalar_t__ rsize; scalar_t__ wsize; scalar_t__ version; scalar_t__ minorversion; scalar_t__ retrans; unsigned int acregmin; unsigned int acregmax; unsigned int acdirmin; unsigned int acdirmax; unsigned int timeo; int options; TYPE_5__ nfs_server; int auth_info; } ;
struct TYPE_12__ {scalar_t__ cl_minorversion; scalar_t__ cl_addrlen; int cl_addr; TYPE_1__* rpc_ops; } ;
struct TYPE_10__ {TYPE_3__* cl_timeout; TYPE_2__* cl_auth; } ;
struct TYPE_9__ {scalar_t__ to_retries; unsigned int to_initval; } ;
struct TYPE_8__ {int au_flavor; } ;
struct TYPE_7__ {scalar_t__ version; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct sockaddr*,struct sockaddr*) ;

__attribute__((used)) static int
FUNC_2(struct nfs_server *VAR_4,
    struct nfs_parsed_mount_data *VAR_5)
{
 if ((VAR_5->flags ^ VAR_4->flags) & VAR_3 ||
     VAR_5->rsize != VAR_4->rsize ||
     VAR_5->wsize != VAR_4->wsize ||
     VAR_5->version != VAR_4->nfs_client->rpc_ops->version ||
     VAR_5->minorversion != VAR_4->nfs_client->cl_minorversion ||
     VAR_5->retrans != VAR_4->client->cl_timeout->to_retries ||
     !FUNC_0(&VAR_5->auth_info, VAR_4->client->cl_auth->au_flavor) ||
     VAR_5->acregmin != VAR_4->acregmin / VAR_1 ||
     VAR_5->acregmax != VAR_4->acregmax / VAR_1 ||
     VAR_5->acdirmin != VAR_4->acdirmin / VAR_1 ||
     VAR_5->acdirmax != VAR_4->acdirmax / VAR_1 ||
     VAR_5->timeo != (10U * VAR_4->client->cl_timeout->to_initval / VAR_1) ||
     (VAR_5->options & VAR_2) != (VAR_4->options & VAR_2) ||
     VAR_5->nfs_server.port != VAR_4->port ||
     VAR_5->nfs_server.addrlen != VAR_4->nfs_client->cl_addrlen ||
     !FUNC_1((struct sockaddr *)&VAR_5->nfs_server.address,
     (struct sockaddr *)&VAR_4->nfs_client->cl_addr))
  return -VAR_0;

 return 0;
}
