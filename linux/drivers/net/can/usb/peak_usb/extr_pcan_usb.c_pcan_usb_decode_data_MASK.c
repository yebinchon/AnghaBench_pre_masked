
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct skb_shared_hwtstamps {int hwtstamp; } ;
struct sk_buff {int dummy; } ;
struct pcan_usb_msg_context {int ptr; scalar_t__ end; TYPE_3__* netdev; int ts16; TYPE_1__* pdev; int rec_ts_idx; } ;
struct can_frame {int can_id; int can_dlc; int * data; } ;
typedef int __le32 ;
typedef int __le16 ;
struct TYPE_5__ {int rx_bytes; int rx_packets; } ;
struct TYPE_6__ {TYPE_2__ stats; } ;
struct TYPE_4__ {int time_ref; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct sk_buff* FUNC_0 (TYPE_3__*,struct can_frame**) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int,int) ;
 int FUNC_6 (int *,int,int) ;
 int FUNC_7 (struct sk_buff*) ;
 scalar_t__ FUNC_8 (struct pcan_usb_msg_context*,int) ;
 int FUNC_9 (int *,int ,int *) ;
 struct skb_shared_hwtstamps* FUNC_10 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_11(struct pcan_usb_msg_context *VAR_7, u8 VAR_8)
{
 u8 VAR_9 = VAR_8 & VAR_4;
 struct sk_buff *VAR_10;
 struct can_frame *VAR_11;
 struct skb_shared_hwtstamps *VAR_12;

 VAR_10 = FUNC_0(VAR_7->netdev, &VAR_11);
 if (!VAR_10)
  return -VAR_3;

 if (VAR_8 & VAR_5) {
  __le32 VAR_13;

  if ((VAR_7->ptr + 4) > VAR_7->end)
   goto decode_failed;

  FUNC_5(&VAR_13, VAR_7->ptr, 4);
  VAR_7->ptr += 4;

  VAR_11->can_id = (FUNC_4(VAR_13) >> 3) | VAR_0;
 } else {
  __le16 VAR_14;

  if ((VAR_7->ptr + 2) > VAR_7->end)
   goto decode_failed;

  FUNC_5(&VAR_14, VAR_7->ptr, 2);
  VAR_7->ptr += 2;

  VAR_11->can_id = FUNC_3(VAR_14) >> 5;
 }

 VAR_11->can_dlc = FUNC_2(VAR_9);


 if (FUNC_8(VAR_7, !VAR_7->rec_ts_idx))
  goto decode_failed;


 VAR_7->rec_ts_idx++;


 FUNC_6(VAR_11->data, 0x0, sizeof(VAR_11->data));
 if (VAR_8 & VAR_6) {
  VAR_11->can_id |= VAR_1;
 } else {
  if ((VAR_7->ptr + VAR_9) > VAR_7->end)
   goto decode_failed;

  FUNC_5(VAR_11->data, VAR_7->ptr, VAR_11->can_dlc);
  VAR_7->ptr += VAR_9;
 }


 VAR_12 = FUNC_10(VAR_10);
 FUNC_9(&VAR_7->pdev->time_ref, VAR_7->ts16, &VAR_12->hwtstamp);


 VAR_7->netdev->stats.rx_packets++;
 VAR_7->netdev->stats.rx_bytes += VAR_11->can_dlc;

 FUNC_7(VAR_10);

 return 0;

decode_failed:
 FUNC_1(VAR_10);
 return -VAR_2;
}
