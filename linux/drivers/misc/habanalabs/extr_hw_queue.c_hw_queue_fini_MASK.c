
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hl_hw_queue {scalar_t__ queue_type; int bus_address; scalar_t__ kernel_address; int shadow_queue; int valid; } ;
struct hl_device {TYPE_1__* asic_funcs; } ;
struct TYPE_2__ {int (* asic_dma_free_coherent ) (struct hl_device*,int ,void*,int ) ;int (* cpu_accessible_dma_pool_free ) (struct hl_device*,int ,void*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct hl_device*,int ,void*) ;
 int FUNC_2 (struct hl_device*,int ,void*,int ) ;

__attribute__((used)) static void FUNC_3(struct hl_device *VAR_3, struct hl_hw_queue *VAR_4)
{
 if (!VAR_4->valid)
  return;
 if (VAR_4->queue_type == VAR_2)
  return;

 FUNC_0(VAR_4->shadow_queue);

 if (VAR_4->queue_type == VAR_1)
  VAR_3->asic_funcs->cpu_accessible_dma_pool_free(VAR_3,
     VAR_0,
     (void *) (uintptr_t) VAR_4->kernel_address);
 else
  VAR_3->asic_funcs->asic_dma_free_coherent(VAR_3,
     VAR_0,
     (void *) (uintptr_t) VAR_4->kernel_address,
     VAR_4->bus_address);
}
