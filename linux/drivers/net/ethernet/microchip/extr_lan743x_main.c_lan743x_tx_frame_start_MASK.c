
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lan743x_tx_descriptor {unsigned int data3; int data2; int data1; } ;
struct lan743x_tx_buffer_info {unsigned int buffer_length; int flags; int dma_ptr; int * skb; } ;
struct lan743x_tx {size_t frame_first; size_t last_tail; size_t frame_tail; unsigned int frame_data0; struct lan743x_tx_buffer_info* buffer_info; struct lan743x_tx_descriptor* ring_cpu_ptr; int frame_flags; struct lan743x_adapter* adapter; } ;
struct lan743x_adapter {TYPE_1__* pdev; } ;
struct device {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (struct device*,unsigned char*,unsigned int,int ) ;
 scalar_t__ FUNC_3 (struct device*,int ) ;

__attribute__((used)) static int FUNC_4(struct lan743x_tx *VAR_13,
      unsigned char *VAR_14,
      unsigned int VAR_15,
      unsigned int VAR_16,
      bool VAR_17,
      bool VAR_18)
{



 struct lan743x_tx_descriptor *VAR_19 = ((void*)0);
 struct lan743x_tx_buffer_info *VAR_20 = ((void*)0);
 struct lan743x_adapter *VAR_21 = VAR_13->adapter;
 struct device *VAR_22 = &VAR_21->pdev->dev;
 dma_addr_t VAR_23;

 VAR_13->frame_flags |= VAR_12;
 VAR_13->frame_first = VAR_13->last_tail;
 VAR_13->frame_tail = VAR_13->frame_first;

 VAR_19 = &VAR_13->ring_cpu_ptr[VAR_13->frame_tail];
 VAR_20 = &VAR_13->buffer_info[VAR_13->frame_tail];
 VAR_23 = FUNC_2(VAR_22, VAR_14, VAR_15,
     VAR_0);
 if (FUNC_3(VAR_22, VAR_23))
  return -VAR_1;

 VAR_19->data1 = FUNC_1(VAR_23);
 VAR_19->data2 = FUNC_0(VAR_23);
 VAR_19->data3 = (VAR_16 << 16) &
  VAR_11;

 VAR_20->skb = ((void*)0);
 VAR_20->dma_ptr = VAR_23;
 VAR_20->buffer_length = VAR_15;
 VAR_20->flags |= VAR_2;

 VAR_13->frame_data0 = (VAR_15 &
  VAR_3) |
  VAR_4 |
  VAR_6 |
  VAR_5;
 if (VAR_17)
  VAR_13->frame_data0 |= VAR_10;

 if (VAR_18)
  VAR_13->frame_data0 |= VAR_7 |
       VAR_8 |
       VAR_9;


 return 0;
}
