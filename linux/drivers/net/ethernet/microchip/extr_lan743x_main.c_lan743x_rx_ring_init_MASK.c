
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct lan743x_rx_descriptor {int dummy; } ;
struct lan743x_rx_buffer_info {int dummy; } ;
struct lan743x_rx {int ring_size; size_t ring_allocation_size; int head_dma_ptr; scalar_t__ last_head; void* head_cpu_ptr; TYPE_1__* adapter; struct lan743x_rx_buffer_info* buffer_info; void* ring_dma_ptr; struct lan743x_rx_descriptor* ring_cpu_ptr; } ;
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
 struct sk_buff* FUNC_2 (struct lan743x_rx*) ;
 int FUNC_3 (struct lan743x_rx*,int,struct sk_buff*) ;
 int FUNC_4 (struct lan743x_rx*) ;
 void* FUNC_5 (int ,int,void**) ;

__attribute__((used)) static int FUNC_6(struct lan743x_rx *VAR_6)
{
 size_t VAR_7 = 0;
 dma_addr_t VAR_8 = 0;
 void *VAR_9 = ((void*)0);
 int VAR_10 = -VAR_1;
 int VAR_11 = 0;

 VAR_6->ring_size = VAR_3;
 if (VAR_6->ring_size <= 1) {
  VAR_10 = -VAR_0;
  goto cleanup;
 }
 if (VAR_6->ring_size & ~VAR_5) {
  VAR_10 = -VAR_0;
  goto cleanup;
 }
 VAR_7 = FUNC_0(VAR_6->ring_size *
         sizeof(struct lan743x_rx_descriptor),
         VAR_4);
 VAR_8 = 0;
 VAR_9 = FUNC_5(VAR_6->adapter->pdev,
     VAR_7, &VAR_8);
 if (!VAR_9) {
  VAR_10 = -VAR_1;
  goto cleanup;
 }
 VAR_6->ring_allocation_size = VAR_7;
 VAR_6->ring_cpu_ptr = (struct lan743x_rx_descriptor *)VAR_9;
 VAR_6->ring_dma_ptr = VAR_8;

 VAR_9 = FUNC_1(VAR_6->ring_size, sizeof(*VAR_6->buffer_info),
     VAR_2);
 if (!VAR_9) {
  VAR_10 = -VAR_1;
  goto cleanup;
 }
 VAR_6->buffer_info = (struct lan743x_rx_buffer_info *)VAR_9;
 VAR_8 = 0;
 VAR_9 = FUNC_5(VAR_6->adapter->pdev,
     sizeof(*VAR_6->head_cpu_ptr), &VAR_8);
 if (!VAR_9) {
  VAR_10 = -VAR_1;
  goto cleanup;
 }

 VAR_6->head_cpu_ptr = VAR_9;
 VAR_6->head_dma_ptr = VAR_8;
 if (VAR_6->head_dma_ptr & 0x3) {
  VAR_10 = -VAR_1;
  goto cleanup;
 }

 VAR_6->last_head = 0;
 for (VAR_11 = 0; VAR_11 < VAR_6->ring_size; VAR_11++) {
  struct sk_buff *VAR_12 = FUNC_2(VAR_6);

  VAR_10 = FUNC_3(VAR_6, VAR_11, VAR_12);
  if (VAR_10)
   goto cleanup;
 }
 return 0;

cleanup:
 FUNC_4(VAR_6);
 return VAR_10;
}
