
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tc_red_qopt_offload {int xstats; int handle; } ;
struct TYPE_4__ {TYPE_1__* band; } ;
struct nfp_qdisc {TYPE_2__ red; int offloaded; } ;
struct nfp_abm_link {int dummy; } ;
struct TYPE_3__ {int xstats; int prev_xstats; } ;


 int VAR_0 ;
 struct nfp_qdisc* FUNC_0 (struct nfp_abm_link*,int ) ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (struct nfp_abm_link*) ;

__attribute__((used)) static int
FUNC_3(struct nfp_abm_link *VAR_1, struct tc_red_qopt_offload *VAR_2)
{
 struct nfp_qdisc *VAR_3;

 FUNC_2(VAR_1);

 VAR_3 = FUNC_0(VAR_1, VAR_2->handle);
 if (!VAR_3 || !VAR_3->offloaded)
  return -VAR_0;

 FUNC_1(&VAR_3->red.band[0].xstats,
        &VAR_3->red.band[0].prev_xstats,
        VAR_2->xstats);
 VAR_3->red.band[0].prev_xstats = VAR_3->red.band[0].xstats;
 return 0;
}
