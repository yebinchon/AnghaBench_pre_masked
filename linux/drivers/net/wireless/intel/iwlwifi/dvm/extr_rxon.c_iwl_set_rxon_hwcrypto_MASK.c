
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_rxon_cmd {int filter_flags; } ;
struct iwl_rxon_context {struct iwl_rxon_cmd staging; } ;
struct iwl_priv {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct iwl_priv *VAR_1,
      struct iwl_rxon_context *VAR_2, int VAR_3)
{
 struct iwl_rxon_cmd *VAR_4 = &VAR_2->staging;

 if (VAR_3)
  VAR_4->filter_flags &= ~VAR_0;
 else
  VAR_4->filter_flags |= VAR_0;

}
