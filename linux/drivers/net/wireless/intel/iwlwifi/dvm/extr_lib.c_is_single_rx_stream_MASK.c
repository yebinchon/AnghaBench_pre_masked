
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ smps; scalar_t__ single_chain_sufficient; } ;
struct iwl_priv {TYPE_1__ current_ht_config; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct iwl_priv *VAR_1)
{
 return VAR_1->current_ht_config.smps == VAR_0 ||
        VAR_1->current_ht_config.single_chain_sufficient;
}
