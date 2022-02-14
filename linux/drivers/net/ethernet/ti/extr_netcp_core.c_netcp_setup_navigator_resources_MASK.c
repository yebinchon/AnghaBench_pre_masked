
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef void* u32 ;
struct netcp_intf {void* rx_channel; int ndev_dev; int dma_chan_name; TYPE_3__* netcp_device; void** rx_fdq; void* rx_queue_id; scalar_t__* rx_queue_depths; void* rx_queue; void* tx_compl_q; void* tx_compl_qid; void* tx_pool; int tx_pool_region_id; int tx_pool_size; void* rx_pool; int rx_pool_region_id; int rx_pool_size; } ;
struct net_device {char* name; } ;
struct knav_queue_notify_config {struct netcp_intf* fn_arg; int fn; } ;
struct TYPE_4__ {int einfo_present; int psinfo_present; int psinfo_at_sop; void** fdq; int thresh; void* dst_q; int sop_offset; int desc_type; int err_mode; } ;
struct TYPE_5__ {TYPE_1__ rx; } ;
struct knav_dma_cfg {TYPE_2__ u; int direction; } ;
typedef int name ;
typedef int config ;
struct TYPE_6__ {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (void*) ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (void*) ;
 int FUNC_3 (int ,char*,void*) ;
 int FUNC_4 (int ,char*,...) ;
 void* FUNC_5 (int ,int ,struct knav_dma_cfg*) ;
 void* FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (void*,int ,unsigned long) ;
 int FUNC_8 (void*) ;
 void* FUNC_9 (void*) ;
 void* FUNC_10 (int *,void*,int ) ;
 int FUNC_11 (struct knav_dma_cfg*,int ,int) ;
 int FUNC_12 (struct netcp_intf*) ;
 int VAR_8 ;
 int VAR_9 ;
 struct netcp_intf* FUNC_13 (struct net_device*) ;
 int FUNC_14 (int *,int,char*,char*,...) ;

__attribute__((used)) static int FUNC_15(struct net_device *VAR_10)
{
 struct netcp_intf *VAR_11 = FUNC_13(VAR_10);
 struct knav_queue_notify_config VAR_12;
 struct knav_dma_cfg VAR_13;
 u32 VAR_14 = 0;
 u8 VAR_15[16];
 int VAR_16;
 int VAR_17;


 FUNC_14(VAR_15, sizeof(VAR_15), "rx-pool-%s", VAR_10->name);
 VAR_11->rx_pool = FUNC_6(VAR_15, VAR_11->rx_pool_size,
      VAR_11->rx_pool_region_id);
 if (FUNC_1(VAR_11->rx_pool)) {
  FUNC_4(VAR_11->ndev_dev, "Couldn't create rx pool\n");
  VAR_16 = FUNC_2(VAR_11->rx_pool);
  goto fail;
 }

 FUNC_14(VAR_15, sizeof(VAR_15), "tx-pool-%s", VAR_10->name);
 VAR_11->tx_pool = FUNC_6(VAR_15, VAR_11->tx_pool_size,
      VAR_11->tx_pool_region_id);
 if (FUNC_1(VAR_11->tx_pool)) {
  FUNC_4(VAR_11->ndev_dev, "Couldn't create tx pool\n");
  VAR_16 = FUNC_2(VAR_11->tx_pool);
  goto fail;
 }


 FUNC_14(VAR_15, sizeof(VAR_15), "tx-compl-%s", VAR_10->name);
 VAR_11->tx_compl_q = FUNC_10(VAR_15, VAR_11->tx_compl_qid, 0);
 if (FUNC_0(VAR_11->tx_compl_q)) {
  VAR_16 = FUNC_2(VAR_11->tx_compl_q);
  goto fail;
 }
 VAR_11->tx_compl_qid = FUNC_9(VAR_11->tx_compl_q);


 VAR_12.fn = VAR_9;
 VAR_12.fn_arg = VAR_11;
 VAR_16 = FUNC_7(VAR_11->tx_compl_q,
     VAR_6,
     (unsigned long)&VAR_12);
 if (VAR_16)
  goto fail;

 FUNC_8(VAR_11->tx_compl_q);


 FUNC_14(VAR_15, sizeof(VAR_15), "rx-compl-%s", VAR_10->name);
 VAR_11->rx_queue = FUNC_10(VAR_15, VAR_11->rx_queue_id, 0);
 if (FUNC_0(VAR_11->rx_queue)) {
  VAR_16 = FUNC_2(VAR_11->rx_queue);
  goto fail;
 }
 VAR_11->rx_queue_id = FUNC_9(VAR_11->rx_queue);


 VAR_12.fn = VAR_8;
 VAR_12.fn_arg = VAR_11;
 VAR_16 = FUNC_7(VAR_11->rx_queue,
     VAR_6,
     (unsigned long)&VAR_12);
 if (VAR_16)
  goto fail;

 FUNC_8(VAR_11->rx_queue);


 for (VAR_17 = 0; VAR_17 < VAR_4 && VAR_11->rx_queue_depths[VAR_17];
      ++VAR_17) {
  FUNC_14(VAR_15, sizeof(VAR_15), "rx-fdq-%s-%d", VAR_10->name, VAR_17);
  VAR_11->rx_fdq[VAR_17] = FUNC_10(VAR_15, VAR_5, 0);
  if (FUNC_0(VAR_11->rx_fdq[VAR_17])) {
   VAR_16 = FUNC_2(VAR_11->rx_fdq[VAR_17]);
   goto fail;
  }
 }

 FUNC_11(&VAR_13, 0, sizeof(VAR_13));
 VAR_13.direction = VAR_1;
 VAR_13.u.rx.einfo_present = 1;
 VAR_13.u.rx.psinfo_present = 1;
 VAR_13.u.rx.err_mode = VAR_2;
 VAR_13.u.rx.desc_type = VAR_0;
 VAR_13.u.rx.psinfo_at_sop = 0;
 VAR_13.u.rx.sop_offset = VAR_7;
 VAR_13.u.rx.dst_q = VAR_11->rx_queue_id;
 VAR_13.u.rx.thresh = VAR_3;

 for (VAR_17 = 0; VAR_17 < VAR_4; ++VAR_17) {
  if (VAR_11->rx_fdq[VAR_17])
   VAR_14 = FUNC_9(VAR_11->rx_fdq[VAR_17]);
  VAR_13.u.rx.fdq[VAR_17] = VAR_14;
 }

 VAR_11->rx_channel = FUNC_5(VAR_11->netcp_device->device,
     VAR_11->dma_chan_name, &VAR_13);
 if (FUNC_0(VAR_11->rx_channel)) {
  FUNC_4(VAR_11->ndev_dev, "failed opening rx chan(%s\n",
   VAR_11->dma_chan_name);
  VAR_16 = FUNC_2(VAR_11->rx_channel);
  goto fail;
 }

 FUNC_3(VAR_11->ndev_dev, "opened RX channel: %p\n", VAR_11->rx_channel);
 return 0;

fail:
 FUNC_12(VAR_11);
 return VAR_16;
}
