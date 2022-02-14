
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nfs_rpc_ops {struct nfs_client* (* alloc_client ) (struct nfs_client_initdata const*) ;struct nfs_client* (* init_client ) (struct nfs_client*,struct nfs_client_initdata const*) ;} ;
struct nfs_net {int nfs_client_lock; int nfs_client_list; } ;
struct nfs_client_initdata {int init_flags; int * hostname; TYPE_1__* nfs_mod; int net; } ;
struct nfs_client {int cl_flags; int cl_share_link; TYPE_2__* rpc_ops; } ;
struct TYPE_4__ {int (* free_client ) (struct nfs_client*) ;} ;
struct TYPE_3__ {struct nfs_rpc_ops* rpc_ops; } ;


 scalar_t__ FUNC_0 (struct nfs_client*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int *) ;
 struct nfs_net* FUNC_3 (int ,int ) ;
 struct nfs_client* FUNC_4 (struct nfs_client_initdata const*,struct nfs_client*) ;
 struct nfs_client* FUNC_5 (struct nfs_client_initdata const*) ;
 int VAR_0 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct nfs_client*) ;
 struct nfs_client* FUNC_9 (struct nfs_client*,struct nfs_client_initdata const*) ;
 struct nfs_client* FUNC_10 (struct nfs_client_initdata const*) ;

struct nfs_client *FUNC_11(const struct nfs_client_initdata *VAR_1)
{
 struct nfs_client *VAR_2, *VAR_3 = ((void*)0);
 struct nfs_net *VAR_4 = FUNC_3(VAR_1->net, VAR_0);
 const struct nfs_rpc_ops *VAR_5 = VAR_1->nfs_mod->rpc_ops;

 if (VAR_1->hostname == ((void*)0)) {
  FUNC_1(1);
  return ((void*)0);
 }


 do {
  FUNC_6(&VAR_4->nfs_client_lock);

  VAR_2 = FUNC_5(VAR_1);
  if (VAR_2) {
   FUNC_7(&VAR_4->nfs_client_lock);
   if (VAR_3)
    VAR_3->rpc_ops->free_client(VAR_3);
   if (FUNC_0(VAR_2))
    return VAR_2;
   return FUNC_4(VAR_1, VAR_2);
  }
  if (VAR_3) {
   FUNC_2(&VAR_3->cl_share_link,
     &VAR_4->nfs_client_list);
   FUNC_7(&VAR_4->nfs_client_lock);
   VAR_3->cl_flags = VAR_1->init_flags;
   return VAR_5->init_client(VAR_3, VAR_1);
  }

  FUNC_7(&VAR_4->nfs_client_lock);

  VAR_3 = VAR_5->alloc_client(VAR_1);
 } while (!FUNC_0(VAR_3));

 return VAR_3;
}
