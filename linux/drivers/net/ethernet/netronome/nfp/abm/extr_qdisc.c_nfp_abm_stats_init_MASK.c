
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int num_bands; TYPE_2__* band; } ;
struct nfp_qdisc {TYPE_1__ red; } ;
struct nfp_abm_link {int dummy; } ;
struct TYPE_4__ {int prev_xstats; int prev_stats; } ;


 int FUNC_0 (struct nfp_abm_link*,unsigned int,unsigned int,int *,int *) ;

__attribute__((used)) static int
FUNC_1(struct nfp_abm_link *VAR_0, struct nfp_qdisc *VAR_1,
     unsigned int VAR_2)
{
 unsigned int VAR_3;
 int VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_1->red.num_bands; VAR_3++) {
  VAR_4 = FUNC_0(VAR_0, VAR_3, VAR_2,
        &VAR_1->red.band[VAR_3].prev_stats,
        &VAR_1->red.band[VAR_3].prev_xstats);
  if (VAR_4)
   return VAR_4;
 }

 return 0;
}
