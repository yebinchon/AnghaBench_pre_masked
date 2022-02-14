
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct scatterlist {int dummy; } ;
struct mxs_auart_port {int dev; int tx_dma_buf; struct dma_chan* tx_dma_chan; struct scatterlist tx_sgl; } ;
struct dma_chan {int dummy; } ;
struct dma_async_tx_descriptor {struct mxs_auart_port* callback_param; int callback; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct dma_chan*) ;
 int FUNC_3 (int ,struct scatterlist*,int,int ) ;
 int VAR_6 ;
 struct dma_async_tx_descriptor* FUNC_4 (struct dma_chan*,struct scatterlist*,int,int ,int) ;
 int FUNC_5 (struct dma_async_tx_descriptor*) ;
 int FUNC_6 (struct scatterlist*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct mxs_auart_port *VAR_7, int VAR_8)
{
 struct dma_async_tx_descriptor *VAR_9;
 struct scatterlist *VAR_10 = &VAR_7->tx_sgl;
 struct dma_chan *VAR_11 = VAR_7->tx_dma_chan;
 u32 VAR_12;


 VAR_12 = FUNC_0(VAR_8);
 VAR_9 = FUNC_4(VAR_11, (struct scatterlist *)&VAR_12,
     1, VAR_4, 0);
 if (!VAR_9) {
  FUNC_1(VAR_7->dev, "step 1 error\n");
  return -VAR_5;
 }


 FUNC_6(VAR_10, VAR_7->tx_dma_buf, VAR_8);
 FUNC_3(VAR_7->dev, VAR_10, 1, VAR_3);
 VAR_9 = FUNC_4(VAR_11, VAR_10,
   1, VAR_1, VAR_2 | VAR_0);
 if (!VAR_9) {
  FUNC_1(VAR_7->dev, "step 2 error\n");
  return -VAR_5;
 }


 VAR_9->callback = VAR_6;
 VAR_9->callback_param = VAR_7;
 FUNC_5(VAR_9);
 FUNC_2(VAR_11);
 return 0;
}
