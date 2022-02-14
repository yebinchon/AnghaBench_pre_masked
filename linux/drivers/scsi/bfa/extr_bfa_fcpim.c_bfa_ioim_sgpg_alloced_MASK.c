
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bfa_ioim_s {int sgpg_q; int sgpg; TYPE_2__* iosp; int nsges; int nsgpgs; } ;
struct TYPE_3__ {int sgpg_q; } ;
struct TYPE_4__ {TYPE_1__ sgpg_wqe; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct bfa_ioim_s*,int ) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static void
FUNC_4(void *VAR_1)
{
 struct bfa_ioim_s *VAR_2 = VAR_1;

 VAR_2->nsgpgs = FUNC_0(VAR_2->nsges);
 FUNC_3(&VAR_2->iosp->sgpg_wqe.sgpg_q, &VAR_2->sgpg_q);
 VAR_2->sgpg = FUNC_1(&VAR_2->sgpg_q);
 FUNC_2(VAR_2, VAR_0);
}
