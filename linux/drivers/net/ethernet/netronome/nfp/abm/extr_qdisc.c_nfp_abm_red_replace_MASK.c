
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int min; int is_ecn; scalar_t__ limit; } ;
struct tc_red_qopt_offload {TYPE_3__ set; int handle; int parent; } ;
struct TYPE_6__ {int num_bands; TYPE_1__* band; } ;
struct nfp_qdisc {int use_cnt; TYPE_2__ red; scalar_t__ params_ok; TYPE_4__** children; } ;
struct nfp_abm_link {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_8__ {int use_cnt; } ;
struct TYPE_5__ {int threshold; int ecn; } ;


 int VAR_0 ;
 TYPE_4__* VAR_1 ;
 scalar_t__ FUNC_0 (struct nfp_qdisc*,int ) ;
 int FUNC_1 (struct nfp_abm_link*) ;
 int FUNC_2 (struct net_device*,struct nfp_abm_link*,int ,int ,int ,int,struct nfp_qdisc**) ;
 scalar_t__ FUNC_3 (struct nfp_abm_link*,struct tc_red_qopt_offload*) ;

__attribute__((used)) static int
FUNC_4(struct net_device *VAR_2, struct nfp_abm_link *VAR_3,
      struct tc_red_qopt_offload *VAR_4)
{
 struct nfp_qdisc *VAR_5;
 int VAR_6;

 VAR_6 = FUNC_2(VAR_2, VAR_3, VAR_0, VAR_4->parent,
        VAR_4->handle, 1, &VAR_5);
 if (VAR_6 < 0)
  return VAR_6;


 if (VAR_4->set.limit) {
  if (FUNC_0(VAR_5, 0))
   VAR_5->children[0]->use_cnt--;
  VAR_5->children[0] = ((void*)0);
 } else {



  if (!VAR_6)
   VAR_5->children[0] = VAR_1;
 }

 VAR_5->params_ok = FUNC_3(VAR_3, VAR_4);
 if (VAR_5->params_ok) {
  VAR_5->red.num_bands = 1;
  VAR_5->red.band[0].ecn = VAR_4->set.is_ecn;
  VAR_5->red.band[0].threshold = VAR_4->set.min;
 }

 if (VAR_5->use_cnt == 1)
  FUNC_1(VAR_3);

 return 0;
}
