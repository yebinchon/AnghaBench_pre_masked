
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct urb {int status; int actual_length; int transfer_buffer_length; struct kaweth_device* context; TYPE_1__* dev; } ;
struct sk_buff {int protocol; } ;
struct TYPE_6__ {int rx_bytes; int rx_packets; int rx_errors; } ;
struct net_device {TYPE_3__ stats; int name; } ;
struct kaweth_device {int end; scalar_t__ rx_buf; TYPE_2__* intf; struct net_device* net; int device_lock; int status; int term_wait; } ;
struct device {int dummy; } ;
typedef int __u16 ;
typedef int __le16 ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int ) ;
 struct sk_buff* FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (int *,char*,int,...) ;
 int FUNC_4 (struct sk_buff*,struct net_device*) ;
 int FUNC_5 (struct kaweth_device*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*,scalar_t__,int) ;
 int FUNC_9 (struct sk_buff*,int) ;
 int FUNC_10 (struct sk_buff*,int) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,unsigned long) ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static void FUNC_15(struct urb *VAR_9)
{
 struct device *VAR_10 = &VAR_9->dev->dev;
 struct kaweth_device *VAR_11 = VAR_9->context;
 struct net_device *VAR_12 = VAR_11->net;
 int VAR_13 = VAR_9->status;
 unsigned long VAR_14;
 int VAR_15 = VAR_9->actual_length;
 int VAR_16 = VAR_9->transfer_buffer_length;

 __u16 VAR_17 = FUNC_6((__le16 *)VAR_11->rx_buf);

 struct sk_buff *VAR_18;

 if (FUNC_13(VAR_13 == -VAR_3)) {
  VAR_12->stats.rx_errors++;
  VAR_11->end = 1;
  FUNC_14(&VAR_11->term_wait);
  FUNC_2(VAR_10, "Status was -EPIPE.\n");
  return;
 }
 if (FUNC_13(VAR_13 == -VAR_0 || VAR_13 == -VAR_6)) {

  VAR_11->end = 1;
  FUNC_14(&VAR_11->term_wait);
  FUNC_2(VAR_10, "Status was -ECONNRESET or -ESHUTDOWN.\n");
  return;
 }
 if (FUNC_13(VAR_13 == -VAR_4 || VAR_13 == -VAR_7 ||
       VAR_13 == -VAR_1)) {
  VAR_12->stats.rx_errors++;
  FUNC_2(VAR_10, "Status was -EPROTO, -ETIME, or -EILSEQ.\n");
  return;
 }
 if (FUNC_13(VAR_13 == -VAR_2)) {
  VAR_12->stats.rx_errors++;
  FUNC_2(VAR_10, "Status was -EOVERFLOW.\n");
 }
 FUNC_11(&VAR_11->device_lock, VAR_14);
 if (FUNC_0(VAR_11->status)) {
  FUNC_12(&VAR_11->device_lock, VAR_14);
  return;
 }
 FUNC_12(&VAR_11->device_lock, VAR_14);

 if(VAR_13 && VAR_13 != -VAR_5 && VAR_15 != 1) {
  FUNC_3(&VAR_11->intf->dev,
   "%s RX status: %d count: %d packet_len: %d\n",
   VAR_12->name, VAR_13, VAR_15, (int)VAR_17);
  FUNC_5(VAR_11, VAR_8);
                return;
 }

 if(VAR_11->net && (VAR_15 > 2)) {
  if(VAR_17 > (VAR_15 - 2)) {
   FUNC_3(&VAR_11->intf->dev,
    "Packet length too long for USB frame (pkt_len: %x, count: %x)\n",
    VAR_17, VAR_15);
   FUNC_3(&VAR_11->intf->dev, "Packet len & 2047: %x\n",
    VAR_17 & 2047);
   FUNC_3(&VAR_11->intf->dev, "Count 2: %x\n", VAR_16);
          FUNC_5(VAR_11, VAR_8);
                        return;
                }

  if(!(VAR_18 = FUNC_1(VAR_17+2))) {
          FUNC_5(VAR_11, VAR_8);
                        return;
  }

  FUNC_10(VAR_18, 2);

  FUNC_8(VAR_18, VAR_11->rx_buf + 2, VAR_17);

  FUNC_9(VAR_18, VAR_17);

  VAR_18->protocol = FUNC_4(VAR_18, VAR_12);

  FUNC_7(VAR_18);

  VAR_12->stats.rx_packets++;
  VAR_12->stats.rx_bytes += VAR_17;
 }

 FUNC_5(VAR_11, VAR_8);
}
