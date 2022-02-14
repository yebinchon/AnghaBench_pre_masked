
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nfsd_net {int del_recall_lru; } ;
struct nfsd4_callback {int dummy; } ;
struct TYPE_6__ {TYPE_2__* sc_file; TYPE_1__* sc_client; } ;
struct nfs4_delegation {scalar_t__ dl_time; int dl_recall_lru; TYPE_3__ dl_stid; } ;
struct TYPE_5__ {int fi_fhandle; } ;
struct TYPE_4__ {int net; } ;


 int FUNC_0 (int *) ;
 struct nfs4_delegation* FUNC_1 (struct nfsd4_callback*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int *,int *) ;
 struct nfsd_net* FUNC_4 (int ,int ) ;
 int VAR_0 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_7(struct nfsd4_callback *VAR_2)
{
 struct nfs4_delegation *VAR_3 = FUNC_1(VAR_2);
 struct nfsd_net *VAR_4 = FUNC_4(VAR_3->dl_stid.sc_client->net,
       VAR_0);

 FUNC_0(&VAR_3->dl_stid.sc_file->fi_fhandle);
 FUNC_5(&VAR_1);
 if (VAR_3->dl_time == 0) {
  VAR_3->dl_time = FUNC_2();
  FUNC_3(&VAR_3->dl_recall_lru, &VAR_4->del_recall_lru);
 }
 FUNC_6(&VAR_1);
}
