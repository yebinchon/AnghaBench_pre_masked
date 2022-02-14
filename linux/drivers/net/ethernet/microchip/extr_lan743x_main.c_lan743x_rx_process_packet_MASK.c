
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct skb_shared_hwtstamps {int hwtstamp; } ;
struct sk_buff {int protocol; } ;
struct lan743x_rx_descriptor {int data0; int data1; int data2; } ;
struct lan743x_rx_buffer_info {struct sk_buff* skb; scalar_t__ buffer_length; scalar_t__ dma_ptr; } ;
struct lan743x_rx {int* head_cpu_ptr; int ring_size; int last_head; int last_tail; int napi; struct lan743x_rx_buffer_info* buffer_info; struct lan743x_rx_descriptor* ring_cpu_ptr; TYPE_2__* adapter; } ;
struct TYPE_4__ {int netdev; TYPE_1__* pdev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *,scalar_t__,scalar_t__,int ) ;
 int FUNC_2 (struct sk_buff*,int ) ;
 int FUNC_3 (int,int) ;
 struct sk_buff* FUNC_4 (struct lan743x_rx*) ;
 int FUNC_5 (struct lan743x_rx*,int,struct sk_buff*) ;
 void* FUNC_6 (struct lan743x_rx*,int) ;
 int FUNC_7 (struct lan743x_rx*,int) ;
 int FUNC_8 (int *,struct sk_buff*) ;
 struct skb_shared_hwtstamps* FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_11(struct lan743x_rx *VAR_9)
{
 struct skb_shared_hwtstamps *VAR_10 = ((void*)0);
 int VAR_11 = VAR_6;
 struct lan743x_rx_buffer_info *VAR_12;
 struct lan743x_rx_descriptor *VAR_13;
 int VAR_14 = -1;
 int VAR_15 = -1;
 int VAR_16 = -1;
 int VAR_17 = -1;

 VAR_14 = *VAR_9->head_cpu_ptr;
 if (VAR_14 < 0 || VAR_14 >= VAR_9->ring_size)
  goto done;

 if (VAR_9->last_head < 0 || VAR_9->last_head >= VAR_9->ring_size)
  goto done;

 if (VAR_9->last_head != VAR_14) {
  VAR_13 = &VAR_9->ring_cpu_ptr[VAR_9->last_head];
  if (VAR_13->data0 & VAR_4)
   goto done;

  if (!(VAR_13->data0 & VAR_2))
   goto done;

  VAR_16 = VAR_9->last_head;
  if (VAR_13->data0 & VAR_3) {
   VAR_17 = VAR_9->last_head;
  } else {
   int VAR_18;

   VAR_18 = FUNC_6(VAR_9, VAR_16);
   while (VAR_18 != VAR_14) {
    VAR_13 = &VAR_9->ring_cpu_ptr[VAR_18];
    if (VAR_13->data0 & VAR_4)
     goto done;

    if (VAR_13->data0 & VAR_3) {
     VAR_17 = VAR_18;
     break;
    }
    VAR_18 = FUNC_6(VAR_9, VAR_18);
   }
  }
  if (VAR_17 >= 0) {
   VAR_13 = &VAR_9->ring_cpu_ptr[VAR_17];
   if (VAR_13->data0 & VAR_1) {

    int VAR_19 = FUNC_6(VAR_9,
          VAR_17);
    if (VAR_19 != VAR_14) {
     VAR_13 = &VAR_9->ring_cpu_ptr[VAR_19];
     if (VAR_13->data0 &
         VAR_4) {
      goto done;
     }
     if (VAR_13->data0 &
         VAR_1) {
      VAR_15 = VAR_19;
     } else {
      goto done;
     }
    } else {


     VAR_16 = -1;
     VAR_17 = -1;
    }
   }
  }
 }
 if (VAR_16 >= 0 && VAR_17 >= 0) {
  int VAR_20 = VAR_17;
  struct sk_buff *VAR_21 = ((void*)0);
  u32 VAR_22 = 0;
  u32 VAR_23 = 0;


  if (VAR_16 == VAR_17) {

   struct sk_buff *VAR_24 = ((void*)0);
   int VAR_25;

   VAR_24 = FUNC_4(VAR_9);
   if (!VAR_24) {




    FUNC_7(VAR_9, VAR_16);
    goto process_extension;
   }

   VAR_12 = &VAR_9->buffer_info[VAR_16];
   VAR_21 = VAR_12->skb;
   VAR_13 = &VAR_9->ring_cpu_ptr[VAR_16];


   if (VAR_12->dma_ptr) {
    FUNC_1(&VAR_9->adapter->pdev->dev,
       VAR_12->dma_ptr,
       VAR_12->buffer_length,
       VAR_0);
    VAR_12->dma_ptr = 0;
    VAR_12->buffer_length = 0;
   }
   VAR_12->skb = ((void*)0);
   VAR_25 = FUNC_0
     (VAR_13->data0);
   FUNC_10(VAR_21, VAR_25 - 4);
   VAR_21->protocol = FUNC_2(VAR_21,
             VAR_9->adapter->netdev);
   FUNC_5(VAR_9, VAR_16, VAR_24);
  } else {
   int VAR_26 = VAR_16;







   if (VAR_16 <= VAR_17) {
    while ((VAR_26 >= VAR_16) &&
           (VAR_26 <= VAR_17)) {
     FUNC_7(VAR_9,
              VAR_26);
     VAR_26 = FUNC_6(VAR_9,
              VAR_26);
    }
   } else {
    while ((VAR_26 >= VAR_16) ||
           (VAR_26 <= VAR_17)) {
     FUNC_7(VAR_9,
              VAR_26);
     VAR_26 = FUNC_6(VAR_9,
              VAR_26);
    }
   }
  }

process_extension:
  if (VAR_15 >= 0) {
   VAR_13 = &VAR_9->ring_cpu_ptr[VAR_15];
   VAR_12 = &VAR_9->buffer_info[VAR_15];

   VAR_22 = VAR_13->data1;
   VAR_23 = (VAR_13->data2 &
      VAR_5);
   FUNC_7(VAR_9, VAR_15);
   VAR_20 = VAR_15;
  }

  if (!VAR_21) {
   VAR_11 = VAR_7;
   goto move_forward;
  }

  if (VAR_15 < 0)
   goto pass_packet_to_os;
  VAR_10 = FUNC_9(VAR_21);
  if (VAR_10)
   VAR_10->hwtstamp = FUNC_3(VAR_22, VAR_23);

pass_packet_to_os:

  FUNC_8(&VAR_9->napi, VAR_21);
  VAR_11 = VAR_8;

move_forward:

  VAR_9->last_tail = VAR_20;
  VAR_9->last_head = FUNC_6(VAR_9, VAR_20);
 }
done:
 return VAR_11;
}
