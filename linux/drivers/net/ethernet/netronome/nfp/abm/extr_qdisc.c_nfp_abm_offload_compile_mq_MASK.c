
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_qdisc {int offload_mark; scalar_t__ type; struct nfp_qdisc** children; } ;
struct nfp_abm_link {unsigned int total_queues; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct nfp_abm_link*,struct nfp_qdisc*,unsigned int) ;
 int FUNC_1 (struct nfp_qdisc*,unsigned int) ;

__attribute__((used)) static void
FUNC_2(struct nfp_abm_link *VAR_1, struct nfp_qdisc *VAR_2)
{
 unsigned int VAR_3;

 VAR_2->offload_mark = VAR_2->type == VAR_0;
 if (!VAR_2->offload_mark)
  return;

 for (VAR_3 = 0; VAR_3 < VAR_1->total_queues; VAR_3++) {
  struct nfp_qdisc *VAR_4 = VAR_2->children[VAR_3];

  if (!FUNC_1(VAR_2, VAR_3))
   continue;

  FUNC_0(VAR_1, VAR_4, VAR_3);
 }
}
