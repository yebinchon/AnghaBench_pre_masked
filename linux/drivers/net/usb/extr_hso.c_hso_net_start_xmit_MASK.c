
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; int data; } ;
struct TYPE_9__ {int tx_bytes; int tx_packets; int tx_errors; } ;
struct net_device {TYPE_3__ stats; } ;
struct hso_net {TYPE_6__* parent; TYPE_4__* mux_bulk_tx_urb; int mux_bulk_tx_buf; TYPE_1__* out_endp; struct sk_buff* skb_tx_buf; } ;
typedef int netdev_tx_t ;
struct TYPE_11__ {TYPE_2__* interface; int usb; } ;
struct TYPE_10__ {int transfer_flags; } ;
struct TYPE_8__ {int dev; } ;
struct TYPE_7__ {int bEndpointAddress; } ;


 int FUNC_0 (int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int,char*,scalar_t__,int ) ;
 int FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (int ,int ,scalar_t__) ;
 struct hso_net* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (TYPE_4__*,int ,int ,int ,scalar_t__,int ,struct hso_net*) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (TYPE_4__*,int ) ;
 int VAR_5 ;

__attribute__((used)) static netdev_tx_t FUNC_12(struct sk_buff *VAR_6,
         struct net_device *VAR_7)
{
 struct hso_net *VAR_8 = FUNC_6(VAR_7);
 int VAR_9;


 FUNC_8(VAR_7);
 if (FUNC_4(VAR_8->parent) == -VAR_0) {
  VAR_8->skb_tx_buf = VAR_6;
  return VAR_3;
 }


 FUNC_0(VAR_6->data, VAR_6->len);

 FUNC_5(VAR_8->mux_bulk_tx_buf, VAR_6->data, VAR_6->len);
 FUNC_3(0x1, "len: %d/%d\n", VAR_6->len, VAR_2);


 FUNC_9(VAR_8->mux_bulk_tx_urb,
     VAR_8->parent->usb,
     FUNC_10(VAR_8->parent->usb,
       VAR_8->out_endp->
       bEndpointAddress & 0x7F),
     VAR_8->mux_bulk_tx_buf, VAR_6->len, VAR_5,
     VAR_8);


 VAR_8->mux_bulk_tx_urb->transfer_flags |= VAR_4;


 VAR_9 = FUNC_11(VAR_8->mux_bulk_tx_urb, VAR_1);
 if (VAR_9) {
  FUNC_2(&VAR_8->parent->interface->dev,
   "failed mux_bulk_tx_urb %d\n", VAR_9);
  VAR_7->stats.tx_errors++;
  FUNC_7(VAR_7);
 } else {
  VAR_7->stats.tx_packets++;
  VAR_7->stats.tx_bytes += VAR_6->len;
 }
 FUNC_1(VAR_6);

 return VAR_3;
}
