
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int use_rts_for_aggregation; } ;
struct iwl_priv {TYPE_4__* lib; TYPE_3__* cfg; TYPE_1__ hw_params; } ;
struct TYPE_8__ {int (* set_hw_params ) (struct iwl_priv*) ;} ;
struct TYPE_7__ {TYPE_2__* ht_params; } ;
struct TYPE_6__ {int use_rts_for_aggregation; } ;


 int FUNC_0 (struct iwl_priv*) ;

__attribute__((used)) static void FUNC_1(struct iwl_priv *VAR_0)
{
 if (VAR_0->cfg->ht_params)
  VAR_0->hw_params.use_rts_for_aggregation =
   VAR_0->cfg->ht_params->use_rts_for_aggregation;


 VAR_0->lib->set_hw_params(VAR_0);
}
