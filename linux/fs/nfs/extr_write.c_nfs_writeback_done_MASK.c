
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct rpc_task {scalar_t__ tk_status; } ;
struct TYPE_10__ {scalar_t__ stable; int offset; } ;
struct TYPE_9__ {TYPE_4__* verf; int count; } ;
struct nfs_pgio_header {TYPE_3__ args; TYPE_2__ res; } ;
struct inode {int i_lock; } ;
struct TYPE_14__ {int cache_validity; } ;
struct TYPE_13__ {int (* write_done ) (struct rpc_task*,struct nfs_pgio_header*) ;} ;
struct TYPE_12__ {TYPE_1__* nfs_client; } ;
struct TYPE_11__ {scalar_t__ committed; } ;
struct TYPE_8__ {int cl_hostname; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_7__* FUNC_0 (struct inode*) ;
 int VAR_2 ;
 TYPE_6__* FUNC_1 (struct inode*) ;
 TYPE_5__* FUNC_2 (struct inode*) ;
 int FUNC_3 (char*,int ,scalar_t__,scalar_t__) ;
 int VAR_3 ;
 int FUNC_4 (struct inode*,int ,int ) ;
 scalar_t__ FUNC_5 (struct inode*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct rpc_task*,struct nfs_pgio_header*) ;
 scalar_t__ FUNC_9 (unsigned long,int) ;
 int FUNC_10 (struct inode*,scalar_t__,int ,TYPE_4__*) ;

__attribute__((used)) static int FUNC_11(struct rpc_task *VAR_4,
         struct nfs_pgio_header *VAR_5,
         struct inode *VAR_6)
{
 int VAR_7;
 VAR_7 = FUNC_1(VAR_6)->write_done(VAR_4, VAR_5);
 if (VAR_7 != 0)
  return VAR_7;

 FUNC_4(VAR_6, VAR_1, VAR_5->res.count);
 FUNC_10(VAR_6, VAR_4->tk_status,
     VAR_5->args.offset, VAR_5->res.verf);

 if (VAR_5->res.verf->committed < VAR_5->args.stable &&
     VAR_4->tk_status >= 0) {
  static unsigned long VAR_8;


  if (FUNC_9(VAR_8, VAR_3)) {
   FUNC_3("NFS:       faulty NFS server %s:"
    " (committed = %d) != (stable = %d)\n",
    FUNC_2(VAR_6)->nfs_client->cl_hostname,
    VAR_5->res.verf->committed, VAR_5->args.stable);
   VAR_8 = VAR_3 + 300 * VAR_0;
  }
 }


 if (FUNC_5(VAR_6)) {
  FUNC_6(&VAR_6->i_lock);
  FUNC_0(VAR_6)->cache_validity |= VAR_2;
  FUNC_7(&VAR_6->i_lock);
 }
 return 0;
}
