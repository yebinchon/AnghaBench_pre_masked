
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u8 ;
struct usbnet {int dummy; } ;
struct sk_buff {unsigned int len; int* data; void* protocol; struct net_device* dev; } ;
struct qmimux_priv {int stats64; } ;
struct qmimux_hdr {int pad; int mux_id; int pkt_len; } ;
struct pcpu_sw_netstats {unsigned int rx_bytes; int syncp; int rx_packets; } ;
struct TYPE_2__ {int rx_errors; } ;
struct net_device {TYPE_1__ stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 struct sk_buff* FUNC_2 (struct net_device*,unsigned int) ;
 struct qmimux_priv* FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct sk_buff*) ;
 struct net_device* FUNC_5 (struct usbnet*,int ) ;
 int FUNC_6 (struct sk_buff*,int*,unsigned int) ;
 struct pcpu_sw_netstats* FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct usbnet *VAR_3, struct sk_buff *VAR_4)
{
 unsigned int VAR_5, VAR_6 = 0, VAR_7, VAR_8;
 struct qmimux_hdr *VAR_9;
 struct net_device *VAR_10;
 struct sk_buff *VAR_11;
 u8 VAR_12 = sizeof(*VAR_9);

 while (VAR_6 + VAR_12 < VAR_4->len) {
  VAR_9 = (struct qmimux_hdr *)(VAR_4->data + VAR_6);
  VAR_5 = FUNC_0(VAR_9->pkt_len);


  if (VAR_6 + VAR_5 + VAR_12 > VAR_4->len)
   return 0;


  if (VAR_9->pad & 0x80)
   goto skip;


  VAR_7 = VAR_9->pad & 0x3f;
  if (VAR_5 == 0 || VAR_7 >= VAR_5)
   goto skip;
  VAR_8 = VAR_5 - VAR_7;

  VAR_10 = FUNC_5(VAR_3, VAR_9->mux_id);
  if (!VAR_10)
   goto skip;
  VAR_11 = FUNC_2(VAR_10, VAR_8);
  if (!VAR_11)
   return 0;
  VAR_11->dev = VAR_10;

  switch (VAR_4->data[VAR_6 + VAR_12] & 0xf0) {
  case 0x40:
   VAR_11->protocol = FUNC_1(VAR_0);
   break;
  case 0x60:
   VAR_11->protocol = FUNC_1(VAR_1);
   break;
  default:

   goto skip;
  }

  FUNC_6(VAR_11, VAR_4->data + VAR_6 + VAR_12, VAR_8);
  if (FUNC_4(VAR_11) != VAR_2) {
   VAR_10->stats.rx_errors++;
   return 0;
  } else {
   struct pcpu_sw_netstats *VAR_13;
   struct qmimux_priv *VAR_14 = FUNC_3(VAR_10);

   VAR_13 = FUNC_7(VAR_14->stats64);
   FUNC_8(&VAR_13->syncp);
   VAR_13->rx_packets++;
   VAR_13->rx_bytes += VAR_8;
   FUNC_9(&VAR_13->syncp);
  }

skip:
  VAR_6 += VAR_5 + VAR_12;
 }
 return 1;
}
