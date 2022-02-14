
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hl_device {int dma_pool; int cpu_accessible_dma_address; int cpu_accessible_dma_mem; TYPE_1__* asic_funcs; int cpu_accessible_dma_pool; struct goya_device* asic_specific; } ;
struct goya_device {int dummy; } ;
struct TYPE_2__ {int (* asic_dma_free_coherent ) (struct hl_device*,int ,int ,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct goya_device*) ;
 int FUNC_3 (struct hl_device*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct hl_device *VAR_1)
{
 struct goya_device *VAR_2 = VAR_1->asic_specific;

 FUNC_1(VAR_1->cpu_accessible_dma_pool);

 VAR_1->asic_funcs->asic_dma_free_coherent(VAR_1,
   VAR_0,
   VAR_1->cpu_accessible_dma_mem,
   VAR_1->cpu_accessible_dma_address);

 FUNC_0(VAR_1->dma_pool);

 FUNC_2(VAR_2);

 return 0;
}
