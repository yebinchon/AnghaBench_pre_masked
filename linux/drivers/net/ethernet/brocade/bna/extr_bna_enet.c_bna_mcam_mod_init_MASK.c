
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* mdl; } ;
struct TYPE_8__ {TYPE_2__ mem_info; } ;
struct bna_res_info {TYPE_3__ res_u; } ;
struct bna_mcam_mod {struct bna* bna; int del_q; struct bna_mac* mcmac; int free_handle_q; struct bna_mcam_handle* mchandle; int free_q; } ;
struct bna_mcam_handle {int qe; } ;
struct bna_mac {int qe; } ;
struct TYPE_9__ {int num_mcmac; } ;
struct TYPE_10__ {TYPE_4__ attr; } ;
struct bna {TYPE_5__ ioceth; } ;
struct TYPE_6__ {scalar_t__ kva; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void
FUNC_2(struct bna_mcam_mod *VAR_2, struct bna *VAR_3,
    struct bna_res_info *VAR_4)
{
 int VAR_5;

 VAR_2->mcmac = (struct bna_mac *)
 VAR_4[VAR_1].res_u.mem_info.mdl[0].kva;

 FUNC_0(&VAR_2->free_q);
 for (VAR_5 = 0; VAR_5 < VAR_3->ioceth.attr.num_mcmac; VAR_5++)
  FUNC_1(&VAR_2->mcmac[VAR_5].qe, &VAR_2->free_q);

 VAR_2->mchandle = (struct bna_mcam_handle *)
 VAR_4[VAR_0].res_u.mem_info.mdl[0].kva;

 FUNC_0(&VAR_2->free_handle_q);
 for (VAR_5 = 0; VAR_5 < VAR_3->ioceth.attr.num_mcmac; VAR_5++)
  FUNC_1(&VAR_2->mchandle[VAR_5].qe,
         &VAR_2->free_handle_q);


 FUNC_0(&VAR_2->del_q);
 for (; VAR_5 < (VAR_3->ioceth.attr.num_mcmac * 2); VAR_5++)
  FUNC_1(&VAR_2->mcmac[VAR_5].qe, &VAR_2->del_q);

 VAR_2->bna = VAR_3;
}
