
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stmmac_priv {int flow_entries_max; struct stmmac_flow_entry* flow_entries; } ;
struct stmmac_flow_entry {scalar_t__ cookie; int in_use; } ;
struct flow_cls_offload {scalar_t__ cookie; } ;



__attribute__((used)) static struct stmmac_flow_entry *FUNC_0(struct stmmac_priv *VAR_0,
           struct flow_cls_offload *VAR_1,
           bool VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->flow_entries_max; VAR_3++) {
  struct stmmac_flow_entry *VAR_4 = &VAR_0->flow_entries[VAR_3];

  if (VAR_4->cookie == VAR_1->cookie)
   return VAR_4;
  if (VAR_2 && (VAR_4->in_use == 0))
   return VAR_4;
 }

 return ((void*)0);
}
