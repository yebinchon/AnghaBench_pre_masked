
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct hl_device {TYPE_1__* asic_funcs; } ;
struct hl_cq {int free_slots_cnt; scalar_t__ pi; scalar_t__ ci; int hw_queue_id; scalar_t__ kernel_address; struct hl_device* hdev; int bus_address; } ;
struct TYPE_2__ {void* (* asic_dma_alloc_coherent ) (struct hl_device*,scalar_t__,int *,int) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int ) ;
 void* FUNC_2 (struct hl_device*,scalar_t__,int *,int) ;

int FUNC_3(struct hl_device *VAR_6, struct hl_cq *VAR_7, u32 VAR_8)
{
 void *VAR_9;

 FUNC_0(VAR_3 > VAR_4);

 VAR_9 = VAR_6->asic_funcs->asic_dma_alloc_coherent(VAR_6, VAR_3,
    &VAR_7->bus_address, VAR_1 | VAR_5);
 if (!VAR_9)
  return -VAR_0;

 VAR_7->hdev = VAR_6;
 VAR_7->kernel_address = (u64) (uintptr_t) VAR_9;
 VAR_7->hw_queue_id = VAR_8;
 VAR_7->ci = 0;
 VAR_7->pi = 0;

 FUNC_1(&VAR_7->free_slots_cnt, VAR_2);

 return 0;
}
