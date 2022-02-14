
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct bnad {int dummy; } ;
struct TYPE_11__ {TYPE_4__* mdl; } ;
struct TYPE_12__ {TYPE_5__ mem_info; } ;
struct bna_res_info {TYPE_6__ res_u; } ;
struct bfa_pcidev {int dummy; } ;
struct TYPE_7__ {int lsb; int msb; } ;
struct TYPE_8__ {TYPE_1__ hw_stats_dma; struct bfi_enet_stats* hw_stats_kva; } ;
struct bna {int ethport; int enet; int ioceth; struct bfa_pcidev pcidev; TYPE_2__ stats; struct bnad* bnad; } ;
struct bfi_enet_stats {int dummy; } ;
struct TYPE_9__ {int lsb; int msb; } ;
struct TYPE_10__ {TYPE_3__ dma; scalar_t__ kva; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *,struct bna*) ;
 int FUNC_1 (int *,struct bna*) ;
 int FUNC_2 (int *,struct bna*,struct bna_res_info*) ;
 int FUNC_3 (struct bna*,struct bfa_pcidev*) ;

void
FUNC_4(struct bna *VAR_1, struct bnad *VAR_2,
  struct bfa_pcidev *VAR_3, struct bna_res_info *VAR_4)
{
 VAR_1->bnad = VAR_2;
 VAR_1->pcidev = *VAR_3;

 VAR_1->stats.hw_stats_kva = (struct bfi_enet_stats *)
  VAR_4[VAR_0].res_u.mem_info.mdl[0].kva;
 VAR_1->stats.hw_stats_dma.msb =
  VAR_4[VAR_0].res_u.mem_info.mdl[0].dma.msb;
 VAR_1->stats.hw_stats_dma.lsb =
  VAR_4[VAR_0].res_u.mem_info.mdl[0].dma.lsb;

 FUNC_3(VAR_1, &VAR_1->pcidev);


 FUNC_2(&VAR_1->ioceth, VAR_1, VAR_4);

 FUNC_0(&VAR_1->enet, VAR_1);
 FUNC_1(&VAR_1->ethport, VAR_1);
}
