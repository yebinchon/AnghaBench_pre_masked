
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct sk_buff {int len; int * data; } ;
struct hif_device_usb {int rx_remain_len; int rx_transfer_len; int htc_handle; TYPE_1__* udev; int rx_lock; struct sk_buff* remain_skb; scalar_t__ rx_pad_len; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 struct sk_buff* FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (int ,struct sk_buff*,int,int ) ;
 int FUNC_4 (int *,char*) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (struct sk_buff*,scalar_t__) ;
 int FUNC_8 (struct sk_buff*,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(struct hif_device_usb *VAR_9,
        struct sk_buff *VAR_10)
{
 struct sk_buff *VAR_11, *VAR_12[VAR_2];
 int VAR_13 = 0, VAR_14, VAR_15 = VAR_10->len;
 int VAR_16, VAR_17;
 u16 VAR_18 = 0;
 u8 *VAR_19;

 FUNC_9(&VAR_9->rx_lock);

 VAR_16 = VAR_9->rx_remain_len;
 VAR_17 = VAR_9->rx_transfer_len;

 if (VAR_16 != 0) {
  struct sk_buff *VAR_20 = VAR_9->remain_skb;

  if (VAR_20) {
   VAR_19 = (u8 *) VAR_20->data;

   VAR_13 = VAR_16;
   VAR_16 -= VAR_9->rx_pad_len;
   VAR_19 += VAR_17;

   FUNC_6(VAR_19, VAR_10->data, VAR_16);

   VAR_17 += VAR_16;
   VAR_9->rx_remain_len = 0;
   FUNC_7(VAR_20, VAR_17);

   VAR_12[VAR_18++] = VAR_20;

  } else {
   VAR_13 = VAR_16;
  }
 }

 FUNC_10(&VAR_9->rx_lock);

 while (VAR_13 < VAR_15) {
  u16 VAR_21;
  u16 VAR_22;
  u16 VAR_23;
  int VAR_24;

  VAR_19 = (u8 *) VAR_10->data;

  VAR_21 = FUNC_5(VAR_19 + VAR_13);
  VAR_22 = FUNC_5(VAR_19 + VAR_13 + 2);

  if (VAR_22 != VAR_0) {
   FUNC_1(VAR_8);
   return;
  }

  VAR_23 = 4 - (VAR_21 & 0x3);
  if (VAR_23 == 4)
   VAR_23 = 0;

  VAR_24 = VAR_13;
  VAR_13 = VAR_13 + 4 + VAR_21 + VAR_23;

  if (VAR_13 > VAR_3) {
   FUNC_9(&VAR_9->rx_lock);
   VAR_9->rx_remain_len = VAR_13 - VAR_3;
   VAR_9->rx_transfer_len =
    VAR_3 - VAR_24 - 4;
   VAR_9->rx_pad_len = VAR_23;

   VAR_11 = FUNC_2(VAR_21 + 32, VAR_1);
   if (!VAR_11) {
    FUNC_4(&VAR_9->udev->dev,
     "ath9k_htc: RX memory allocation error\n");
    FUNC_10(&VAR_9->rx_lock);
    goto err;
   }
   FUNC_8(VAR_11, 32);
   FUNC_1(VAR_5);

   FUNC_6(VAR_11->data, &(VAR_10->data[VAR_24+4]),
          VAR_9->rx_transfer_len);


   VAR_9->remain_skb = VAR_11;
   FUNC_10(&VAR_9->rx_lock);
  } else {
   VAR_11 = FUNC_2(VAR_21 + 32, VAR_1);
   if (!VAR_11) {
    FUNC_4(&VAR_9->udev->dev,
     "ath9k_htc: RX memory allocation error\n");
    goto err;
   }
   FUNC_8(VAR_11, 32);
   FUNC_1(VAR_5);

   FUNC_6(VAR_11->data, &(VAR_10->data[VAR_24+4]), VAR_21);
   FUNC_7(VAR_11, VAR_21);
   VAR_12[VAR_18++] = VAR_11;
  }
 }

err:
 for (VAR_14 = 0; VAR_14 < VAR_18; VAR_14++) {
  FUNC_0(VAR_7, VAR_12[VAR_14]->len);
  FUNC_3(VAR_9->htc_handle, VAR_12[VAR_14],
     VAR_12[VAR_14]->len, VAR_4);
  FUNC_1(VAR_6);
 }
}
