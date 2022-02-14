
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int ip_summed; int protocol; struct net_device* dev; int data; int len; } ;
struct rsv {scalar_t__ len; } ;
struct TYPE_2__ {int rx_bytes; int rx_packets; int rx_dropped; } ;
struct net_device {TYPE_1__ stats; } ;
struct encx24j600_priv {struct net_device* ndev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (struct encx24j600_priv*,int ,int ,scalar_t__) ;
 int FUNC_2 (struct sk_buff*,struct net_device*) ;
 struct sk_buff* FUNC_3 (struct net_device*,scalar_t__) ;
 scalar_t__ FUNC_4 (struct encx24j600_priv*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct sk_buff*,scalar_t__) ;
 int FUNC_8 (struct sk_buff*,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct encx24j600_priv *VAR_4,
         struct rsv *VAR_5)
{
 struct net_device *VAR_6 = VAR_4->ndev;
 struct sk_buff *VAR_7 = FUNC_3(VAR_6, VAR_5->len + VAR_2);

 if (!VAR_7) {
  FUNC_6("RX: OOM: packet dropped\n");
  VAR_6->stats.rx_dropped++;
  return -VAR_1;
 }
 FUNC_8(VAR_7, VAR_2);
 FUNC_1(VAR_4, VAR_3, FUNC_7(VAR_7, VAR_5->len), VAR_5->len);

 if (FUNC_4(VAR_4))
  FUNC_0("RX", VAR_7->len, VAR_7->data);

 VAR_7->dev = VAR_6;
 VAR_7->protocol = FUNC_2(VAR_7, VAR_6);
 VAR_7->ip_summed = VAR_0;


 VAR_6->stats.rx_packets++;
 VAR_6->stats.rx_bytes += VAR_5->len;

 FUNC_5(VAR_7);

 return 0;
}
