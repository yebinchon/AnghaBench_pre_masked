
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int cur_cs; } ;
struct gpmi_nand_data {TYPE_1__ nand; } ;
struct dma_chan {int dummy; } ;
struct dma_async_tx_descriptor {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct gpmi_nand_data*) ;
 int FUNC_3 (int ,struct gpmi_nand_data*) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct dma_chan* FUNC_5 (struct gpmi_nand_data*) ;
 struct dma_async_tx_descriptor* FUNC_6 (struct dma_chan*,int*,int,int ,int) ;

__attribute__((used)) static struct dma_async_tx_descriptor *FUNC_7(
 struct gpmi_nand_data *VAR_7)
{
 struct dma_chan *VAR_8 = FUNC_5(VAR_7);
 u32 VAR_9[2];

 VAR_9[0] = FUNC_1(VAR_2)
  | VAR_0
  | FUNC_2(VAR_7->nand.cur_cs, VAR_7)
  | FUNC_3(VAR_4, VAR_7)
  | FUNC_0(VAR_1)
  | FUNC_4(0);
 VAR_9[1] = 0;

 return FUNC_6(VAR_8, VAR_9, 2, VAR_3,
    VAR_5 | VAR_6);
}
