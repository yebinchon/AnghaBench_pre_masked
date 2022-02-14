
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {unsigned int len; int protocol; struct net_device* dev; } ;
struct TYPE_4__ {unsigned int rx_bytes; int rx_dropped; int rx_packets; } ;
struct net_device {TYPE_2__ stats; int dev_addr; } ;
struct TYPE_3__ {scalar_t__ ch_id; } ;
struct net_dev_context {struct net_device* dev; scalar_t__ is_mamac; TYPE_1__ rx; } ;
struct mbo {char* virt_address; int processed_length; scalar_t__ hdm_channel_id; int ifp; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*,int) ;
 struct sk_buff* FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct sk_buff*,struct net_device*) ;
 int FUNC_4 (int ,int ) ;
 struct net_dev_context* FUNC_5 (int ) ;
 int FUNC_6 (struct mbo*) ;
 scalar_t__ FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (struct sk_buff*,int) ;
 int FUNC_11 (struct sk_buff*,...) ;

__attribute__((used)) static int FUNC_12(struct mbo *VAR_5)
{
 const u32 VAR_6 = 0;
 struct net_dev_context *VAR_7;
 char *VAR_8 = VAR_5->virt_address;
 u32 VAR_9 = VAR_5->processed_length;
 struct sk_buff *VAR_10;
 struct net_device *VAR_11;
 unsigned int VAR_12;
 int VAR_13 = 0;

 VAR_7 = FUNC_5(VAR_5->ifp);
 if (!VAR_7)
  return -VAR_0;

 if (VAR_7->rx.ch_id != VAR_5->hdm_channel_id) {
  VAR_13 = -VAR_0;
  goto put_nd;
 }

 VAR_11 = VAR_7->dev;

 if (VAR_7->is_mamac) {
  if (!FUNC_8(VAR_8, VAR_9)) {
   VAR_13 = -VAR_0;
   goto put_nd;
  }

  VAR_10 = FUNC_1(VAR_9 - VAR_2 + 2 * VAR_1 + 2);
 } else {
  if (!FUNC_0(VAR_8, VAR_9)) {
   VAR_13 = -VAR_0;
   goto put_nd;
  }

  VAR_10 = FUNC_1(VAR_9 - VAR_3);
 }

 if (!VAR_10) {
  VAR_11->stats.rx_dropped++;
  FUNC_9("drop packet: no memory for skb\n");
  goto out;
 }

 VAR_10->dev = VAR_11;

 if (VAR_7->is_mamac) {

  FUNC_4(FUNC_10(VAR_10, VAR_1), VAR_11->dev_addr);


  FUNC_11(VAR_10, &VAR_6, 4);
  FUNC_11(VAR_10, VAR_8 + 5, 2);


  FUNC_11(VAR_10, VAR_8 + 10, 2);

  VAR_8 += VAR_2;
  VAR_9 -= VAR_2;
 } else {
  VAR_8 += VAR_3;
  VAR_9 -= VAR_3;
 }

 FUNC_11(VAR_10, VAR_8, VAR_9);
 VAR_10->protocol = FUNC_3(VAR_10, VAR_11);
 VAR_12 = VAR_10->len;
 if (FUNC_7(VAR_10) == VAR_4) {
  VAR_11->stats.rx_packets++;
  VAR_11->stats.rx_bytes += VAR_12;
 } else {
  VAR_11->stats.rx_dropped++;
 }

out:
 FUNC_6(VAR_5);

put_nd:
 FUNC_2(VAR_7->dev);
 return VAR_13;
}
