
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
struct wmi_per_sta_stat {int rx_discard; int rx_error; int rx_pkts; int rx_bytes; int tx_discard; int tx_error; int tx_pkts; int tx_bytes; } ;
struct wmi_ap_mode_stat {struct wmi_per_sta_stat* sta; } ;
struct ath6kl_vif {scalar_t__ nw_type; struct ath6kl* ar; } ;
struct ath6kl {struct wmi_ap_mode_stat ap_stats; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct ath6kl_vif*,size_t*,int) ;

void FUNC_2(struct ath6kl_vif *VAR_2, u8 *VAR_3, u32 VAR_4)
{
 struct wmi_ap_mode_stat *VAR_5 = (struct wmi_ap_mode_stat *) VAR_3;
 struct ath6kl *VAR_6 = VAR_2->ar;
 struct wmi_ap_mode_stat *VAR_7 = &VAR_6->ap_stats;
 struct wmi_per_sta_stat *VAR_8, *VAR_9;
 u8 VAR_10;

 if (VAR_2->nw_type == VAR_1) {
  if (VAR_4 < sizeof(*VAR_5))
   return;

  for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
   VAR_8 = &VAR_7->sta[VAR_10];
   VAR_9 = &VAR_5->sta[VAR_10];

   FUNC_0(&VAR_8->tx_bytes, VAR_9->tx_bytes);
   FUNC_0(&VAR_8->tx_pkts, VAR_9->tx_pkts);
   FUNC_0(&VAR_8->tx_error, VAR_9->tx_error);
   FUNC_0(&VAR_8->tx_discard, VAR_9->tx_discard);
   FUNC_0(&VAR_8->rx_bytes, VAR_9->rx_bytes);
   FUNC_0(&VAR_8->rx_pkts, VAR_9->rx_pkts);
   FUNC_0(&VAR_8->rx_error, VAR_9->rx_error);
   FUNC_0(&VAR_8->rx_discard, VAR_9->rx_discard);
  }

 } else {
  FUNC_1(VAR_2, VAR_3, VAR_4);
 }
}
