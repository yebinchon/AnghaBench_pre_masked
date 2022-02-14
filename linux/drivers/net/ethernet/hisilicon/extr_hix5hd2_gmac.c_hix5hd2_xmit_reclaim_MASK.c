
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sk_buff {scalar_t__ len; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {struct hix5hd2_desc* desc; } ;
struct hix5hd2_priv {int netdev; scalar_t__ base; struct sk_buff** tx_skb; int dev; TYPE_1__ tx_rq; } ;
struct hix5hd2_desc {int buff_addr; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {scalar_t__ nr_frags; } ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (int ,int ,scalar_t__,int ) ;
 int FUNC_6 (struct hix5hd2_priv*,struct sk_buff*,scalar_t__) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct net_device*,unsigned int,unsigned int) ;
 int FUNC_9 (struct net_device*,char*) ;
 struct hix5hd2_priv* FUNC_10 (struct net_device*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct net_device*) ;
 int FUNC_13 (struct net_device*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (scalar_t__) ;
 TYPE_2__* FUNC_16 (struct sk_buff*) ;
 scalar_t__ FUNC_17 (int) ;
 int FUNC_18 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_19(struct net_device *VAR_4)
{
 struct sk_buff *VAR_5;
 struct hix5hd2_desc *VAR_6;
 struct hix5hd2_priv *VAR_7 = FUNC_10(VAR_4);
 unsigned int VAR_8 = 0, VAR_9 = 0;
 u32 VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 dma_addr_t VAR_15;

 FUNC_12(VAR_4);


 VAR_10 = FUNC_3(FUNC_15(VAR_7->base + VAR_2));

 VAR_11 = FUNC_3(FUNC_15(VAR_7->base + VAR_3));
 VAR_12 = FUNC_0(VAR_11, VAR_10, VAR_1);

 for (VAR_14 = 0, VAR_13 = VAR_10; VAR_14 < VAR_12; VAR_14++) {
  VAR_5 = VAR_7->tx_skb[VAR_13];
  if (FUNC_17(!VAR_5)) {
   FUNC_9(VAR_4, "inconsistent tx_skb\n");
   break;
  }

  VAR_9++;
  VAR_8 += VAR_5->len;
  VAR_6 = VAR_7->tx_rq.desc + VAR_13;

  if (FUNC_16(VAR_5)->nr_frags) {
   FUNC_6(VAR_7, VAR_5, VAR_13);
  } else {
   VAR_15 = FUNC_7(VAR_6->buff_addr);
   FUNC_5(VAR_7->dev, VAR_15, VAR_5->len,
      VAR_0);
  }

  VAR_7->tx_skb[VAR_13] = ((void*)0);
  FUNC_1(VAR_5);
  VAR_13 = FUNC_4(VAR_13, VAR_1);
 }

 if (VAR_13 != VAR_10)
  FUNC_18(FUNC_2(VAR_13), VAR_7->base + VAR_2);

 FUNC_13(VAR_4);

 if (VAR_9 || VAR_8)
  FUNC_8(VAR_4, VAR_9, VAR_8);

 if (FUNC_17(FUNC_11(VAR_7->netdev)) && VAR_9)
  FUNC_14(VAR_7->netdev);
}
