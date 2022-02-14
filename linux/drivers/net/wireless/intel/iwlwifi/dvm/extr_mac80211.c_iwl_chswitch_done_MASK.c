
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_rxon_context {scalar_t__ vif; } ;
struct iwl_priv {int status; struct iwl_rxon_context* contexts; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int ,int *) ;

void FUNC_3(struct iwl_priv *VAR_3, bool VAR_4)
{




 struct iwl_rxon_context *VAR_5 = &VAR_3->contexts[VAR_0];

 if (FUNC_2(VAR_2, &VAR_3->status))
  return;

 if (!FUNC_1(VAR_1, &VAR_3->status))
  return;

 if (VAR_5->vif)
  FUNC_0(VAR_5->vif, VAR_4);
}
