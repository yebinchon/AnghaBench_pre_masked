
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int so_id; int so_clid; } ;
struct TYPE_4__ {TYPE_1__ si_opaque; } ;
struct nfs4_stid {void (* sc_free ) (struct nfs4_stid*) ;int sc_lock; int sc_count; TYPE_2__ sc_stateid; struct nfs4_client* sc_client; } ;
struct nfs4_client {int cl_clientid; int cl_lock; int cl_stateids; } ;
struct kmem_cache {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct nfs4_stid*,int,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (struct kmem_cache*,struct nfs4_stid*) ;
 struct nfs4_stid* FUNC_4 (struct kmem_cache*,int ) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

struct nfs4_stid *FUNC_9(struct nfs4_client *VAR_2, struct kmem_cache *VAR_3,
      void (*VAR_4)(struct nfs4_stid *))
{
 struct nfs4_stid *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_4(VAR_3, VAR_0);
 if (!VAR_5)
  return ((void*)0);

 FUNC_1(VAR_0);
 FUNC_6(&VAR_2->cl_lock);

 VAR_6 = FUNC_0(&VAR_2->cl_stateids, VAR_5, 1, 0, VAR_1);
 FUNC_8(&VAR_2->cl_lock);
 FUNC_2();
 if (VAR_6 < 0)
  goto out_free;

 VAR_5->sc_free = VAR_4;
 VAR_5->sc_client = VAR_2;
 VAR_5->sc_stateid.si_opaque.so_id = VAR_6;
 VAR_5->sc_stateid.si_opaque.so_clid = VAR_2->cl_clientid;

 FUNC_5(&VAR_5->sc_count, 1);
 FUNC_7(&VAR_5->sc_lock);
 return VAR_5;
out_free:
 FUNC_3(VAR_3, VAR_5);
 return ((void*)0);
}
