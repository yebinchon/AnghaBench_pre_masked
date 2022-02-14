
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int channel; } ;
struct TYPE_4__ {scalar_t__ enabled; } ;
struct iwl_rxon_context {TYPE_2__ active; TYPE_1__ ht; } ;
struct iwl_priv {int dummy; } ;
struct iwl_link_quality_cmd {TYPE_3__* rs_table; } ;
struct TYPE_6__ {int rate_n_flags; } ;


 int FUNC_0 (struct iwl_priv*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(struct iwl_priv *VAR_2,
         struct iwl_rxon_context *VAR_3,
         struct iwl_link_quality_cmd *VAR_4)
{
 int VAR_5;

 if (VAR_3->ht.enabled)
  return 1;

 FUNC_0(VAR_2, "Channel %u is not an HT channel\n",
         VAR_3->active.channel);
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (FUNC_1(VAR_4->rs_table[VAR_5].rate_n_flags) &
      VAR_1) {
   FUNC_0(VAR_2,
           "index %d of LQ expects HT channel\n",
           VAR_5);
   return 0;
  }
 }
 return 1;
}
