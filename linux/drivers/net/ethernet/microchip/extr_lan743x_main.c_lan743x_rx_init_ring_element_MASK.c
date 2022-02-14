
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int data; } ;
struct lan743x_rx_descriptor {int data0; scalar_t__ data3; int data2; int data1; } ;
struct lan743x_rx_buffer_info {int buffer_length; struct sk_buff* skb; scalar_t__ dma_ptr; } ;
struct lan743x_rx {TYPE_2__* adapter; struct lan743x_rx_buffer_info* buffer_info; struct lan743x_rx_descriptor* ring_cpu_ptr; } ;
struct TYPE_4__ {TYPE_1__* pdev; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int *,int ,int,int ) ;
 scalar_t__ FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_5(struct lan743x_rx *VAR_7, int VAR_8,
     struct sk_buff *VAR_9)
{
 struct lan743x_rx_buffer_info *VAR_10;
 struct lan743x_rx_descriptor *VAR_11;
 int VAR_12 = 0;

 VAR_12 = (VAR_3 + VAR_2 + 4 + VAR_6);
 VAR_11 = &VAR_7->ring_cpu_ptr[VAR_8];
 VAR_10 = &VAR_7->buffer_info[VAR_8];
 VAR_10->skb = VAR_9;
 if (!(VAR_10->skb))
  return -VAR_1;
 VAR_10->dma_ptr = FUNC_2(&VAR_7->adapter->pdev->dev,
           VAR_10->skb->data,
           VAR_12,
           VAR_0);
 if (FUNC_3(&VAR_7->adapter->pdev->dev,
         VAR_10->dma_ptr)) {
  VAR_10->dma_ptr = 0;
  return -VAR_1;
 }

 VAR_10->buffer_length = VAR_12;
 VAR_11->data1 = FUNC_1(VAR_10->dma_ptr);
 VAR_11->data2 = FUNC_0(VAR_10->dma_ptr);
 VAR_11->data3 = 0;
 VAR_11->data0 = (VAR_5 |
       (VAR_12 & VAR_4));
 FUNC_4(VAR_10->skb, VAR_6);

 return 0;
}
