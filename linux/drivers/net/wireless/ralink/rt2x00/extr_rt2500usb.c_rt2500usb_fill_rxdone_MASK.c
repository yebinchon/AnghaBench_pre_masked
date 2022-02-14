
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct skb_frame_desc {scalar_t__ desc; int desc_len; } ;
struct rxdone_entry_desc {scalar_t__ cipher; scalar_t__ cipher_status; void* size; int dev_flags; void* rssi; void* signal; int flags; void** iv; } ;
struct rt2x00_dev {void* rssi_offset; } ;
struct queue_entry_priv_usb {TYPE_1__* urb; } ;
struct queue_entry {TYPE_3__* skb; TYPE_2__* queue; struct queue_entry_priv_usb* priv_data; } ;
typedef int __le32 ;
struct TYPE_7__ {scalar_t__ data; } ;
struct TYPE_6__ {scalar_t__ desc_size; struct rt2x00_dev* rt2x00dev; } ;
struct TYPE_5__ {scalar_t__ actual_length; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 void* FUNC_0 (int *,int) ;
 struct skb_frame_desc* FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (scalar_t__,int *,int ) ;
 int FUNC_3 (int *,int) ;
 void* FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_3__*,void*) ;

__attribute__((used)) static void FUNC_6(struct queue_entry *VAR_22,
      struct rxdone_entry_desc *VAR_23)
{
 struct rt2x00_dev *VAR_24 = VAR_22->queue->rt2x00dev;
 struct queue_entry_priv_usb *VAR_25 = VAR_22->priv_data;
 struct skb_frame_desc *VAR_26 = FUNC_1(VAR_22->skb);
 __le32 *VAR_27 =
     (__le32 *)(VAR_22->skb->data +
         (VAR_25->urb->actual_length -
   VAR_22->queue->desc_size));
 u32 VAR_28;
 u32 VAR_29;





 FUNC_2(VAR_26->desc, VAR_27, VAR_26->desc_len);
 VAR_27 = (__le32 *)VAR_26->desc;




 VAR_28 = FUNC_3(VAR_27, 0);
 VAR_29 = FUNC_3(VAR_27, 1);

 if (FUNC_4(VAR_28, VAR_7))
  VAR_23->flags |= VAR_18;
 if (FUNC_4(VAR_28, VAR_11))
  VAR_23->flags |= VAR_19;

 VAR_23->cipher = FUNC_4(VAR_28, VAR_5);
 if (FUNC_4(VAR_28, VAR_6))
  VAR_23->cipher_status = VAR_14;

 if (VAR_23->cipher != VAR_0) {
  VAR_23->iv[0] = FUNC_0(VAR_27, 2);
  VAR_23->iv[1] = FUNC_0(VAR_27, 3);
  VAR_23->dev_flags |= VAR_1;



  VAR_23->flags |= VAR_21;
  if (VAR_23->cipher_status == VAR_16)
   VAR_23->flags |= VAR_17;
  else if (VAR_23->cipher_status == VAR_15)
   VAR_23->flags |= VAR_20;
 }







 VAR_23->signal = FUNC_4(VAR_29, VAR_13);
 VAR_23->rssi =
     FUNC_4(VAR_29, VAR_12) - VAR_24->rssi_offset;
 VAR_23->size = FUNC_4(VAR_28, VAR_8);

 if (FUNC_4(VAR_28, VAR_10))
  VAR_23->dev_flags |= VAR_4;
 else
  VAR_23->dev_flags |= VAR_3;
 if (FUNC_4(VAR_28, VAR_9))
  VAR_23->dev_flags |= VAR_2;




 FUNC_5(VAR_22->skb, VAR_23->size);
}
