
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct ath6kl_vif {scalar_t__ nw_type; int fw_vif_idx; int flags; scalar_t__ reconnect_flag; TYPE_1__* aggr_cntxt; int if_lock; int ndev; int listen_intvl_t; int bss_ch; int bssid; struct ath6kl* ar; } ;
struct ath6kl {int wmi; int usr_bss_filter; int next_ep_id; scalar_t__ node_num; int node_map; scalar_t__ ibss_ps_enable; } ;
typedef enum network_type { ____Placeholder_network_type } network_type ;
struct TYPE_2__ {int aggr_conn; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ath6kl_vif*,int ,int *,int ,int ,int,int ,int ,int ,int *) ;
 int FUNC_2 (struct ath6kl*,int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int *,int) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

void FUNC_13(struct ath6kl_vif *VAR_7, u16 VAR_8, u8 *VAR_9,
     u16 VAR_10, u16 VAR_11,
     enum network_type VAR_12, u8 VAR_13,
     u8 VAR_14, u8 VAR_15,
     u8 *VAR_16)
{
 struct ath6kl *VAR_17 = VAR_7->ar;

 FUNC_1(VAR_7, VAR_8, VAR_9,
          VAR_10, VAR_11,
          VAR_12, VAR_13,
          VAR_14, VAR_15,
          VAR_16);

 FUNC_6(VAR_7->bssid, VAR_9, sizeof(VAR_7->bssid));
 VAR_7->bss_ch = VAR_8;

 if (VAR_7->nw_type == VAR_6) {
  FUNC_4(VAR_17->wmi, VAR_7->fw_vif_idx,
           VAR_7->listen_intvl_t, 0);
  FUNC_2(VAR_17, VAR_8);
 }

 FUNC_9(VAR_7->ndev);


 FUNC_11(&VAR_7->if_lock);
 FUNC_10(VAR_2, &VAR_7->flags);
 FUNC_5(VAR_3, &VAR_7->flags);
 FUNC_8(VAR_7->ndev);
 FUNC_12(&VAR_7->if_lock);

 FUNC_0(VAR_7->aggr_cntxt->aggr_conn);
 VAR_7->reconnect_flag = 0;

 if ((VAR_7->nw_type == VAR_0) && VAR_17->ibss_ps_enable) {
  FUNC_7(VAR_17->node_map, 0, sizeof(VAR_17->node_map));
  VAR_17->node_num = 0;
  VAR_17->next_ep_id = VAR_5;
 }

 if (!VAR_17->usr_bss_filter) {
  FUNC_10(VAR_1, &VAR_7->flags);
  FUNC_3(VAR_17->wmi, VAR_7->fw_vif_idx,
      VAR_4, 0);
 }
}
