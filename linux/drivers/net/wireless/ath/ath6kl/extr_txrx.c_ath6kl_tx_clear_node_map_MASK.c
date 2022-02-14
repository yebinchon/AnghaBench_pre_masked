
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct ath6kl_vif {scalar_t__ nw_type; struct ath6kl* ar; } ;
struct ath6kl_node_mapping {int dummy; } ;
struct ath6kl {int ctrl_ep; int node_num; TYPE_1__* node_map; int ibss_ps_enable; } ;
typedef enum htc_endpoint_id { ____Placeholder_htc_endpoint_id } htc_endpoint_id ;
struct TYPE_2__ {scalar_t__ tx_pend; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct ath6kl_vif *VAR_1,
         enum htc_endpoint_id VAR_2, u32 VAR_3)
{
 struct ath6kl *VAR_4 = VAR_1->ar;
 u32 VAR_5;

 if (VAR_1->nw_type != VAR_0)
  return;

 if (!VAR_4->ibss_ps_enable)
  return;

 if (VAR_2 == VAR_4->ctrl_ep)
  return;

 if (VAR_3 == 0)
  return;

 VAR_3--;
 VAR_4->node_map[VAR_3].tx_pend--;

 if (VAR_4->node_map[VAR_3].tx_pend)
  return;

 if (VAR_3 != (VAR_4->node_num - 1))
  return;

 for (VAR_5 = VAR_4->node_num; VAR_5 > 0; VAR_5--) {
  if (VAR_4->node_map[VAR_5 - 1].tx_pend)
   break;

  FUNC_0(&VAR_4->node_map[VAR_5 - 1], 0,
         sizeof(struct ath6kl_node_mapping));
  VAR_4->node_num--;
 }
}
