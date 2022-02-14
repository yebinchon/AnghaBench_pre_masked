
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct scatterlist {int dummy; } ;
struct mxs_auart_port {int dev; int rx_dma_buf; struct dma_chan* rx_dma_chan; struct scatterlist rx_sgl; } ;
struct dma_chan {int dummy; } ;
struct dma_async_tx_descriptor {struct mxs_auart_port* callback_param; int callback; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct dma_chan*) ;
 int FUNC_4 (int ,struct scatterlist*,int,int ) ;
 int VAR_8 ;
 struct dma_async_tx_descriptor* FUNC_5 (struct dma_chan*,struct scatterlist*,int,int ,int) ;
 int FUNC_6 (struct dma_async_tx_descriptor*) ;
 int FUNC_7 (struct scatterlist*,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct mxs_auart_port *VAR_9)
{
 struct dma_async_tx_descriptor *VAR_10;
 struct scatterlist *VAR_11 = &VAR_9->rx_sgl;
 struct dma_chan *VAR_12 = VAR_9->rx_dma_chan;
 u32 VAR_13[1];


 VAR_13[0] = VAR_0
  | FUNC_0(0x80)
  | FUNC_1(VAR_7);
 VAR_10 = FUNC_5(VAR_12, (struct scatterlist *)VAR_13,
     1, VAR_5, 0);
 if (!VAR_10) {
  FUNC_2(VAR_9->dev, "step 1 error\n");
  return -VAR_6;
 }


 FUNC_7(VAR_11, VAR_9->rx_dma_buf, VAR_7);
 FUNC_4(VAR_9->dev, VAR_11, 1, VAR_3);
 VAR_10 = FUNC_5(VAR_12, VAR_11, 1, VAR_2,
     VAR_4 | VAR_1);
 if (!VAR_10) {
  FUNC_2(VAR_9->dev, "step 2 error\n");
  return -1;
 }


 VAR_10->callback = VAR_8;
 VAR_10->callback_param = VAR_9;
 FUNC_6(VAR_10);
 FUNC_3(VAR_12);
 return 0;
}
