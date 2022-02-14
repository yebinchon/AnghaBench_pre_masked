
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct bna_ucam_mod {struct bna* bna; int del_q; struct bna_mac* ucmac; int free_q; } ;
struct TYPE_7__ {TYPE_1__* mdl; } ;
struct TYPE_8__ {TYPE_2__ mem_info; } ;
struct bna_res_info {TYPE_3__ res_u; } ;
struct bna_mac {int qe; } ;
struct TYPE_9__ {int num_ucmac; } ;
struct TYPE_10__ {TYPE_4__ attr; } ;
struct bna {TYPE_5__ ioceth; } ;
struct TYPE_6__ {scalar_t__ kva; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void
FUNC_2(struct bna_ucam_mod *VAR_1, struct bna *VAR_2,
    struct bna_res_info *VAR_3)
{
 int VAR_4;

 VAR_1->ucmac = (struct bna_mac *)
 VAR_3[VAR_0].res_u.mem_info.mdl[0].kva;

 FUNC_0(&VAR_1->free_q);
 for (VAR_4 = 0; VAR_4 < VAR_2->ioceth.attr.num_ucmac; VAR_4++)
  FUNC_1(&VAR_1->ucmac[VAR_4].qe, &VAR_1->free_q);


 FUNC_0(&VAR_1->del_q);
 for (; VAR_4 < (VAR_2->ioceth.attr.num_ucmac * 2); VAR_4++)
  FUNC_1(&VAR_1->ucmac[VAR_4].qe, &VAR_1->del_q);

 VAR_1->bna = VAR_2;
}
