
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; int data; } ;
struct TYPE_2__ {int tx_dropped; } ;
struct device {int dummy; } ;
struct net_device {TYPE_1__ stats; struct device dev; } ;
struct emac_priv {int txchan; int link; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct sk_buff*,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*) ;
 scalar_t__ FUNC_3 () ;
 struct emac_priv* FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct emac_priv*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct sk_buff*,int ) ;
 int FUNC_8 (struct sk_buff*) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct sk_buff *VAR_3, struct net_device *VAR_4)
{
 struct device *VAR_5 = &VAR_4->dev;
 int VAR_6;
 struct emac_priv *VAR_7 = FUNC_4(VAR_4);


 if (FUNC_9(!VAR_7->link)) {
  if (FUNC_5(VAR_7) && FUNC_3())
   FUNC_2(VAR_5, "DaVinci EMAC: No link to transmit");
  goto fail_tx;
 }

 VAR_6 = FUNC_7(VAR_3, VAR_0);
 if (FUNC_9(VAR_6 < 0)) {
  if (FUNC_5(VAR_7) && FUNC_3())
   FUNC_2(VAR_5, "DaVinci EMAC: packet pad failed");
  goto fail_tx;
 }

 FUNC_8(VAR_3);

 VAR_6 = FUNC_0(VAR_7->txchan, VAR_3, VAR_3->data, VAR_3->len,
         0);
 if (FUNC_9(VAR_6 != 0)) {
  if (FUNC_5(VAR_7) && FUNC_3())
   FUNC_2(VAR_5, "DaVinci EMAC: desc submit failed");
  goto fail_tx;
 }




 if (FUNC_9(!FUNC_1(VAR_7->txchan)))
  FUNC_6(VAR_4);

 return VAR_2;

fail_tx:
 VAR_4->stats.tx_dropped++;
 FUNC_6(VAR_4);
 return VAR_1;
}
