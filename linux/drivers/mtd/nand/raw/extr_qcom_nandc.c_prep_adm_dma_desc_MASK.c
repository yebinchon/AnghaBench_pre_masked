
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct qcom_nand_controller {int desc_list; int dev; int chan; int cmd_crci; scalar_t__ base_dma; int data_crci; } ;
struct dma_slave_config {int device_fc; int src_maxburst; int dst_maxburst; int slave_id; scalar_t__ dst_addr; scalar_t__ src_addr; } ;
struct dma_async_tx_descriptor {int dummy; } ;
struct desc_info {int node; struct dma_async_tx_descriptor* dma_desc; int dir; struct scatterlist adm_sgl; } ;
typedef int slave_conf ;
typedef enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,struct scatterlist*,int,int ) ;
 struct dma_async_tx_descriptor* FUNC_2 (int ,struct scatterlist*,int,int,int ) ;
 int FUNC_3 (int ,struct dma_slave_config*) ;
 int FUNC_4 (struct desc_info*) ;
 struct desc_info* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (struct dma_slave_config*,int,int) ;
 int FUNC_8 (struct scatterlist*,void const*,int) ;

__attribute__((used)) static int FUNC_9(struct qcom_nand_controller *VAR_7, bool VAR_8,
        int VAR_9, const void *VAR_10, int VAR_11,
        bool VAR_12)
{
 struct desc_info *VAR_13;
 struct dma_async_tx_descriptor *VAR_14;
 struct scatterlist *VAR_15;
 struct dma_slave_config VAR_16;
 enum dma_transfer_direction VAR_17;
 int VAR_18;

 VAR_13 = FUNC_5(sizeof(*VAR_13), VAR_6);
 if (!VAR_13)
  return -VAR_5;

 VAR_15 = &VAR_13->adm_sgl;

 FUNC_8(VAR_15, VAR_10, VAR_11);

 if (VAR_8) {
  VAR_17 = VAR_0;
  VAR_13->dir = VAR_1;
 } else {
  VAR_17 = VAR_2;
  VAR_13->dir = VAR_3;
 }

 VAR_18 = FUNC_1(VAR_7->dev, VAR_15, 1, VAR_13->dir);
 if (VAR_18 == 0) {
  VAR_18 = -VAR_5;
  goto err;
 }

 FUNC_7(&VAR_16, 0x00, sizeof(VAR_16));

 VAR_16.device_fc = VAR_12;
 if (VAR_8) {
  VAR_16.src_maxburst = 16;
  VAR_16.src_addr = VAR_7->base_dma + VAR_9;
  VAR_16.slave_id = VAR_7->data_crci;
 } else {
  VAR_16.dst_maxburst = 16;
  VAR_16.dst_addr = VAR_7->base_dma + VAR_9;
  VAR_16.slave_id = VAR_7->cmd_crci;
 }

 VAR_18 = FUNC_3(VAR_7->chan, &VAR_16);
 if (VAR_18) {
  FUNC_0(VAR_7->dev, "failed to configure dma channel\n");
  goto err;
 }

 VAR_14 = FUNC_2(VAR_7->chan, VAR_15, 1, VAR_17, 0);
 if (!VAR_14) {
  FUNC_0(VAR_7->dev, "failed to prepare desc\n");
  VAR_18 = -VAR_4;
  goto err;
 }

 VAR_13->dma_desc = VAR_14;

 FUNC_6(&VAR_13->node, &VAR_7->desc_list);

 return 0;
err:
 FUNC_4(VAR_13);

 return VAR_18;
}
