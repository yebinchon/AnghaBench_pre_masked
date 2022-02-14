
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int so_id; } ;
struct TYPE_4__ {TYPE_1__ si_opaque; } ;
struct nfs4_stid {TYPE_2__ sc_stateid; int sc_count; struct nfs4_client* sc_client; } ;
struct nfs4_ol_stateid {int st_locks; struct nfs4_stid st_stid; } ;
struct nfs4_client {int cl_stateids; int cl_lock; } ;
struct list_head {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,struct list_head*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct nfs4_ol_stateid *VAR_1,
           struct list_head *VAR_2)
{
 struct nfs4_stid *VAR_3 = &VAR_1->st_stid;
 struct nfs4_client *VAR_4 = VAR_3->sc_client;

 FUNC_4(&VAR_4->cl_lock);

 FUNC_0(!FUNC_3(&VAR_1->st_locks));

 if (!FUNC_5(&VAR_3->sc_count)) {
  FUNC_6(&VAR_0);
  return;
 }

 FUNC_1(&VAR_4->cl_stateids, VAR_3->sc_stateid.si_opaque.so_id);
 FUNC_2(&VAR_1->st_locks, VAR_2);
}
