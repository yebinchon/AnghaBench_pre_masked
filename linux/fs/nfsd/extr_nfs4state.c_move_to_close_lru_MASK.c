
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nfsd_net {int client_lock; int close_lru; } ;
struct nfs4_openowner {int oo_time; int oo_close_lru; struct nfs4_ol_stateid* oo_last_closed_stid; } ;
struct TYPE_4__ {int * sc_file; int sc_count; TYPE_1__* sc_client; } ;
struct nfs4_ol_stateid {TYPE_2__ st_stid; int st_stateowner; } ;
struct net {int dummy; } ;
struct TYPE_3__ {int net; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct nfs4_openowner*) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int *) ;
 struct nfsd_net* FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_1 ;
 struct nfs4_openowner* FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct nfs4_ol_stateid*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,int) ;

__attribute__((used)) static void
FUNC_12(struct nfs4_ol_stateid *VAR_2, struct net *VAR_3)
{
 struct nfs4_ol_stateid *VAR_4;
 struct nfs4_openowner *VAR_5 = FUNC_5(VAR_2->st_stateowner);
 struct nfsd_net *VAR_6 = FUNC_3(VAR_2->st_stid.sc_client->net,
      VAR_1);

 FUNC_0("NFSD: move_to_close_lru nfs4_openowner %p\n", VAR_5);
 FUNC_11(VAR_0, FUNC_7(&VAR_2->st_stid.sc_count) == 2);

 FUNC_8(VAR_2);
 if (VAR_2->st_stid.sc_file) {
  FUNC_6(VAR_2->st_stid.sc_file);
  VAR_2->st_stid.sc_file = ((void*)0);
 }

 FUNC_9(&VAR_6->client_lock);
 VAR_4 = VAR_5->oo_last_closed_stid;
 VAR_5->oo_last_closed_stid = VAR_2;
 FUNC_2(&VAR_5->oo_close_lru, &VAR_6->close_lru);
 VAR_5->oo_time = FUNC_1();
 FUNC_10(&VAR_6->client_lock);
 if (VAR_4)
  FUNC_4(&VAR_4->st_stid);
}
