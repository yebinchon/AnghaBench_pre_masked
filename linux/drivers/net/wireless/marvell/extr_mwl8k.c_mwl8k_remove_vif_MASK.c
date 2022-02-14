
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mwl8k_vif {int macid; int list; } ;
struct mwl8k_priv {int macids_used; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct mwl8k_priv *VAR_0, struct mwl8k_vif *VAR_1)
{

 if (!VAR_0->macids_used)
  return;

 VAR_0->macids_used &= ~(1 << VAR_1->macid);
 FUNC_0(&VAR_1->list);
}
