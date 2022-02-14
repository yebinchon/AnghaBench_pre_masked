
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int data; int protocol; struct net_device* dev; } ;
struct TYPE_2__ {int rx_bytes; int rx_packets; int rx_errors; } ;
struct device {int dummy; } ;
struct net_device {TYPE_1__ stats; struct device dev; } ;
struct emac_priv {int rxchan; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,struct sk_buff*,int ,int ,int ) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct sk_buff*) ;
 struct sk_buff* FUNC_4 (struct emac_priv*) ;
 int FUNC_5 (struct sk_buff*,struct net_device*) ;
 scalar_t__ FUNC_6 () ;
 struct emac_priv* FUNC_7 (struct net_device*) ;
 scalar_t__ FUNC_8 (struct emac_priv*) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct sk_buff*,int) ;
 int FUNC_12 (struct sk_buff*) ;
 scalar_t__ FUNC_13 (int) ;

__attribute__((used)) static void FUNC_14(void *VAR_1, int VAR_2, int VAR_3)
{
 struct sk_buff *VAR_4 = VAR_1;
 struct net_device *VAR_5 = VAR_4->dev;
 struct emac_priv *VAR_6 = FUNC_7(VAR_5);
 struct device *VAR_7 = &VAR_5->dev;
 int VAR_8;


 if (FUNC_13(!FUNC_10(VAR_5))) {
  FUNC_3(VAR_4);
  return;
 }


 if (VAR_3 < 0) {
  VAR_5->stats.rx_errors++;
  goto recycle;
 }


 FUNC_11(VAR_4, VAR_2);
 VAR_4->protocol = FUNC_5(VAR_4, VAR_5);
 FUNC_9(VAR_4);
 VAR_5->stats.rx_bytes += VAR_2;
 VAR_5->stats.rx_packets++;


 VAR_4 = FUNC_4(VAR_6);
 if (!VAR_4) {
  if (FUNC_8(VAR_6) && FUNC_6())
   FUNC_2(VAR_7, "failed rx buffer alloc\n");
  return;
 }

recycle:
 VAR_8 = FUNC_1(VAR_6->rxchan, VAR_4, VAR_4->data,
   FUNC_12(VAR_4), 0);

 FUNC_0(VAR_8 == -VAR_0);
 if (FUNC_13(VAR_8 < 0))
  FUNC_3(VAR_4);
}
