
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tmio_mmc_host {int dma_on; int sg_len; TYPE_1__* pdev; struct scatterlist* sg_ptr; } ;
struct scatterlist {int dummy; } ;
struct mmc_data {int flags; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int *,struct scatterlist*,int ,int ) ;
 int FUNC_2 (int *,struct scatterlist*,int ,int ) ;
 int VAR_10 ;
 int FUNC_3 (struct mmc_data*) ;
 int FUNC_4 (struct tmio_mmc_host*,int ,int ) ;
 int FUNC_5 (struct tmio_mmc_host*,int) ;
 int FUNC_6 (struct scatterlist*) ;
 scalar_t__ FUNC_7 (int ,int *) ;
 scalar_t__ FUNC_8 (int ,int *) ;

__attribute__((used)) static void
FUNC_9(struct tmio_mmc_host *VAR_11,
         struct mmc_data *VAR_12)
{
 struct scatterlist *VAR_13 = VAR_11->sg_ptr;
 u32 VAR_14 = VAR_3;

 if (!FUNC_8(VAR_7, &VAR_10))
  VAR_14 |= VAR_2;

 if (!FUNC_1(&VAR_11->pdev->dev, VAR_13, VAR_11->sg_len,
   FUNC_3(VAR_12)))
  goto force_pio;


 if (!FUNC_0(FUNC_6(VAR_13), 8))
  goto force_pio_with_unmap;

 if (VAR_12->flags & VAR_6) {
  VAR_14 |= VAR_5;
  if (FUNC_8(VAR_8, &VAR_10) &&
      FUNC_7(VAR_9, &VAR_10))
   goto force_pio_with_unmap;
 } else {
  VAR_14 |= VAR_4;
 }

 FUNC_5(VAR_11, 1);


 FUNC_4(VAR_11, VAR_0,
         VAR_14);
 FUNC_4(VAR_11, VAR_1,
         FUNC_6(VAR_13));

 VAR_11->dma_on = 1;

 return;

force_pio_with_unmap:
 FUNC_2(&VAR_11->pdev->dev, VAR_13, VAR_11->sg_len, FUNC_3(VAR_12));

force_pio:
 FUNC_5(VAR_11, 0);
}
