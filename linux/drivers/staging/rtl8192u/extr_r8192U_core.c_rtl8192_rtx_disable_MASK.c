
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {scalar_t__ cb; } ;
struct rtl8192_rx_info {int urb; } ;
struct r8192_priv {int skb_queue; int rx_queue; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_0 (int *) ;
 int FUNC_1 (struct net_device*) ;
 struct r8192_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct net_device*,char*) ;
 int FUNC_6 (struct net_device*,int ,int*) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct net_device*,int ,int) ;

void FUNC_11(struct net_device *VAR_3)
{
 u8 VAR_4;
 struct r8192_priv *VAR_5 = FUNC_2(VAR_3);
 struct sk_buff *VAR_6;
 struct rtl8192_rx_info *VAR_7;

 FUNC_6(VAR_3, VAR_0, &VAR_4);
 FUNC_10(VAR_3, VAR_0, VAR_4 & ~(VAR_2 | VAR_1));
 FUNC_1(VAR_3);
 FUNC_4(10);

 while ((VAR_6 = FUNC_0(&VAR_5->rx_queue))) {
  VAR_7 = (struct rtl8192_rx_info *)VAR_6->cb;
  if (!VAR_7->urb)
   continue;

  FUNC_9(VAR_7->urb);
  FUNC_3(VAR_6);
 }

 if (FUNC_7(&VAR_5->skb_queue))
  FUNC_5(VAR_3, "skb_queue not empty\n");

 FUNC_8(&VAR_5->skb_queue);
}
