
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {unsigned int dp_cnt; TYPE_3__* tab; } ;
struct tc_gred_qopt_offload {TYPE_4__ set; int handle; int parent; } ;
struct TYPE_6__ {unsigned int num_bands; TYPE_1__* band; } ;
struct nfp_qdisc {scalar_t__ use_cnt; TYPE_2__ red; scalar_t__ params_ok; } ;
struct nfp_abm_link {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_7__ {int min; int is_ecn; } ;
struct TYPE_5__ {int threshold; int ecn; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct nfp_abm_link*,struct tc_gred_qopt_offload*) ;
 int FUNC_1 (struct nfp_abm_link*) ;
 int FUNC_2 (struct net_device*,struct nfp_abm_link*,int ,int ,int ,int ,struct nfp_qdisc**) ;

__attribute__((used)) static int
FUNC_3(struct net_device *VAR_1, struct nfp_abm_link *VAR_2,
       struct tc_gred_qopt_offload *VAR_3)
{
 struct nfp_qdisc *VAR_4;
 unsigned int VAR_5;
 int VAR_6;

 VAR_6 = FUNC_2(VAR_1, VAR_2, VAR_0, VAR_3->parent,
        VAR_3->handle, 0, &VAR_4);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_4->params_ok = FUNC_0(VAR_2, VAR_3);
 if (VAR_4->params_ok) {
  VAR_4->red.num_bands = VAR_3->set.dp_cnt;
  for (VAR_5 = 0; VAR_5 < VAR_4->red.num_bands; VAR_5++) {
   VAR_4->red.band[VAR_5].ecn = VAR_3->set.tab[VAR_5].is_ecn;
   VAR_4->red.band[VAR_5].threshold = VAR_3->set.tab[VAR_5].min;
  }
 }

 if (VAR_4->use_cnt)
  FUNC_1(VAR_2);

 return 0;
}
