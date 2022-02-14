
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbpn_dev {scalar_t__ tx_queue; int tx_lock; int tx_pipe; int usb; } ;
struct urb {int transfer_flags; } ;
struct sk_buff {scalar_t__ protocol; int len; int data; } ;
struct TYPE_2__ {int tx_dropped; } ;
struct net_device {scalar_t__ tx_queue_len; TYPE_1__ stats; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int ) ;
 struct usbpn_dev* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int VAR_4 ;
 struct urb* FUNC_6 (int ,int ) ;
 int FUNC_7 (struct urb*,int ,int ,int ,int ,int ,struct sk_buff*) ;
 int FUNC_8 (struct urb*) ;
 int FUNC_9 (struct urb*,int ) ;

__attribute__((used)) static netdev_tx_t FUNC_10(struct sk_buff *VAR_5, struct net_device *VAR_6)
{
 struct usbpn_dev *VAR_7 = FUNC_2(VAR_6);
 struct urb *VAR_8 = ((void*)0);
 unsigned long VAR_9;
 int VAR_10;

 if (VAR_5->protocol != FUNC_1(VAR_0))
  goto drop;

 VAR_8 = FUNC_6(0, VAR_1);
 if (!VAR_8)
  goto drop;
 FUNC_7(VAR_8, VAR_7->usb, VAR_7->tx_pipe, VAR_5->data, VAR_5->len,
    VAR_4, VAR_5);
 VAR_8->transfer_flags = VAR_3;
 VAR_10 = FUNC_9(VAR_8, VAR_1);
 if (VAR_10) {
  FUNC_8(VAR_8);
  goto drop;
 }

 FUNC_4(&VAR_7->tx_lock, VAR_9);
 VAR_7->tx_queue++;
 if (VAR_7->tx_queue >= VAR_6->tx_queue_len)
  FUNC_3(VAR_6);
 FUNC_5(&VAR_7->tx_lock, VAR_9);
 return VAR_2;

drop:
 FUNC_0(VAR_5);
 VAR_6->stats.tx_dropped++;
 return VAR_2;
}
