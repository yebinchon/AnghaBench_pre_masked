
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct qstr {int dummy; } ;
struct nfs_server {int dummy; } ;
struct TYPE_6__ {int * fattr; int label; int * fh; struct nfs_server* server; } ;
struct TYPE_5__ {int umask; int bitmask; int ftype; struct iattr* attrs; struct qstr const* name; struct nfs_server* server; int dir_fh; } ;
struct TYPE_4__ {TYPE_3__* rpc_resp; TYPE_2__* rpc_argp; int * rpc_proc; } ;
struct nfs4_createdata {TYPE_3__ res; int label; int fattr; int fh; TYPE_2__ arg; TYPE_1__ msg; } ;
struct inode {int dummy; } ;
struct iattr {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 size_t VAR_1 ;
 int FUNC_1 (struct inode*) ;
 struct nfs_server* FUNC_2 (struct inode*) ;
 int FUNC_3 () ;
 int FUNC_4 (struct nfs4_createdata*) ;
 struct nfs4_createdata* FUNC_5 (int,int ) ;
 int FUNC_6 (struct nfs_server*,int ) ;
 int FUNC_7 (struct nfs_server*,int ) ;
 int * VAR_2 ;
 int FUNC_8 (int *) ;

__attribute__((used)) static struct nfs4_createdata *FUNC_9(struct inode *VAR_3,
  const struct qstr *VAR_4, struct iattr *VAR_5, u32 VAR_6)
{
 struct nfs4_createdata *VAR_7;

 VAR_7 = FUNC_5(sizeof(*VAR_7), VAR_0);
 if (VAR_7 != ((void*)0)) {
  struct nfs_server *VAR_8 = FUNC_2(VAR_3);

  VAR_7->label = FUNC_7(VAR_8, VAR_0);
  if (FUNC_0(VAR_7->label))
   goto out_free;

  VAR_7->msg.rpc_proc = &VAR_2[VAR_1];
  VAR_7->msg.rpc_argp = &VAR_7->arg;
  VAR_7->msg.rpc_resp = &VAR_7->res;
  VAR_7->arg.dir_fh = FUNC_1(VAR_3);
  VAR_7->arg.server = VAR_8;
  VAR_7->arg.name = VAR_4;
  VAR_7->arg.attrs = VAR_5;
  VAR_7->arg.ftype = VAR_6;
  VAR_7->arg.bitmask = FUNC_6(VAR_8, VAR_7->label);
  VAR_7->arg.umask = FUNC_3();
  VAR_7->res.server = VAR_8;
  VAR_7->res.fh = &VAR_7->fh;
  VAR_7->res.fattr = &VAR_7->fattr;
  VAR_7->res.label = VAR_7->label;
  FUNC_8(VAR_7->res.fattr);
 }
 return VAR_7;
out_free:
 FUNC_4(VAR_7);
 return ((void*)0);
}
