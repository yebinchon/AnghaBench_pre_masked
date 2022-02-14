
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nfsd4_open {scalar_t__ op_odstate; TYPE_2__* op_stp; scalar_t__ op_file; TYPE_1__* op_openowner; } ;
struct nfsd4_compound_state {int dummy; } ;
struct nfs4_stateowner {int dummy; } ;
struct TYPE_4__ {int st_stid; } ;
struct TYPE_3__ {struct nfs4_stateowner oo_owner; } ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (struct nfs4_stateowner*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct nfsd4_compound_state*,struct nfs4_stateowner*) ;
 int VAR_1 ;

void FUNC_4(struct nfsd4_compound_state *VAR_2,
         struct nfsd4_open *VAR_3)
{
 if (VAR_3->op_openowner) {
  struct nfs4_stateowner *VAR_4 = &VAR_3->op_openowner->oo_owner;

  FUNC_3(VAR_2, VAR_4);
  FUNC_1(VAR_4);
 }
 if (VAR_3->op_file)
  FUNC_0(VAR_0, VAR_3->op_file);
 if (VAR_3->op_stp)
  FUNC_2(&VAR_3->op_stp->st_stid);
 if (VAR_3->op_odstate)
  FUNC_0(VAR_1, VAR_3->op_odstate);
}
