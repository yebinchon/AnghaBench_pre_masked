
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct tc_qopt_offload_stats {int qstats; int bstats; } ;
struct TYPE_4__ {TYPE_1__* band; } ;
struct nfp_qdisc {scalar_t__ offloaded; TYPE_2__ red; } ;
struct nfp_abm_link {int dummy; } ;
struct TYPE_3__ {int stats; int prev_stats; } ;


 int VAR_0 ;
 struct nfp_qdisc* FUNC_0 (struct nfp_abm_link*,int ) ;
 int FUNC_1 (int *,int *,int ,int ) ;
 int FUNC_2 (struct nfp_abm_link*) ;

__attribute__((used)) static int
FUNC_3(struct nfp_abm_link *VAR_1, u32 VAR_2,
    struct tc_qopt_offload_stats *VAR_3)
{
 struct nfp_qdisc *VAR_4;

 FUNC_2(VAR_1);

 VAR_4 = FUNC_0(VAR_1, VAR_2);
 if (!VAR_4)
  return -VAR_0;




 FUNC_1(&VAR_4->red.band[0].stats,
    &VAR_4->red.band[0].prev_stats,
    VAR_3->bstats, VAR_3->qstats);
 VAR_4->red.band[0].prev_stats = VAR_4->red.band[0].stats;

 return VAR_4->offloaded ? 0 : -VAR_0;
}
