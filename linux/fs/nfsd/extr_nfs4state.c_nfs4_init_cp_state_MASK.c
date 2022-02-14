
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nfsd_net {int s2s_cp_cl_id; int boot_time; int s2s_cp_lock; int s2s_cp_stateids; } ;
struct TYPE_4__ {int cl_id; int cl_boot; } ;
struct TYPE_5__ {int so_id; TYPE_1__ so_clid; } ;
struct TYPE_6__ {TYPE_2__ si_opaque; } ;
struct nfsd4_copy {TYPE_3__ cp_stateid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct nfsd4_copy*,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct nfsd_net *VAR_2, struct nfsd4_copy *VAR_3)
{
 int VAR_4;

 FUNC_1(VAR_0);
 FUNC_3(&VAR_2->s2s_cp_lock);
 VAR_4 = FUNC_0(&VAR_2->s2s_cp_stateids, VAR_3, 0, 0, VAR_1);
 FUNC_4(&VAR_2->s2s_cp_lock);
 FUNC_2();
 if (VAR_4 < 0)
  return 0;
 VAR_3->cp_stateid.si_opaque.so_id = VAR_4;
 VAR_3->cp_stateid.si_opaque.so_clid.cl_boot = VAR_2->boot_time;
 VAR_3->cp_stateid.si_opaque.so_clid.cl_id = VAR_2->s2s_cp_cl_id;
 return 1;
}
