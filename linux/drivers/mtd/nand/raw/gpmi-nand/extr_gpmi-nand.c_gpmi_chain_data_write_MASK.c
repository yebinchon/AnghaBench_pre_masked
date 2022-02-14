
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int dma_address; } ;
struct gpmi_transfer {TYPE_2__ sgl; int direction; } ;
struct TYPE_4__ {int cur_cs; } ;
struct gpmi_nand_data {int auxiliary_phys; scalar_t__ bch; TYPE_1__ nand; } ;
struct dma_chan {int dummy; } ;
struct dma_async_tx_descriptor {int dummy; } ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,struct gpmi_nand_data*) ;
 int FUNC_4 (int ,struct gpmi_nand_data*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct dma_async_tx_descriptor* FUNC_8 (struct dma_chan*,TYPE_2__*,int,int ,int ) ;
 struct dma_chan* FUNC_9 (struct gpmi_nand_data*) ;
 struct gpmi_transfer* FUNC_10 (struct gpmi_nand_data*) ;
 struct dma_async_tx_descriptor* FUNC_11 (struct dma_chan*,int*,int ,int ,int ) ;
 int FUNC_12 (struct gpmi_nand_data*,void const*,int,TYPE_2__*,int ) ;

__attribute__((used)) static struct dma_async_tx_descriptor *FUNC_13(
 struct gpmi_nand_data *VAR_12, const void *VAR_13, int VAR_14)
{
 struct dma_chan *VAR_15 = FUNC_9(VAR_12);
 struct dma_async_tx_descriptor *VAR_16;
 struct gpmi_transfer *VAR_17;
 u32 VAR_18[6] = {};

 VAR_17 = FUNC_10(VAR_12);
 if (!VAR_17)
  return ((void*)0);

 VAR_17->direction = VAR_8;

 FUNC_12(VAR_12, VAR_13, VAR_14, &VAR_17->sgl, VAR_8);

 VAR_18[0] = FUNC_2(VAR_3)
  | VAR_0
  | FUNC_3(VAR_12->nand.cur_cs, VAR_12)
  | FUNC_4(VAR_10, VAR_12)
  | FUNC_1(VAR_2)
  | FUNC_5(VAR_14);

 if (VAR_12->bch) {
  VAR_18[2] = VAR_1
   | FUNC_7(VAR_6)
   | FUNC_6(VAR_5 |
     VAR_4);
  VAR_18[3] = VAR_14;
  VAR_18[4] = VAR_17->sgl.dma_address;
  VAR_18[5] = VAR_12->auxiliary_phys;
 }

 VAR_16 = FUNC_11(VAR_15, VAR_18, FUNC_0(VAR_18),
          VAR_9,
          (VAR_12->bch ? VAR_11 : 0));
 if (!VAR_16)
  return ((void*)0);

 if (!VAR_12->bch)
  VAR_16 = FUNC_8(VAR_15, &VAR_17->sgl, 1,
            VAR_7,
            VAR_11);

 return VAR_16;
}
