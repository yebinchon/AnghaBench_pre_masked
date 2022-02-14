
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct st_rproc_config {int dummy; } ;
struct TYPE_2__ {int tx_block; int knows_txdone; int rx_callback; int * tx_done; struct device* dev; } ;
struct st_rproc {int clk; struct mbox_chan** mbox_chan; TYPE_1__ mbox_client_vq1; TYPE_1__ mbox_client_vq0; int clk_rate; struct st_rproc_config* config; } ;
struct device {struct device_node* of_node; } ;
struct rproc {int has_iommu; struct device dev; int state; int power; struct st_rproc* priv; } ;
struct platform_device {struct device dev; } ;
struct of_device_id {scalar_t__ data; } ;
struct mbox_chan {int dummy; } ;
struct device_node {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct mbox_chan*) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_1 (struct mbox_chan*) ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct device*,char*) ;
 int FUNC_6 (struct mbox_chan*) ;
 struct mbox_chan* FUNC_7 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_8 (struct device_node*,char*,int *) ;
 struct of_device_id* FUNC_9 (int ,struct device*) ;
 int FUNC_10 (struct platform_device*,struct rproc*) ;
 int FUNC_11 (struct rproc*) ;
 struct rproc* FUNC_12 (struct device*,int ,int *,int *,int) ;
 int FUNC_13 (struct rproc*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_14 (struct platform_device*) ;
 int FUNC_15 (struct platform_device*) ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_13)
{
 struct device *VAR_14 = &VAR_13->dev;
 const struct of_device_id *VAR_15;
 struct st_rproc *VAR_16;
 struct device_node *VAR_17 = VAR_14->of_node;
 struct rproc *VAR_18;
 struct mbox_chan *VAR_19;
 int VAR_20;
 int VAR_21, VAR_22;

 VAR_15 = FUNC_9(VAR_9, VAR_14);
 if (!VAR_15 || !VAR_15->data) {
  FUNC_5(VAR_14, "No device match found\n");
  return -VAR_0;
 }

 VAR_18 = FUNC_12(VAR_14, VAR_17->name, &VAR_12, ((void*)0), sizeof(*VAR_16));
 if (!VAR_18)
  return -VAR_1;

 VAR_18->has_iommu = 0;
 VAR_16 = VAR_18->priv;
 VAR_16->config = (struct st_rproc_config *)VAR_15->data;

 FUNC_10(VAR_13, VAR_18);

 VAR_21 = FUNC_14(VAR_13);
 if (VAR_21)
  goto free_rproc;

 VAR_20 = FUNC_15(VAR_13);
 if (VAR_20 < 0) {
  VAR_21 = VAR_20;
  goto free_clk;
 }

 if (VAR_20) {
  FUNC_2(&VAR_18->power);
  VAR_18->state = VAR_5;
 } else {
  FUNC_3(VAR_16->clk, VAR_16->clk_rate);
 }

 if (FUNC_8(VAR_17, "mbox-names", ((void*)0))) {
  VAR_16->mbox_client_vq0.dev = VAR_14;
  VAR_16->mbox_client_vq0.tx_done = ((void*)0);
  VAR_16->mbox_client_vq0.tx_block = 0;
  VAR_16->mbox_client_vq0.knows_txdone = 0;
  VAR_16->mbox_client_vq0.rx_callback = VAR_10;

  VAR_16->mbox_client_vq1.dev = VAR_14;
  VAR_16->mbox_client_vq1.tx_done = ((void*)0);
  VAR_16->mbox_client_vq1.tx_block = 0;
  VAR_16->mbox_client_vq1.knows_txdone = 0;
  VAR_16->mbox_client_vq1.rx_callback = VAR_11;





  VAR_19 = FUNC_7(&VAR_16->mbox_client_vq0, "vq0_rx");
  if (FUNC_0(VAR_19)) {
   FUNC_5(&VAR_18->dev, "failed to request mbox chan 0\n");
   VAR_21 = FUNC_1(VAR_19);
   goto free_clk;
  }
  VAR_16->mbox_chan[VAR_7 * VAR_2 + VAR_3] = VAR_19;

  VAR_19 = FUNC_7(&VAR_16->mbox_client_vq0, "vq0_tx");
  if (FUNC_0(VAR_19)) {
   FUNC_5(&VAR_18->dev, "failed to request mbox chan 0\n");
   VAR_21 = FUNC_1(VAR_19);
   goto free_mbox;
  }
  VAR_16->mbox_chan[VAR_7 * VAR_2 + VAR_4] = VAR_19;

  VAR_19 = FUNC_7(&VAR_16->mbox_client_vq1, "vq1_rx");
  if (FUNC_0(VAR_19)) {
   FUNC_5(&VAR_18->dev, "failed to request mbox chan 1\n");
   VAR_21 = FUNC_1(VAR_19);
   goto free_mbox;
  }
  VAR_16->mbox_chan[VAR_8 * VAR_2 + VAR_3] = VAR_19;

  VAR_19 = FUNC_7(&VAR_16->mbox_client_vq1, "vq1_tx");
  if (FUNC_0(VAR_19)) {
   FUNC_5(&VAR_18->dev, "failed to request mbox chan 1\n");
   VAR_21 = FUNC_1(VAR_19);
   goto free_mbox;
  }
  VAR_16->mbox_chan[VAR_8 * VAR_2 + VAR_4] = VAR_19;
 }

 VAR_21 = FUNC_11(VAR_18);
 if (VAR_21)
  goto free_mbox;

 return 0;

free_mbox:
 for (VAR_22 = 0; VAR_22 < VAR_6 * VAR_2; VAR_22++)
  FUNC_6(VAR_16->mbox_chan[VAR_22]);
free_clk:
 FUNC_4(VAR_16->clk);
free_rproc:
 FUNC_13(VAR_18);
 return VAR_21;
}
