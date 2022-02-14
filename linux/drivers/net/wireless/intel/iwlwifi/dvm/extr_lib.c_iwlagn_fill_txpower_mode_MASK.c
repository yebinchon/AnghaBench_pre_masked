
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_rxon_context {TYPE_1__* vif; } ;
struct iwl_priv {int reduced_txpower; int bt_valid; struct iwl_rxon_context* contexts; } ;
struct iwl_bt_uart_msg {int frame3; } ;
struct TYPE_2__ {scalar_t__ type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct iwl_priv*,char*) ;
 int FUNC_1 (struct iwl_priv*,char*) ;
 size_t VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (struct iwl_priv*,int ) ;

__attribute__((used)) static bool FUNC_4(struct iwl_priv *VAR_11,
    struct iwl_bt_uart_msg *VAR_12)
{
 bool VAR_13 = 0;
 struct iwl_rxon_context *VAR_14 = &VAR_11->contexts[VAR_8];
 int VAR_15;

 if (!VAR_14->vif || (VAR_14->vif->type != VAR_10)) {
  FUNC_1(VAR_11, "BSS ctx not active or not in sta mode\n");
  return 0;
 }

 VAR_15 = FUNC_2(VAR_14->vif);
 if (!VAR_15) {

  FUNC_0(VAR_11, "no rssi data available\n");
  return VAR_13;
 }
 if (!VAR_11->reduced_txpower &&
     !FUNC_3(VAR_11, VAR_9) &&
     (VAR_15 > VAR_1) &&
     (VAR_12->frame3 & (VAR_3 |
     VAR_4)) &&
     !(VAR_12->frame3 & (VAR_5 |
     VAR_6 | VAR_2))) {

  VAR_11->reduced_txpower = 1;
  VAR_11->bt_valid |= VAR_7;
  VAR_13 = 1;
 } else if (VAR_11->reduced_txpower &&
     (FUNC_3(VAR_11, VAR_9) ||
     (VAR_15 < VAR_0) ||
     (VAR_12->frame3 & (VAR_5 |
     VAR_6 | VAR_2)) ||
     !(VAR_12->frame3 & (VAR_3 |
     VAR_4)))) {

  VAR_11->reduced_txpower = 0;
  VAR_11->bt_valid |= VAR_7;
  VAR_13 = 1;
 }

 return VAR_13;
}
