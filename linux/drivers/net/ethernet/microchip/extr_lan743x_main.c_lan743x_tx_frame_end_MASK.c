
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct lan743x_tx_descriptor {int data0; } ;
struct lan743x_tx_buffer_info {int flags; struct sk_buff* skb; } ;
struct lan743x_tx {int frame_data0; size_t frame_tail; size_t last_tail; int vector_flags; int frame_flags; int channel_number; struct lan743x_tx_buffer_info* buffer_info; struct lan743x_tx_descriptor* ring_cpu_ptr; struct lan743x_adapter* adapter; } ;
struct lan743x_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 () ;
 int FUNC_2 (struct lan743x_adapter*,int ,int) ;
 size_t FUNC_3 (struct lan743x_tx*,size_t) ;

__attribute__((used)) static void FUNC_4(struct lan743x_tx *VAR_12,
     struct sk_buff *VAR_13,
     bool VAR_14,
     bool VAR_15)
{



 struct lan743x_tx_descriptor *VAR_16 = ((void*)0);
 struct lan743x_tx_buffer_info *VAR_17 = ((void*)0);
 struct lan743x_adapter *VAR_18 = VAR_12->adapter;
 u32 VAR_19 = 0;


 if ((VAR_12->frame_data0 & VAR_5) ==
     VAR_4) {
  VAR_12->frame_data0 |= VAR_7;
  VAR_12->frame_data0 |= VAR_6;
 }

 VAR_16 = &VAR_12->ring_cpu_ptr[VAR_12->frame_tail];
 VAR_17 = &VAR_12->buffer_info[VAR_12->frame_tail];
 VAR_17->skb = VAR_13;
 if (VAR_14)
  VAR_17->flags |= VAR_3;
 if (VAR_15)
  VAR_17->flags |= VAR_2;

 VAR_16->data0 = VAR_12->frame_data0;
 VAR_12->frame_tail = FUNC_3(VAR_12, VAR_12->frame_tail);
 VAR_12->last_tail = VAR_12->frame_tail;

 FUNC_1();

 if (VAR_12->vector_flags & VAR_1)
  VAR_19 |= VAR_11;
 if (VAR_12->vector_flags & VAR_0)
  VAR_19 |= VAR_9 |
  VAR_10;

 FUNC_2(VAR_18, FUNC_0(VAR_12->channel_number),
     VAR_19 | VAR_12->frame_tail);
 VAR_12->frame_flags &= ~VAR_8;
}
