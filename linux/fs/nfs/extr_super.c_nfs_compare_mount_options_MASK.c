
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int s_flags; struct nfs_server* s_fs_info; } ;
struct rpc_clnt {TYPE_1__* cl_auth; } ;
struct nfs_server {scalar_t__ nfs_client; int flags; scalar_t__ wsize; scalar_t__ rsize; scalar_t__ acregmin; scalar_t__ acregmax; scalar_t__ acdirmin; scalar_t__ acdirmax; struct rpc_clnt* client; } ;
struct TYPE_2__ {scalar_t__ au_flavor; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(const struct super_block *VAR_2, const struct nfs_server *VAR_3, int VAR_4)
{
 const struct nfs_server *VAR_5 = VAR_2->s_fs_info;
 const struct rpc_clnt *VAR_6 = VAR_5->client;
 const struct rpc_clnt *VAR_7 = VAR_3->client;

 if ((VAR_2->s_flags & VAR_1) != (VAR_4 & VAR_1))
  goto Ebusy;
 if (VAR_5->nfs_client != VAR_3->nfs_client)
  goto Ebusy;
 if ((VAR_5->flags ^ VAR_3->flags) & VAR_0)
  goto Ebusy;
 if (VAR_5->wsize != VAR_3->wsize)
  goto Ebusy;
 if (VAR_5->rsize != VAR_3->rsize)
  goto Ebusy;
 if (VAR_5->acregmin != VAR_3->acregmin)
  goto Ebusy;
 if (VAR_5->acregmax != VAR_3->acregmax)
  goto Ebusy;
 if (VAR_5->acdirmin != VAR_3->acdirmin)
  goto Ebusy;
 if (VAR_5->acdirmax != VAR_3->acdirmax)
  goto Ebusy;
 if (VAR_6->cl_auth->au_flavor != VAR_7->cl_auth->au_flavor)
  goto Ebusy;
 return 1;
Ebusy:
 return 0;
}
