
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nfsd_net {int s2s_cp_lock; int s2s_cp_stateids; } ;
struct TYPE_5__ {int so_id; } ;
struct TYPE_6__ {TYPE_2__ si_opaque; } ;
struct nfsd4_copy {TYPE_3__ cp_stateid; TYPE_1__* cp_clp; } ;
struct TYPE_4__ {int net; } ;


 int FUNC_0 (int *,int ) ;
 struct nfsd_net* FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct nfsd4_copy *VAR_1)
{
 struct nfsd_net *VAR_2;

 VAR_2 = FUNC_1(VAR_1->cp_clp->net, VAR_0);
 FUNC_2(&VAR_2->s2s_cp_lock);
 FUNC_0(&VAR_2->s2s_cp_stateids, VAR_1->cp_stateid.si_opaque.so_id);
 FUNC_3(&VAR_2->s2s_cp_lock);
}
