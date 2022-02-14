
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lan743x_rx_descriptor {int data0; scalar_t__ data3; int data2; int data1; } ;
struct lan743x_rx_buffer_info {int buffer_length; int dma_ptr; } ;
struct lan743x_rx {struct lan743x_rx_buffer_info* buffer_info; struct lan743x_rx_descriptor* ring_cpu_ptr; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(struct lan743x_rx *VAR_2, int VAR_3)
{
 struct lan743x_rx_buffer_info *VAR_4;
 struct lan743x_rx_descriptor *VAR_5;

 VAR_5 = &VAR_2->ring_cpu_ptr[VAR_3];
 VAR_4 = &VAR_2->buffer_info[VAR_3];

 VAR_5->data1 = FUNC_1(VAR_4->dma_ptr);
 VAR_5->data2 = FUNC_0(VAR_4->dma_ptr);
 VAR_5->data3 = 0;
 VAR_5->data0 = (VAR_1 |
       ((VAR_4->buffer_length) &
       VAR_0));
}
