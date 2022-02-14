
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct usb_card_rec {int rx_data_urb_pending; int rx_cmd_urb_pending; TYPE_2__* port; int tx_cmd_urb_pending; } ;
struct sdio_mmc_card {int mp_rd_bitmap; int curr_rd_port; int mp_wr_bitmap; int curr_wr_port; } ;
struct netdev_queue {int dummy; } ;
struct mwifiex_private {int num_tx_timeout; TYPE_3__* netdev; int media_connected; int * wmm_tx_pending; } ;
struct mwifiex_debug_info {int dummy; } ;
struct TYPE_5__ {int (* reg_dump ) (struct mwifiex_adapter*,char*) ;} ;
struct mwifiex_adapter {char* devdump_data; scalar_t__ iface_type; int priv_num; int devdump_len; struct mwifiex_private** priv; TYPE_1__ if_ops; scalar_t__ card; int rx_pending; int tx_pending; } ;
typedef int drv_version ;
struct TYPE_7__ {char* name; int num_tx_queues; } ;
struct TYPE_6__ {int tx_data_urb_pending; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct mwifiex_debug_info*) ;
 struct mwifiex_debug_info* FUNC_2 (int,int ) ;
 int FUNC_3 (struct mwifiex_adapter*,int ,char*) ;
 int FUNC_4 (struct mwifiex_private*,char*,struct mwifiex_debug_info*) ;
 int FUNC_5 (struct mwifiex_adapter*,char*,int) ;
 int FUNC_6 (struct mwifiex_private*,struct mwifiex_debug_info*) ;
 struct netdev_queue* FUNC_7 (TYPE_3__*,int) ;
 scalar_t__ FUNC_8 (TYPE_3__*) ;
 scalar_t__ FUNC_9 (struct netdev_queue*) ;
 int FUNC_10 (char*,char*,...) ;
 int FUNC_11 (char*,char*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (struct mwifiex_adapter*,char*) ;

void FUNC_14(struct mwifiex_adapter *VAR_5)
{
 char *VAR_6;
 char VAR_7[64];
 struct usb_card_rec *VAR_8;
 struct sdio_mmc_card *VAR_9;
 struct mwifiex_private *VAR_10;
 int VAR_11, VAR_12;
 struct netdev_queue *VAR_13;
 struct mwifiex_debug_info *VAR_14;

 FUNC_3(VAR_5, VAR_1, "===mwifiex driverinfo dump start===\n");

 VAR_6 = VAR_5->devdump_data;
 FUNC_11(VAR_6, "========Start dump driverinfo========\n");
 VAR_6 += FUNC_12("========Start dump driverinfo========\n");
 VAR_6 += FUNC_10(VAR_6, "driver_name = " "\"mwifiex\"\n");

 FUNC_5(VAR_5, VAR_7,
           sizeof(VAR_7) - 1);
 VAR_6 += FUNC_10(VAR_6, "driver_version = %s\n", VAR_7);

 if (VAR_5->iface_type == VAR_4) {
  VAR_8 = (struct usb_card_rec *)VAR_5->card;
  VAR_6 += FUNC_10(VAR_6, "tx_cmd_urb_pending = %d\n",
        FUNC_0(&VAR_8->tx_cmd_urb_pending));
  VAR_6 += FUNC_10(VAR_6, "tx_data_urb_pending_port_0 = %d\n",
        FUNC_0(&VAR_8->port[0].tx_data_urb_pending));
  VAR_6 += FUNC_10(VAR_6, "tx_data_urb_pending_port_1 = %d\n",
        FUNC_0(&VAR_8->port[1].tx_data_urb_pending));
  VAR_6 += FUNC_10(VAR_6, "rx_cmd_urb_pending = %d\n",
        FUNC_0(&VAR_8->rx_cmd_urb_pending));
  VAR_6 += FUNC_10(VAR_6, "rx_data_urb_pending = %d\n",
        FUNC_0(&VAR_8->rx_data_urb_pending));
 }

 VAR_6 += FUNC_10(VAR_6, "tx_pending = %d\n",
       FUNC_0(&VAR_5->tx_pending));
 VAR_6 += FUNC_10(VAR_6, "rx_pending = %d\n",
       FUNC_0(&VAR_5->rx_pending));

 if (VAR_5->iface_type == VAR_3) {
  VAR_9 = (struct sdio_mmc_card *)VAR_5->card;
  VAR_6 += FUNC_10(VAR_6, "\nmp_rd_bitmap=0x%x curr_rd_port=0x%x\n",
        VAR_9->mp_rd_bitmap, VAR_9->curr_rd_port);
  VAR_6 += FUNC_10(VAR_6, "mp_wr_bitmap=0x%x curr_wr_port=0x%x\n",
        VAR_9->mp_wr_bitmap, VAR_9->curr_wr_port);
 }

 for (VAR_11 = 0; VAR_11 < VAR_5->priv_num; VAR_11++) {
  if (!VAR_5->priv[VAR_11] || !VAR_5->priv[VAR_11]->netdev)
   continue;
  VAR_10 = VAR_5->priv[VAR_11];
  VAR_6 += FUNC_10(VAR_6, "\n[interface  : \"%s\"]\n",
        VAR_10->netdev->name);
  VAR_6 += FUNC_10(VAR_6, "wmm_tx_pending[0] = %d\n",
        FUNC_0(&VAR_10->wmm_tx_pending[0]));
  VAR_6 += FUNC_10(VAR_6, "wmm_tx_pending[1] = %d\n",
        FUNC_0(&VAR_10->wmm_tx_pending[1]));
  VAR_6 += FUNC_10(VAR_6, "wmm_tx_pending[2] = %d\n",
        FUNC_0(&VAR_10->wmm_tx_pending[2]));
  VAR_6 += FUNC_10(VAR_6, "wmm_tx_pending[3] = %d\n",
        FUNC_0(&VAR_10->wmm_tx_pending[3]));
  VAR_6 += FUNC_10(VAR_6, "media_state=\"%s\"\n", !VAR_10->media_connected ?
        "Disconnected" : "Connected");
  VAR_6 += FUNC_10(VAR_6, "carrier %s\n", (FUNC_8(VAR_10->netdev)
        ? "on" : "off"));
  for (VAR_12 = 0; VAR_12 < VAR_10->netdev->num_tx_queues; VAR_12++) {
   VAR_13 = FUNC_7(VAR_10->netdev, VAR_12);
   VAR_6 += FUNC_10(VAR_6, "tx queue %d:%s  ", VAR_12,
         FUNC_9(VAR_13) ?
         "stopped" : "started");
  }
  VAR_6 += FUNC_10(VAR_6, "\n%s: num_tx_timeout = %d\n",
        VAR_10->netdev->name, VAR_10->num_tx_timeout);
 }

 if (VAR_5->iface_type == VAR_3 ||
     VAR_5->iface_type == VAR_2) {
  VAR_6 += FUNC_10(VAR_6, "\n=== %s register dump===\n",
        VAR_5->iface_type == VAR_3 ?
       "SDIO" : "PCIE");
  if (VAR_5->if_ops.reg_dump)
   VAR_6 += VAR_5->if_ops.reg_dump(VAR_5, VAR_6);
 }
 VAR_6 += FUNC_10(VAR_6, "\n=== more debug information\n");
 VAR_14 = FUNC_2(sizeof(*VAR_14), VAR_0);
 if (VAR_14) {
  for (VAR_11 = 0; VAR_11 < VAR_5->priv_num; VAR_11++) {
   if (!VAR_5->priv[VAR_11] || !VAR_5->priv[VAR_11]->netdev)
    continue;
   VAR_10 = VAR_5->priv[VAR_11];
   FUNC_6(VAR_10, VAR_14);
   VAR_6 += FUNC_4(VAR_10, VAR_6, VAR_14);
   break;
  }
  FUNC_1(VAR_14);
 }

 FUNC_11(VAR_6, "\n========End dump========\n");
 VAR_6 += FUNC_12("\n========End dump========\n");
 FUNC_3(VAR_5, VAR_1, "===mwifiex driverinfo dump end===\n");
 VAR_5->devdump_len = VAR_6 - (char *)VAR_5->devdump_data;
}
