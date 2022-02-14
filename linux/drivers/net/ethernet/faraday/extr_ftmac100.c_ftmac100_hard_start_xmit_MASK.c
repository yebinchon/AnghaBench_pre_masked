
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; int data; } ;
struct TYPE_2__ {int tx_dropped; } ;
struct net_device {TYPE_1__ stats; } ;
struct ftmac100 {int dev; } ;
typedef int netdev_tx_t ;
typedef int dma_addr_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct ftmac100*,struct sk_buff*,int ) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (struct net_device*,char*) ;
 int FUNC_6 (struct net_device*,char*) ;
 struct ftmac100* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct sk_buff*) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static netdev_tx_t
FUNC_10(struct sk_buff *VAR_3, struct net_device *VAR_4)
{
 struct ftmac100 *VAR_5 = FUNC_7(VAR_4);
 dma_addr_t VAR_6;

 if (FUNC_9(VAR_3->len > VAR_1)) {
  if (FUNC_4())
   FUNC_5(VAR_4, "tx packet too big\n");

  VAR_4->stats.tx_dropped++;
  FUNC_0(VAR_3);
  return VAR_2;
 }

 VAR_6 = FUNC_1(VAR_5->dev, VAR_3->data, FUNC_8(VAR_3), VAR_0);
 if (FUNC_9(FUNC_2(VAR_5->dev, VAR_6))) {

  if (FUNC_4())
   FUNC_6(VAR_4, "map socket buffer failed\n");

  VAR_4->stats.tx_dropped++;
  FUNC_0(VAR_3);
  return VAR_2;
 }

 return FUNC_3(VAR_5, VAR_3, VAR_6);
}
