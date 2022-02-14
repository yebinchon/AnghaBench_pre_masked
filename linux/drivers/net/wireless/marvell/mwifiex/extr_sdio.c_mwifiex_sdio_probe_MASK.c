
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sdio_mmc_card {int fw_done; int work; int can_ext_scan; int can_auto_tdls; int fw_dump_enh; int can_dump_fw; int mp_rx_agg_buf_size; int mp_tx_agg_buf_size; int tx_buf_size; int has_control_mask; int supports_sdio_new_mode; int mp_agg_pkt_limit; int max_ports; int reg; int firmware; struct sdio_func* func; } ;
struct TYPE_7__ {scalar_t__ of_node; } ;
struct sdio_func {TYPE_2__ dev; TYPE_1__* card; int num; int class; int device; int vendor; } ;
struct sdio_device_id {scalar_t__ driver_data; } ;
struct mwifiex_sdio_device {int can_ext_scan; int can_auto_tdls; int fw_dump_enh; int can_dump_fw; int mp_rx_agg_buf_size; int mp_tx_agg_buf_size; int tx_buf_size; int has_control_mask; int supports_sdio_new_mode; int mp_agg_pkt_limit; int max_ports; int reg; int firmware; } ;
struct TYPE_6__ {int quirks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*,char*) ;
 struct sdio_mmc_card* FUNC_2 (TYPE_2__*,int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct sdio_mmc_card*,int *,int *,int ,TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int VAR_4 ;
 int FUNC_6 (char*,int ,int ,int ,int ) ;
 int FUNC_7 (struct sdio_func*) ;
 int FUNC_8 (struct sdio_func*) ;
 int FUNC_9 (struct sdio_func*) ;
 int VAR_5 ;
 int FUNC_10 (struct sdio_func*) ;

__attribute__((used)) static int
FUNC_11(struct sdio_func *VAR_6, const struct sdio_device_id *VAR_7)
{
 int VAR_8;
 struct sdio_mmc_card *VAR_9 = ((void*)0);

 FUNC_6("info: vendor=0x%4.04X device=0x%4.04X class=%d function=%d\n",
   VAR_6->vendor, VAR_6->device, VAR_6->class, VAR_6->num);

 VAR_9 = FUNC_2(&VAR_6->dev, sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 FUNC_3(&VAR_9->fw_done);

 VAR_9->func = VAR_6;

 VAR_6->card->quirks |= VAR_2;

 if (VAR_7->driver_data) {
  struct mwifiex_sdio_device *VAR_10 = (void *)VAR_7->driver_data;

  VAR_9->firmware = VAR_10->firmware;
  VAR_9->reg = VAR_10->reg;
  VAR_9->max_ports = VAR_10->max_ports;
  VAR_9->mp_agg_pkt_limit = VAR_10->mp_agg_pkt_limit;
  VAR_9->supports_sdio_new_mode = VAR_10->supports_sdio_new_mode;
  VAR_9->has_control_mask = VAR_10->has_control_mask;
  VAR_9->tx_buf_size = VAR_10->tx_buf_size;
  VAR_9->mp_tx_agg_buf_size = VAR_10->mp_tx_agg_buf_size;
  VAR_9->mp_rx_agg_buf_size = VAR_10->mp_rx_agg_buf_size;
  VAR_9->can_dump_fw = VAR_10->can_dump_fw;
  VAR_9->fw_dump_enh = VAR_10->fw_dump_enh;
  VAR_9->can_auto_tdls = VAR_10->can_auto_tdls;
  VAR_9->can_ext_scan = VAR_10->can_ext_scan;
  FUNC_0(&VAR_9->work, VAR_4);
 }

 FUNC_7(VAR_6);
 VAR_8 = FUNC_9(VAR_6);
 FUNC_10(VAR_6);

 if (VAR_8) {
  FUNC_1(&VAR_6->dev, "failed to enable function\n");
  return VAR_8;
 }


 if (VAR_6->dev.of_node) {
  VAR_8 = FUNC_5(&VAR_6->dev);
  if (VAR_8)
   goto err_disable;
 }

 VAR_8 = FUNC_4(VAR_9, &VAR_9->fw_done, &VAR_5,
          VAR_3, &VAR_6->dev);
 if (VAR_8) {
  FUNC_1(&VAR_6->dev, "add card failed\n");
  goto err_disable;
 }

 return 0;

err_disable:
 FUNC_7(VAR_6);
 FUNC_8(VAR_6);
 FUNC_10(VAR_6);

 return VAR_8;
}
