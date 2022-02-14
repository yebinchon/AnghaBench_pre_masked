
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nfsd_net {int client_lock; } ;
struct TYPE_4__ {TYPE_1__* so_client; } ;
struct nfs4_openowner {struct nfs4_ol_stateid* oo_last_closed_stid; int oo_close_lru; TYPE_2__ oo_owner; } ;
struct nfs4_ol_stateid {int st_stid; } ;
struct TYPE_3__ {int net; } ;


 int FUNC_0 (int *) ;
 struct nfsd_net* FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct nfs4_openowner *VAR_1)
{
 struct nfsd_net *VAR_2 = FUNC_1(VAR_1->oo_owner.so_client->net,
       VAR_0);
 struct nfs4_ol_stateid *VAR_3;

 FUNC_3(&VAR_2->client_lock);
 VAR_3 = VAR_1->oo_last_closed_stid;
 if (VAR_3) {
  FUNC_0(&VAR_1->oo_close_lru);
  VAR_1->oo_last_closed_stid = ((void*)0);
 }
 FUNC_4(&VAR_2->client_lock);
 if (VAR_3)
  FUNC_2(&VAR_3->st_stid);
}
