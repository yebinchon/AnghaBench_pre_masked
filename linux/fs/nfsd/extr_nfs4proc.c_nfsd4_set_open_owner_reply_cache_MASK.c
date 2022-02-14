
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct svc_fh {int fh_handle; } ;
struct nfsd4_open {TYPE_3__* op_openowner; } ;
struct nfsd4_compound_state {int dummy; } ;
struct TYPE_4__ {int rp_openfh; } ;
struct TYPE_5__ {TYPE_1__ so_replay; } ;
struct TYPE_6__ {TYPE_2__ oo_owner; } ;


 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (struct nfsd4_compound_state*) ;

__attribute__((used)) static void FUNC_2(struct nfsd4_compound_state *VAR_0, struct nfsd4_open *VAR_1, struct svc_fh *VAR_2)
{
 if (FUNC_1(VAR_0))
  return;
 FUNC_0(&VAR_1->op_openowner->oo_owner.so_replay.rp_openfh,
   &VAR_2->fh_handle);
}
