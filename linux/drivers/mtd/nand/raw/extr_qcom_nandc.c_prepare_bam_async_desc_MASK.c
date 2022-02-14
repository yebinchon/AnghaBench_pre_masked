
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct qcom_nand_controller {int desc_list; struct dma_chan* cmd_chan; int dev; struct dma_chan* tx_chan; struct bam_transaction* bam_txn; } ;
struct dma_chan {int dummy; } ;
struct dma_async_tx_descriptor {int dummy; } ;
struct desc_info {unsigned int sgl_cnt; int node; struct dma_async_tx_descriptor* dma_desc; void* dir; struct scatterlist* bam_sgl; } ;
struct bam_transaction {size_t cmd_sgl_start; unsigned int cmd_sgl_pos; size_t tx_sgl_start; unsigned int tx_sgl_pos; size_t rx_sgl_start; unsigned int rx_sgl_pos; struct dma_async_tx_descriptor* last_data_desc; struct dma_async_tx_descriptor* last_cmd_desc; struct scatterlist* data_sgl; struct scatterlist* cmd_sgl; } ;
typedef enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,struct scatterlist*,unsigned int,void*) ;
 int FUNC_2 (int ,struct scatterlist*,unsigned int,void*) ;
 struct dma_async_tx_descriptor* FUNC_3 (struct dma_chan*,struct scatterlist*,unsigned int,int,unsigned long) ;
 int FUNC_4 (struct desc_info*) ;
 struct desc_info* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (struct scatterlist*) ;

__attribute__((used)) static int FUNC_8(struct qcom_nand_controller *VAR_7,
      struct dma_chan *VAR_8,
      unsigned long VAR_9)
{
 struct desc_info *VAR_10;
 struct scatterlist *VAR_11;
 unsigned int VAR_12;
 int VAR_13;
 struct bam_transaction *VAR_14 = VAR_7->bam_txn;
 enum dma_transfer_direction VAR_15;
 struct dma_async_tx_descriptor *VAR_16;

 VAR_10 = FUNC_5(sizeof(*VAR_10), VAR_6);
 if (!VAR_10)
  return -VAR_5;

 if (VAR_8 == VAR_7->cmd_chan) {
  VAR_11 = &VAR_14->cmd_sgl[VAR_14->cmd_sgl_start];
  VAR_12 = VAR_14->cmd_sgl_pos - VAR_14->cmd_sgl_start;
  VAR_14->cmd_sgl_start = VAR_14->cmd_sgl_pos;
  VAR_15 = VAR_2;
  VAR_10->dir = VAR_3;
 } else if (VAR_8 == VAR_7->tx_chan) {
  VAR_11 = &VAR_14->data_sgl[VAR_14->tx_sgl_start];
  VAR_12 = VAR_14->tx_sgl_pos - VAR_14->tx_sgl_start;
  VAR_14->tx_sgl_start = VAR_14->tx_sgl_pos;
  VAR_15 = VAR_2;
  VAR_10->dir = VAR_3;
 } else {
  VAR_11 = &VAR_14->data_sgl[VAR_14->rx_sgl_start];
  VAR_12 = VAR_14->rx_sgl_pos - VAR_14->rx_sgl_start;
  VAR_14->rx_sgl_start = VAR_14->rx_sgl_pos;
  VAR_15 = VAR_0;
  VAR_10->dir = VAR_1;
 }

 FUNC_7(VAR_11 + VAR_12 - 1);
 VAR_13 = FUNC_1(VAR_7->dev, VAR_11, VAR_12, VAR_10->dir);
 if (VAR_13 == 0) {
  FUNC_0(VAR_7->dev, "failure in mapping desc\n");
  FUNC_4(VAR_10);
  return -VAR_5;
 }

 VAR_10->sgl_cnt = VAR_12;
 VAR_10->bam_sgl = VAR_11;

 VAR_16 = FUNC_3(VAR_8, VAR_11, VAR_12, VAR_15,
        VAR_9);

 if (!VAR_16) {
  FUNC_0(VAR_7->dev, "failure in prep desc\n");
  FUNC_2(VAR_7->dev, VAR_11, VAR_12, VAR_10->dir);
  FUNC_4(VAR_10);
  return -VAR_4;
 }

 VAR_10->dma_desc = VAR_16;


 if (VAR_8 == VAR_7->cmd_chan)
  VAR_14->last_cmd_desc = VAR_16;
 else
  VAR_14->last_data_desc = VAR_16;

 FUNC_6(&VAR_10->node, &VAR_7->desc_list);

 return 0;
}
