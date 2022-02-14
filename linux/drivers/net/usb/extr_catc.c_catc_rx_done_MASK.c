
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct urb {int status; int actual_length; TYPE_2__* dev; int * transfer_buffer; struct catc* context; } ;
struct sk_buff {int protocol; } ;
struct catc {int flags; TYPE_3__* netdev; TYPE_2__* usbdev; int recq_sz; scalar_t__ is_f5u011; } ;
typedef int __le16 ;
struct TYPE_5__ {int rx_bytes; int rx_packets; int rx_errors; int rx_length_errors; } ;
struct TYPE_7__ {TYPE_1__ stats; } ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 struct sk_buff* FUNC_3 (int) ;
 int FUNC_4 (int *,char*,int,int) ;
 int FUNC_5 (struct sk_buff*,TYPE_3__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_3__*,char*,...) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*,int *,int) ;
 int FUNC_10 (struct sk_buff*,int) ;
 int FUNC_11 (struct urb*,int ) ;

__attribute__((used)) static void FUNC_12(struct urb *VAR_2)
{
 struct catc *VAR_3 = VAR_2->context;
 u8 *VAR_4 = VAR_2->transfer_buffer;
 struct sk_buff *VAR_5;
 int VAR_6, VAR_7 = 0;
 int VAR_8 = VAR_2->status;

 if (!VAR_3->is_f5u011) {
  FUNC_2(VAR_1, &VAR_3->flags);
  VAR_7 = 2;
 }

 if (VAR_8) {
  FUNC_4(&VAR_2->dev->dev, "rx_done, status %d, length %d\n",
   VAR_8, VAR_2->actual_length);
  return;
 }

 do {
  if(!VAR_3->is_f5u011) {
   VAR_6 = FUNC_6((__le16*)VAR_4);
   if (VAR_6 > VAR_2->actual_length) {
    VAR_3->netdev->stats.rx_length_errors++;
    VAR_3->netdev->stats.rx_errors++;
    break;
   }
  } else {
   VAR_6 = VAR_2->actual_length;
  }

  if (!(VAR_5 = FUNC_3(VAR_6)))
   return;

  FUNC_9(VAR_5, VAR_4 + VAR_7, VAR_6);
  FUNC_10(VAR_5, VAR_6);

  VAR_5->protocol = FUNC_5(VAR_5, VAR_3->netdev);
  FUNC_8(VAR_5);

  VAR_3->netdev->stats.rx_packets++;
  VAR_3->netdev->stats.rx_bytes += VAR_6;


  if (VAR_3->is_f5u011)
   break;
  VAR_4 += (((VAR_6 + 1) >> 6) + 1) << 6;

 } while (VAR_4 - (u8 *) VAR_2->transfer_buffer < VAR_2->actual_length);

 if (VAR_3->is_f5u011) {
  if (FUNC_1(&VAR_3->recq_sz)) {
   int VAR_9;
   FUNC_0(&VAR_3->recq_sz);
   FUNC_7(VAR_3->netdev, "getting extra packet\n");
   VAR_2->dev = VAR_3->usbdev;
   if ((VAR_9 = FUNC_11(VAR_2, VAR_0)) < 0) {
    FUNC_7(VAR_3->netdev,
        "submit(rx_urb) status %d\n", VAR_9);
   }
  } else {
   FUNC_2(VAR_1, &VAR_3->flags);
  }
 }
}
