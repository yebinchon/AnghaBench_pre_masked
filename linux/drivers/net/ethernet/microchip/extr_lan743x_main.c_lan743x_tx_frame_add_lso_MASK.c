
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lan743x_tx_descriptor {unsigned int data0; scalar_t__ data3; scalar_t__ data2; scalar_t__ data1; } ;
struct lan743x_tx_buffer_info {int flags; scalar_t__ buffer_length; scalar_t__ dma_ptr; int * skb; } ;
struct lan743x_tx {unsigned int frame_data0; size_t frame_tail; struct lan743x_tx_buffer_info* buffer_info; struct lan743x_tx_descriptor* ring_cpu_ptr; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 size_t FUNC_0 (struct lan743x_tx*,size_t) ;

__attribute__((used)) static void FUNC_1(struct lan743x_tx *VAR_7,
         unsigned int VAR_8,
         int VAR_9)
{



 struct lan743x_tx_descriptor *VAR_10 = ((void*)0);
 struct lan743x_tx_buffer_info *VAR_11 = ((void*)0);


 VAR_7->frame_data0 |= VAR_2;
 if (VAR_9 <= 0) {
  VAR_7->frame_data0 |= VAR_6;
  VAR_7->frame_data0 |= VAR_5;
 }
 VAR_10 = &VAR_7->ring_cpu_ptr[VAR_7->frame_tail];
 VAR_10->data0 = VAR_7->frame_data0;


 VAR_7->frame_tail = FUNC_0(VAR_7, VAR_7->frame_tail);
 VAR_10 = &VAR_7->ring_cpu_ptr[VAR_7->frame_tail];
 VAR_11 = &VAR_7->buffer_info[VAR_7->frame_tail];


 VAR_10->data1 = 0;
 VAR_10->data2 = 0;
 VAR_10->data3 = 0;

 VAR_11->skb = ((void*)0);
 VAR_11->dma_ptr = 0;
 VAR_11->buffer_length = 0;
 VAR_11->flags |= VAR_0;

 VAR_7->frame_data0 = (VAR_8 & VAR_4) |
     VAR_1 |
     VAR_3;


}
