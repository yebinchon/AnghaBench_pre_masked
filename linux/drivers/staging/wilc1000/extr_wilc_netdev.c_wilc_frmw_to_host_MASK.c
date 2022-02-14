
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned char u8 ;
typedef unsigned int u32 ;
struct TYPE_2__ {unsigned int rx_bytes; int rx_packets; } ;
struct wilc_vif {TYPE_1__ netstats; } ;
struct wilc {int dummy; } ;
struct sk_buff {int ip_summed; int protocol; struct net_device* dev; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (unsigned int) ;
 int FUNC_1 (struct sk_buff*,struct net_device*) ;
 struct net_device* FUNC_2 (struct wilc*,unsigned char*) ;
 int FUNC_3 (struct net_device*,char*,int) ;
 struct wilc_vif* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,unsigned char*,unsigned int) ;

void FUNC_7(struct wilc *VAR_1, u8 *VAR_2, u32 VAR_3,
         u32 VAR_4)
{
 unsigned int VAR_5 = 0;
 int VAR_6;
 unsigned char *VAR_7 = ((void*)0);
 struct sk_buff *VAR_8;
 struct net_device *VAR_9;
 struct wilc_vif *VAR_10;

 if (!VAR_1)
  return;

 VAR_9 = FUNC_2(VAR_1, VAR_2);
 if (!VAR_9)
  return;

 VAR_2 += VAR_4;
 VAR_10 = FUNC_4(VAR_9);

 if (VAR_3 > 0) {
  VAR_5 = VAR_3;
  VAR_7 = VAR_2;

  VAR_8 = FUNC_0(VAR_5);
  if (!VAR_8)
   return;

  VAR_8->dev = VAR_9;

  FUNC_6(VAR_8, VAR_7, VAR_5);

  VAR_8->protocol = FUNC_1(VAR_8, VAR_9);
  VAR_10->netstats.rx_packets++;
  VAR_10->netstats.rx_bytes += VAR_5;
  VAR_8->ip_summed = VAR_0;
  VAR_6 = FUNC_5(VAR_8);
  FUNC_3(VAR_9, "netif_rx ret value is: %d\n", VAR_6);
 }
}
