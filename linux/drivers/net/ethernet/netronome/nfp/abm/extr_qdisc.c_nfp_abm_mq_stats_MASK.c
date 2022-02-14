
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct tc_qopt_offload_stats {int qstats; int bstats; } ;
struct TYPE_6__ {int prev_stats; int stats; } ;
struct TYPE_5__ {unsigned int num_bands; TYPE_1__* band; } ;
struct nfp_qdisc {unsigned int num_children; scalar_t__ offloaded; TYPE_3__ mq; TYPE_2__ red; struct nfp_qdisc** children; } ;
struct nfp_abm_link {int dummy; } ;
struct TYPE_4__ {int prev_stats; int stats; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (struct nfp_qdisc*,unsigned int) ;
 struct nfp_qdisc* FUNC_2 (struct nfp_abm_link*,int ) ;
 int FUNC_3 (struct nfp_qdisc*) ;
 int FUNC_4 (int *,int *,int ,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (struct nfp_abm_link*) ;

__attribute__((used)) static int
FUNC_7(struct nfp_abm_link *VAR_1, u32 VAR_2,
   struct tc_qopt_offload_stats *VAR_3)
{
 struct nfp_qdisc *VAR_4, *VAR_5;
 unsigned int VAR_6, VAR_7;

 VAR_4 = FUNC_2(VAR_1, VAR_2);
 if (!VAR_4)
  return -VAR_0;

 FUNC_6(VAR_1);




 FUNC_0(&VAR_4->mq.stats, 0, sizeof(VAR_4->mq.stats));
 FUNC_0(&VAR_4->mq.prev_stats, 0, sizeof(VAR_4->mq.prev_stats));

 for (VAR_6 = 0; VAR_6 < VAR_4->num_children; VAR_6++) {
  if (!FUNC_1(VAR_4, VAR_6))
   continue;

  if (!FUNC_3(VAR_4->children[VAR_6]))
   continue;
  VAR_5 = VAR_4->children[VAR_6];

  for (VAR_7 = 0; VAR_7 < VAR_5->red.num_bands; VAR_7++) {
   FUNC_5(&VAR_4->mq.stats,
      &VAR_5->red.band[VAR_7].stats);
   FUNC_5(&VAR_4->mq.prev_stats,
      &VAR_5->red.band[VAR_7].prev_stats);
  }
 }

 FUNC_4(&VAR_4->mq.stats, &VAR_4->mq.prev_stats,
    VAR_3->bstats, VAR_3->qstats);

 return VAR_4->offloaded ? 0 : -VAR_0;
}
