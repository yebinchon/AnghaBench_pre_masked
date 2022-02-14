
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lan743x_tx_descriptor {int dummy; } ;
struct lan743x_tx_buffer_info {int dummy; } ;
struct lan743x_tx {int ring_size; size_t ring_allocation_size; int head_dma_ptr; void* head_cpu_ptr; TYPE_1__* adapter; struct lan743x_tx_buffer_info* buffer_info; void* ring_dma_ptr; struct lan743x_tx_descriptor* ring_cpu_ptr; } ;
typedef void* dma_addr_t ;
struct TYPE_2__ {int pdev; } ;


 size_t FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_1 (int,int,int ) ;
 int FUNC_2 (struct lan743x_tx*) ;
 void* FUNC_3 (int ,int,void**) ;

__attribute__((used)) static int FUNC_4(struct lan743x_tx *VAR_6)
{
 size_t VAR_7 = 0;
 void *VAR_8 = ((void*)0);
 dma_addr_t VAR_9;
 int VAR_10 = -VAR_1;

 VAR_6->ring_size = VAR_3;
 if (VAR_6->ring_size & ~VAR_5) {
  VAR_10 = -VAR_0;
  goto cleanup;
 }
 VAR_7 = FUNC_0(VAR_6->ring_size *
         sizeof(struct lan743x_tx_descriptor),
         VAR_4);
 VAR_9 = 0;
 VAR_8 = FUNC_3(VAR_6->adapter->pdev,
     VAR_7, &VAR_9);
 if (!VAR_8) {
  VAR_10 = -VAR_1;
  goto cleanup;
 }

 VAR_6->ring_allocation_size = VAR_7;
 VAR_6->ring_cpu_ptr = (struct lan743x_tx_descriptor *)VAR_8;
 VAR_6->ring_dma_ptr = VAR_9;

 VAR_8 = FUNC_1(VAR_6->ring_size, sizeof(*VAR_6->buffer_info), VAR_2);
 if (!VAR_8) {
  VAR_10 = -VAR_1;
  goto cleanup;
 }
 VAR_6->buffer_info = (struct lan743x_tx_buffer_info *)VAR_8;
 VAR_9 = 0;
 VAR_8 = FUNC_3(VAR_6->adapter->pdev,
     sizeof(*VAR_6->head_cpu_ptr), &VAR_9);
 if (!VAR_8) {
  VAR_10 = -VAR_1;
  goto cleanup;
 }

 VAR_6->head_cpu_ptr = VAR_8;
 VAR_6->head_dma_ptr = VAR_9;
 if (VAR_6->head_dma_ptr & 0x3) {
  VAR_10 = -VAR_1;
  goto cleanup;
 }

 return 0;

cleanup:
 FUNC_2(VAR_6);
 return VAR_10;
}
