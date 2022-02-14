
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sc_count; int sc_type; struct nfs4_client* sc_client; } ;
struct nfs4_delegation {int dl_recall_lru; TYPE_1__ dl_stid; } ;
struct nfs4_client {int cl_lock; int cl_revoked; scalar_t__ cl_minorversion; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct nfs4_delegation*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct nfs4_delegation *VAR_1)
{
 struct nfs4_client *VAR_2 = VAR_1->dl_stid.sc_client;

 FUNC_0(!FUNC_3(&VAR_1->dl_recall_lru));

 if (VAR_2->cl_minorversion) {
  VAR_1->dl_stid.sc_type = VAR_0;
  FUNC_4(&VAR_1->dl_stid.sc_count);
  FUNC_5(&VAR_2->cl_lock);
  FUNC_2(&VAR_1->dl_recall_lru, &VAR_2->cl_revoked);
  FUNC_6(&VAR_2->cl_lock);
 }
 FUNC_1(VAR_1);
}
