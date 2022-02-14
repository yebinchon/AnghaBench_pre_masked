
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct gpmi_transfer {int sgl; int direction; int * cmdbuf; } ;
struct TYPE_2__ {int cur_cs; } ;
struct gpmi_nand_data {int dev; TYPE_1__ nand; } ;
struct dma_chan {int dummy; } ;
struct dma_async_tx_descriptor {int dummy; } ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,struct gpmi_nand_data*) ;
 int FUNC_4 (int ,struct gpmi_nand_data*) ;
 int FUNC_5 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (int ,int *,int,int ) ;
 struct dma_async_tx_descriptor* FUNC_7 (struct dma_chan*,int *,int,int ,int ) ;
 struct dma_chan* FUNC_8 (struct gpmi_nand_data*) ;
 struct gpmi_transfer* FUNC_9 (struct gpmi_nand_data*) ;
 int FUNC_10 (int *,int const*,int) ;
 struct dma_async_tx_descriptor* FUNC_11 (struct dma_chan*,int*,int ,int ,int ) ;
 int FUNC_12 (int *,int *,int) ;

__attribute__((used)) static struct dma_async_tx_descriptor *FUNC_13(
 struct gpmi_nand_data *VAR_9, u8 VAR_10, const u8 *VAR_11, int VAR_12)
{
 struct dma_chan *VAR_13 = FUNC_8(VAR_9);
 struct dma_async_tx_descriptor *VAR_14;
 struct gpmi_transfer *VAR_15;
 int VAR_16 = VAR_9->nand.cur_cs;
 u32 VAR_17[3];


 VAR_17[0] = FUNC_2(VAR_3)
  | VAR_1
  | FUNC_3(VAR_16, VAR_9)
  | FUNC_4(VAR_7, VAR_9)
  | FUNC_1(VAR_2)
  | VAR_0
  | FUNC_5(VAR_12 + 1);
 VAR_17[1] = 0;
 VAR_17[2] = 0;
 VAR_14 = FUNC_11(VAR_13, VAR_17, FUNC_0(VAR_17),
          VAR_6, 0);
 if (!VAR_14)
  return ((void*)0);

 VAR_15 = FUNC_9(VAR_9);
 if (!VAR_15)
  return ((void*)0);

 VAR_15->cmdbuf[0] = VAR_10;
 if (VAR_12)
  FUNC_10(&VAR_15->cmdbuf[1], VAR_11, VAR_12);

 FUNC_12(&VAR_15->sgl, VAR_15->cmdbuf, VAR_12 + 1);
 FUNC_6(VAR_9->dev, &VAR_15->sgl, 1, VAR_5);

 VAR_15->direction = VAR_5;

 VAR_14 = FUNC_7(VAR_13, &VAR_15->sgl, 1, VAR_4,
           VAR_8);
 return VAR_14;
}
