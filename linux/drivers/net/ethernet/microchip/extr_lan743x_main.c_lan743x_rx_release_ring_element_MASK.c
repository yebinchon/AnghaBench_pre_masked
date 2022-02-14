
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lan743x_rx_descriptor {int * skb; scalar_t__ dma_ptr; int buffer_length; } ;
struct lan743x_rx_buffer_info {int * skb; scalar_t__ dma_ptr; int buffer_length; } ;
struct lan743x_rx {TYPE_2__* adapter; struct lan743x_rx_descriptor* buffer_info; struct lan743x_rx_descriptor* ring_cpu_ptr; } ;
struct TYPE_4__ {TYPE_1__* pdev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,scalar_t__,int ,int ) ;
 int FUNC_2 (struct lan743x_rx_descriptor*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct lan743x_rx *VAR_1, int VAR_2)
{
 struct lan743x_rx_buffer_info *VAR_3;
 struct lan743x_rx_descriptor *VAR_4;

 VAR_4 = &VAR_1->ring_cpu_ptr[VAR_2];
 VAR_3 = &VAR_1->buffer_info[VAR_2];

 FUNC_2(VAR_4, 0, sizeof(*VAR_4));

 if (VAR_3->dma_ptr) {
  FUNC_1(&VAR_1->adapter->pdev->dev,
     VAR_3->dma_ptr,
     VAR_3->buffer_length,
     VAR_0);
  VAR_3->dma_ptr = 0;
 }

 if (VAR_3->skb) {
  FUNC_0(VAR_3->skb);
  VAR_3->skb = ((void*)0);
 }

 FUNC_2(VAR_3, 0, sizeof(*VAR_3));
}
