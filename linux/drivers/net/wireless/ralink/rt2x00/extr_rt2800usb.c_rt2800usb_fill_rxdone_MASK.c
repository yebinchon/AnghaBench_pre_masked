
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct skb_frame_desc {int desc_len; int desc; } ;
struct rxdone_entry_desc {int cipher_status; int dev_flags; int flags; } ;
struct queue_entry {TYPE_2__* skb; TYPE_1__* queue; } ;
typedef int __le32 ;
struct TYPE_6__ {scalar_t__ data; } ;
struct TYPE_5__ {int data_size; int rt2x00dev; } ;


 int VAR_0 ;
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
 int VAR_14 ;
 int VAR_15 ;
 struct skb_frame_desc* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (struct queue_entry*,struct rxdone_entry_desc*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_2__*,int ) ;
 int FUNC_7 (TYPE_2__*,int) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(struct queue_entry *VAR_16,
      struct rxdone_entry_desc *VAR_17)
{
 struct skb_frame_desc *VAR_18 = FUNC_0(VAR_16->skb);
 __le32 *VAR_19 = (__le32 *)VAR_16->skb->data;
 __le32 *VAR_20;
 u32 VAR_21;
 int VAR_22;





 FUNC_1(VAR_18->desc, VAR_19, VAR_18->desc_len);






 VAR_21 = FUNC_3(VAR_19, 0);
 VAR_22 = FUNC_5(VAR_21, VAR_8);




 FUNC_6(VAR_16->skb, VAR_7);





 if (FUNC_8(VAR_22 == 0 ||
   VAR_22 > VAR_16->queue->data_size)) {
  FUNC_4(VAR_16->queue->rt2x00dev,
      "Bad frame size %d, forcing to 0\n", VAR_22);
  return;
 }

 VAR_20 = (__le32 *)(VAR_16->skb->data + VAR_22);




 VAR_21 = FUNC_3(VAR_20, 0);

 if (FUNC_5(VAR_21, VAR_3))
  VAR_17->flags |= VAR_12;

 VAR_17->cipher_status = FUNC_5(VAR_21, VAR_2);

 if (FUNC_5(VAR_21, VAR_4)) {






  VAR_17->flags |= VAR_13;





  VAR_17->flags |= VAR_15;

  if (VAR_17->cipher_status == VAR_10) {
   VAR_17->flags |= VAR_11;
  } else if (VAR_17->cipher_status == VAR_9) {






   VAR_17->flags |= VAR_11;

   VAR_17->flags |= VAR_14;
  }
 }

 if (FUNC_5(VAR_21, VAR_6))
  VAR_17->dev_flags |= VAR_1;

 if (FUNC_5(VAR_21, VAR_5))
  VAR_17->dev_flags |= VAR_0;




 FUNC_7(VAR_16->skb, VAR_22);




 FUNC_2(VAR_16, VAR_17);
}
