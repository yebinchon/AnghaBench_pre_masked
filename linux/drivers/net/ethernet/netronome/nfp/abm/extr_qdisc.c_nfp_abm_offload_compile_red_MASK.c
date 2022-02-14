
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* band; } ;
struct nfp_qdisc {scalar_t__ type; int use_cnt; int offload_mark; TYPE_3__ red; int offloaded; scalar_t__ params_ok; int * children; } ;
struct nfp_abm_link {TYPE_1__* abm; int has_prio; } ;
typedef enum nfp_abm_q_action { ____Placeholder_nfp_abm_q_action } nfp_abm_q_action ;
struct TYPE_5__ {scalar_t__ ecn; int threshold; } ;
struct TYPE_4__ {unsigned int num_bands; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct nfp_abm_link*,unsigned int,unsigned int,int) ;
 int FUNC_1 (struct nfp_abm_link*,unsigned int,unsigned int,int ) ;
 scalar_t__ FUNC_2 (struct nfp_abm_link*,struct nfp_qdisc*,unsigned int) ;

__attribute__((used)) static void
FUNC_3(struct nfp_abm_link *VAR_4, struct nfp_qdisc *VAR_5,
       unsigned int VAR_6)
{
 bool VAR_7, VAR_8;
 unsigned int VAR_9;

 VAR_7 = VAR_5->type == VAR_3 &&
     VAR_5->params_ok &&
     VAR_5->use_cnt == 1 &&
     !VAR_4->has_prio &&
     !VAR_5->children[0];
 VAR_8 = VAR_5->type == VAR_2 &&
      VAR_5->params_ok &&
      VAR_5->use_cnt == 1;
 VAR_5->offload_mark = VAR_7 || VAR_8;


 if (VAR_5->offload_mark && !VAR_5->offloaded)
  if (FUNC_2(VAR_4, VAR_5, VAR_6))
   VAR_5->offload_mark = 0;

 if (!VAR_5->offload_mark)
  return;

 for (VAR_9 = 0; VAR_9 < VAR_4->abm->num_bands; VAR_9++) {
  enum nfp_abm_q_action VAR_10;

  FUNC_1(VAR_4, VAR_9, VAR_6,
           VAR_5->red.band[VAR_9].threshold);
  VAR_10 = VAR_5->red.band[VAR_9].ecn ?
   VAR_1 : VAR_0;
  FUNC_0(VAR_4, VAR_9, VAR_6, VAR_10);
 }
}
