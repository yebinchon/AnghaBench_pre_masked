
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mwifiex_tx_pause_tlv {scalar_t__ tx_pause; int peermac; int pkt_cnt; } ;
struct mwifiex_sta_node {scalar_t__ tx_pause; } ;
struct mwifiex_private {int port_open; int sta_list_spinlock; TYPE_1__* adapter; int cfg_bssid; } ;
struct mwifiex_ie_types_header {int dummy; } ;
struct TYPE_2__ {int fw_cap_info; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*,int ,char*,int ,scalar_t__,int ) ;
 struct mwifiex_sta_node* FUNC_3 (struct mwifiex_private*,int ) ;
 int FUNC_4 (struct mwifiex_private*,int ) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct mwifiex_private*,int ,scalar_t__) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct mwifiex_private *VAR_1,
      struct mwifiex_ie_types_header *VAR_2)
{
 struct mwifiex_tx_pause_tlv *VAR_3;
 struct mwifiex_sta_node *VAR_4;
 int VAR_5;

 VAR_3 = (void *)VAR_2;
 FUNC_2(VAR_1->adapter, VAR_0,
      "sta tx_pause: %pM pause=%d, pkts=%d\n",
      VAR_3->peermac, VAR_3->tx_pause,
      VAR_3->pkt_cnt);

 if (FUNC_1(VAR_3->peermac, VAR_1->cfg_bssid)) {
  if (VAR_3->tx_pause)
   VAR_1->port_open = 0;
  else
   VAR_1->port_open = 1;
 } else {
  if (!FUNC_0(VAR_1->adapter->fw_cap_info))
   return;

  VAR_5 = FUNC_4(VAR_1, VAR_3->peermac);
  if (FUNC_5(VAR_5)) {
   FUNC_7(&VAR_1->sta_list_spinlock);
   VAR_4 = FUNC_3(VAR_1, VAR_3->peermac);
   if (VAR_4 && VAR_4->tx_pause != VAR_3->tx_pause) {
    VAR_4->tx_pause = VAR_3->tx_pause;
    FUNC_6(VAR_1,
              VAR_3->peermac,
              VAR_3->tx_pause);
   }
   FUNC_8(&VAR_1->sta_list_spinlock);
  }
 }
}
