
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hl_device {int dma_pool; int cpu_accessible_dma_address; scalar_t__ cpu_accessible_dma_mem; TYPE_2__* asic_funcs; int cpu_accessible_dma_pool; int dev; TYPE_1__* pdev; struct goya_device* asic_specific; } ;
struct goya_device {int hw_queues_lock; void* ic_clk; void* tpc_clk; void* mme_clk; int ddr_bar_cur_addr; } ;
struct TYPE_4__ {int (* asic_dma_free_coherent ) (struct hl_device*,int ,scalar_t__,int ) ;scalar_t__ (* asic_dma_alloc_coherent ) (struct hl_device*,int ,int *,int) ;} ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *,int ,int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,uintptr_t,int ,int) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct goya_device*) ;
 struct goya_device* FUNC_10 (int,int) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (struct hl_device*,int ,int *,int) ;
 int FUNC_13 (struct hl_device*,int ,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_14(struct hl_device *VAR_8)
{
 struct goya_device *VAR_9;
 int VAR_10;


 VAR_9 = FUNC_10(sizeof(*VAR_9), VAR_3);
 if (!VAR_9)
  return -VAR_2;


 VAR_9->ddr_bar_cur_addr = VAR_0;

 VAR_9->mme_clk = VAR_5;
 VAR_9->tpc_clk = VAR_5;
 VAR_9->ic_clk = VAR_5;

 VAR_8->asic_specific = VAR_9;


 VAR_8->dma_pool = FUNC_3(FUNC_2(VAR_8->dev),
   &VAR_8->pdev->dev, VAR_4, 8, 0);
 if (!VAR_8->dma_pool) {
  FUNC_1(VAR_8->dev, "failed to create DMA pool\n");
  VAR_10 = -VAR_2;
  goto free_goya_device;
 }

 VAR_8->cpu_accessible_dma_mem =
   VAR_8->asic_funcs->asic_dma_alloc_coherent(VAR_8,
     VAR_6,
     &VAR_8->cpu_accessible_dma_address,
     VAR_3 | VAR_7);

 if (!VAR_8->cpu_accessible_dma_mem) {
  VAR_10 = -VAR_2;
  goto free_dma_pool;
 }

 FUNC_0(VAR_8->dev, "cpu accessible memory at bus address %pad\n",
  &VAR_8->cpu_accessible_dma_address);

 VAR_8->cpu_accessible_dma_pool = FUNC_6(FUNC_8(32), -1);
 if (!VAR_8->cpu_accessible_dma_pool) {
  FUNC_1(VAR_8->dev,
   "Failed to create CPU accessible DMA pool\n");
  VAR_10 = -VAR_2;
  goto free_cpu_dma_mem;
 }

 VAR_10 = FUNC_5(VAR_8->cpu_accessible_dma_pool,
    (uintptr_t) VAR_8->cpu_accessible_dma_mem,
    VAR_6, -1);
 if (VAR_10) {
  FUNC_1(VAR_8->dev,
   "Failed to add memory to CPU accessible DMA pool\n");
  VAR_10 = -VAR_1;
  goto free_cpu_accessible_dma_pool;
 }

 FUNC_11(&VAR_9->hw_queues_lock);

 return 0;

free_cpu_accessible_dma_pool:
 FUNC_7(VAR_8->cpu_accessible_dma_pool);
free_cpu_dma_mem:
 VAR_8->asic_funcs->asic_dma_free_coherent(VAR_8,
   VAR_6,
   VAR_8->cpu_accessible_dma_mem,
   VAR_8->cpu_accessible_dma_address);
free_dma_pool:
 FUNC_4(VAR_8->dma_pool);
free_goya_device:
 FUNC_9(VAR_9);

 return VAR_10;
}
