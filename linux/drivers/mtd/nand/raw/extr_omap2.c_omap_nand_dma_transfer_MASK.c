
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_char ;
typedef scalar_t__ u32 ;
struct scatterlist {int dummy; } ;
struct TYPE_10__ {int options; } ;
struct TYPE_8__ {int gpmc_prefetch_status; } ;
struct omap_nand_info {TYPE_4__ nand; TYPE_5__* dma; int gpmc_cs; TYPE_2__ reg; int comp; TYPE_1__* pdev; } ;
struct mtd_info {int dummy; } ;
struct dma_async_tx_descriptor {int * callback_param; int callback; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
struct TYPE_11__ {TYPE_3__* device; } ;
struct TYPE_9__ {int dev; } ;
struct TYPE_7__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,char*,unsigned int) ;
 int FUNC_3 (TYPE_5__*) ;
 unsigned int FUNC_4 (int ,struct scatterlist*,int,int) ;
 int FUNC_5 (int ,struct scatterlist*,int,int) ;
 struct dma_async_tx_descriptor* FUNC_6 (TYPE_5__*,struct scatterlist*,unsigned int,int ,int) ;
 int FUNC_7 (struct dma_async_tx_descriptor*) ;
 int FUNC_8 (int *) ;
 unsigned long VAR_9 ;
 unsigned long FUNC_9 (int ) ;
 struct omap_nand_info* FUNC_10 (struct mtd_info*) ;
 int VAR_10 ;
 int FUNC_11 (int ,int ,int,unsigned int,int,struct omap_nand_info*) ;
 int FUNC_12 (int ,struct omap_nand_info*) ;
 int FUNC_13 (struct mtd_info*,int *,unsigned int) ;
 int FUNC_14 (struct mtd_info*,int *,unsigned int) ;
 int FUNC_15 (struct mtd_info*,int *,unsigned int) ;
 int FUNC_16 (struct mtd_info*,int *,unsigned int) ;
 scalar_t__ FUNC_17 (int ) ;
 int FUNC_18 (struct scatterlist*,void*,unsigned int) ;
 int FUNC_19 (void*) ;
 int FUNC_20 (int *) ;

__attribute__((used)) static inline int FUNC_21(struct mtd_info *VAR_11, void *VAR_12,
     unsigned int VAR_13, int VAR_14)
{
 struct omap_nand_info *VAR_15 = FUNC_10(VAR_11);
 struct dma_async_tx_descriptor *VAR_16;
 enum dma_data_direction VAR_17 = VAR_14 ? VAR_5 :
       VAR_2;
 struct scatterlist VAR_18;
 unsigned long VAR_19, VAR_20;
 unsigned VAR_21;
 int VAR_22;
 u32 VAR_23;

 if (!FUNC_19(VAR_12))
  goto out_copy;

 FUNC_18(&VAR_18, VAR_12, VAR_13);
 VAR_21 = FUNC_4(VAR_15->dma->device->dev, &VAR_18, 1, VAR_17);
 if (VAR_21 == 0) {
  FUNC_2(&VAR_15->pdev->dev,
   "Couldn't DMA map a %d byte buffer\n", VAR_13);
  goto out_copy;
 }

 VAR_16 = FUNC_6(VAR_15->dma, &VAR_18, VAR_21,
  VAR_14 ? VAR_3 : VAR_1,
  VAR_4 | VAR_0);
 if (!VAR_16)
  goto out_copy_unmap;

 VAR_16->callback = VAR_10;
 VAR_16->callback_param = &VAR_15->comp;
 FUNC_7(VAR_16);

 FUNC_8(&VAR_15->comp);


 FUNC_3(VAR_15->dma);


 VAR_22 = FUNC_11(VAR_15->gpmc_cs,
  VAR_8, 0x1, VAR_13, VAR_14, VAR_15);
 if (VAR_22)

  goto out_copy_unmap;

 FUNC_20(&VAR_15->comp);
 VAR_19 = 0;
 VAR_20 = (VAR_9 * FUNC_9(VAR_7));

 do {
  FUNC_1();
  VAR_23 = FUNC_17(VAR_15->reg.gpmc_prefetch_status);
  VAR_23 = FUNC_0(VAR_23);
 } while (VAR_23 && (VAR_19++ < VAR_20));


 FUNC_12(VAR_15->gpmc_cs, VAR_15);

 FUNC_5(VAR_15->dma->device->dev, &VAR_18, 1, VAR_17);
 return 0;

out_copy_unmap:
 FUNC_5(VAR_15->dma->device->dev, &VAR_18, 1, VAR_17);
out_copy:
 if (VAR_15->nand.options & VAR_6)
  VAR_14 == 0 ? FUNC_13(VAR_11, (u_char *) VAR_12, VAR_13)
   : FUNC_15(VAR_11, (u_char *) VAR_12, VAR_13);
 else
  VAR_14 == 0 ? FUNC_14(VAR_11, (u_char *) VAR_12, VAR_13)
   : FUNC_16(VAR_11, (u_char *) VAR_12, VAR_13);
 return 0;
}
