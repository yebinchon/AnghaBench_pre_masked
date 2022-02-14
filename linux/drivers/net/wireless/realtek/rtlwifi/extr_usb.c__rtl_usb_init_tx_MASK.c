
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_4__ {size_t* ep_mapping; } ;
struct rtl_usb {int * tx_pending; int * tx_skb_queue; int tx_submitted; int * usb_tx_aggregate_hdl; int usb_tx_cleanup; int usb_tx_post_hdl; TYPE_1__ ep_map; int max_bulk_out_size; int udev; } ;
struct rtl_priv {TYPE_3__* cfg; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_6__ {TYPE_2__* usb_interface_cfg; } ;
struct TYPE_5__ {int * usb_tx_aggregate_hdl; int usb_tx_cleanup; int usb_tx_post_hdl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 size_t VAR_3 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*,...) ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;
 struct rtl_usb* FUNC_4 (int ) ;
 int FUNC_5 (struct ieee80211_hw*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct ieee80211_hw *VAR_8)
{
 u32 VAR_9;
 struct rtl_priv *VAR_10 = FUNC_3(VAR_8);
 struct rtl_usb *VAR_11 = FUNC_4(FUNC_5(VAR_8));

 VAR_11->max_bulk_out_size = FUNC_0(VAR_11->udev)
          ? VAR_5
          : VAR_4;

 FUNC_1(VAR_10, VAR_0, VAR_1, "USB Max Bulk-out Size=%d\n",
   VAR_11->max_bulk_out_size);

 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {
  u32 VAR_12 = VAR_11->ep_map.ep_mapping[VAR_9];

  if (!VAR_12) {
   FUNC_1(VAR_10, VAR_0, VAR_1,
     "Invalid endpoint map setting!\n");
   return -VAR_2;
  }
 }

 VAR_11->usb_tx_post_hdl =
   VAR_10->cfg->usb_interface_cfg->usb_tx_post_hdl;
 VAR_11->usb_tx_cleanup =
   VAR_10->cfg->usb_interface_cfg->usb_tx_cleanup;
 VAR_11->usb_tx_aggregate_hdl =
   (VAR_10->cfg->usb_interface_cfg->usb_tx_aggregate_hdl)
   ? VAR_10->cfg->usb_interface_cfg->usb_tx_aggregate_hdl
   : &VAR_7;

 FUNC_2(&VAR_11->tx_submitted);
 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
  FUNC_6(&VAR_11->tx_skb_queue[VAR_9]);
  FUNC_2(&VAR_11->tx_pending[VAR_9]);
 }
 return 0;
}
