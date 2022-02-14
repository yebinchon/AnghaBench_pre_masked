
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lan743x_tx_descriptor {unsigned int data0; unsigned int data3; int data2; int data1; } ;
struct lan743x_tx_buffer_info {unsigned int buffer_length; int flags; int dma_ptr; int * skb; } ;
struct lan743x_tx {size_t frame_tail; unsigned int frame_data0; int frame_first; int frame_flags; struct lan743x_tx_buffer_info* buffer_info; struct lan743x_tx_descriptor* ring_cpu_ptr; struct lan743x_adapter* adapter; } ;
struct lan743x_adapter {TYPE_1__* pdev; } ;
struct device {int dummy; } ;
typedef int skb_frag_t ;
typedef int dma_addr_t ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (struct device*,int ) ;
 int FUNC_3 () ;
 void* FUNC_4 (struct lan743x_tx*,int) ;
 int FUNC_5 (struct lan743x_tx*,int,int) ;
 int FUNC_6 (struct device*,int const*,int ,unsigned int,int ) ;
 unsigned int FUNC_7 (int const*) ;

__attribute__((used)) static int FUNC_8(struct lan743x_tx *VAR_9,
      const skb_frag_t *VAR_10,
      unsigned int VAR_11)
{



 struct lan743x_tx_descriptor *VAR_12 = ((void*)0);
 struct lan743x_tx_buffer_info *VAR_13 = ((void*)0);
 struct lan743x_adapter *VAR_14 = VAR_9->adapter;
 struct device *VAR_15 = &VAR_14->pdev->dev;
 unsigned int VAR_16 = 0;
 dma_addr_t VAR_17;

 VAR_16 = FUNC_7(VAR_10);
 if (!VAR_16)
  return 0;


 VAR_12 = &VAR_9->ring_cpu_ptr[VAR_9->frame_tail];
 VAR_12->data0 = VAR_9->frame_data0;


 VAR_9->frame_tail = FUNC_4(VAR_9, VAR_9->frame_tail);
 VAR_12 = &VAR_9->ring_cpu_ptr[VAR_9->frame_tail];
 VAR_13 = &VAR_9->buffer_info[VAR_9->frame_tail];
 VAR_17 = FUNC_6(VAR_15, VAR_10,
       0, VAR_16,
       VAR_0);
 if (FUNC_2(VAR_15, VAR_17)) {
  int VAR_18;


  VAR_18 = VAR_9->frame_first;
  while (VAR_18 != VAR_9->frame_tail) {
   FUNC_5(VAR_9, VAR_18, 1);
   VAR_18 = FUNC_4(VAR_9, VAR_18);
  }
  FUNC_3();
  VAR_9->frame_flags &= ~VAR_8;
  VAR_9->frame_first = 0;
  VAR_9->frame_data0 = 0;
  VAR_9->frame_tail = 0;
  return -VAR_1;
 }

 VAR_12->data1 = FUNC_1(VAR_17);
 VAR_12->data2 = FUNC_0(VAR_17);
 VAR_12->data3 = (VAR_11 << 16) &
          VAR_7;

 VAR_13->skb = ((void*)0);
 VAR_13->dma_ptr = VAR_17;
 VAR_13->buffer_length = VAR_16;
 VAR_13->flags |= VAR_2;
 VAR_13->flags |= VAR_3;

 VAR_9->frame_data0 = (VAR_16 & VAR_4) |
     VAR_5 |
     VAR_6;


 return 0;
}
