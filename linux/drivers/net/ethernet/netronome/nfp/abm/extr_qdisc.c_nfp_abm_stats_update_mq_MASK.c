
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_qdisc {scalar_t__ type; int * children; } ;
struct nfp_abm_link {unsigned int total_queues; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct nfp_qdisc*,unsigned int) ;
 int FUNC_1 (struct nfp_abm_link*,int ,unsigned int) ;

__attribute__((used)) static void
FUNC_2(struct nfp_abm_link *VAR_1, struct nfp_qdisc *VAR_2)
{
 unsigned int VAR_3;

 if (VAR_2->type != VAR_0)
  return;

 for (VAR_3 = 0; VAR_3 < VAR_1->total_queues; VAR_3++)
  if (FUNC_0(VAR_2, VAR_3))
   FUNC_1(VAR_1, VAR_2->children[VAR_3], VAR_3);
}
