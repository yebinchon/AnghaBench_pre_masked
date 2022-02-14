
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int so_id; } ;
struct TYPE_4__ {TYPE_1__ si_opaque; } ;
struct nfs4_stid {int (* sc_free ) (struct nfs4_stid*) ;TYPE_2__ sc_stateid; int sc_count; struct nfs4_client* sc_client; struct nfs4_file* sc_file; } ;
struct nfs4_file {int dummy; } ;
struct nfs4_client {int cl_lock; int cl_stateids; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nfs4_file*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct nfs4_stid*) ;
 int FUNC_6 (int *) ;

void
FUNC_7(struct nfs4_stid *VAR_1)
{
 struct nfs4_file *VAR_2 = VAR_1->sc_file;
 struct nfs4_client *VAR_3 = VAR_1->sc_client;

 FUNC_1(&VAR_3->cl_lock);

 if (!FUNC_3(&VAR_1->sc_count, &VAR_3->cl_lock)) {
  FUNC_6(&VAR_0);
  return;
 }
 FUNC_0(&VAR_3->cl_stateids, VAR_1->sc_stateid.si_opaque.so_id);
 FUNC_4(&VAR_3->cl_lock);
 VAR_1->sc_free(VAR_1);
 if (VAR_2)
  FUNC_2(VAR_2);
}
