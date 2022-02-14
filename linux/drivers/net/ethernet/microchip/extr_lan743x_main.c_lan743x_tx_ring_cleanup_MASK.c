
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lan743x_tx {void* ring_cpu_ptr; int ring_allocation_size; scalar_t__ ring_size; scalar_t__ ring_dma_ptr; TYPE_1__* adapter; int * buffer_info; scalar_t__ head_dma_ptr; int * head_cpu_ptr; } ;
struct TYPE_2__ {int pdev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int,void*,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct lan743x_tx *VAR_0)
{
 if (VAR_0->head_cpu_ptr) {
  FUNC_1(VAR_0->adapter->pdev,
        sizeof(*VAR_0->head_cpu_ptr),
        (void *)(VAR_0->head_cpu_ptr),
        VAR_0->head_dma_ptr);
  VAR_0->head_cpu_ptr = ((void*)0);
  VAR_0->head_dma_ptr = 0;
 }
 FUNC_0(VAR_0->buffer_info);
 VAR_0->buffer_info = ((void*)0);

 if (VAR_0->ring_cpu_ptr) {
  FUNC_1(VAR_0->adapter->pdev,
        VAR_0->ring_allocation_size,
        VAR_0->ring_cpu_ptr,
        VAR_0->ring_dma_ptr);
  VAR_0->ring_allocation_size = 0;
  VAR_0->ring_cpu_ptr = ((void*)0);
  VAR_0->ring_dma_ptr = 0;
 }
 VAR_0->ring_size = 0;
}
