
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {int net; int rxq_pause; int flags; int stats64; } ;
struct skb_data {int dummy; } ;
struct sk_buff {scalar_t__ protocol; int cb; scalar_t__ len; } ;
struct pcpu_sw_netstats {int syncp; int rx_bytes; int rx_packets; } ;
struct ethhdr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct sk_buff*,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct usbnet*,int ,int ,char*,int,...) ;
 int FUNC_3 (struct sk_buff*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int *,struct sk_buff*) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 struct pcpu_sw_netstats* FUNC_7 (int ) ;
 unsigned long FUNC_8 (int *) ;
 int FUNC_9 (int *,unsigned long) ;

void FUNC_10 (struct usbnet *VAR_4, struct sk_buff *VAR_5)
{
 struct pcpu_sw_netstats *VAR_6 = FUNC_7(VAR_4->stats64);
 unsigned long VAR_7;
 int VAR_8;

 if (FUNC_6(VAR_0, &VAR_4->flags)) {
  FUNC_5(&VAR_4->rxq_pause, VAR_5);
  return;
 }


 if (VAR_5->protocol == 0)
  VAR_5->protocol = FUNC_0 (VAR_5, VAR_4->net);

 VAR_7 = FUNC_8(&VAR_6->syncp);
 VAR_6->rx_packets++;
 VAR_6->rx_bytes += VAR_5->len;
 FUNC_9(&VAR_6->syncp, VAR_7);

 FUNC_2(VAR_4, VAR_3, VAR_4->net, "< rx, len %zu, type 0x%x\n",
    VAR_5->len + sizeof (struct ethhdr), VAR_5->protocol);
 FUNC_1 (VAR_5->cb, 0, sizeof (struct skb_data));

 if (FUNC_4(VAR_5))
  return;

 VAR_8 = FUNC_3 (VAR_5);
 if (VAR_8 != VAR_1)
  FUNC_2(VAR_4, VAR_2, VAR_4->net,
     "netif_rx status %d\n", VAR_8);
}
