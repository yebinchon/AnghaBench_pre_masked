
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {scalar_t__ len; int protocol; } ;
struct TYPE_4__ {int rx_bytes; int rx_packets; int rx_length_errors; int rx_errors; } ;
struct net_device {TYPE_2__ stats; } ;
struct TYPE_3__ {struct hix5hd2_desc* desc; } ;
struct hix5hd2_priv {scalar_t__ base; int napi; int dev; TYPE_1__ rx_bq; struct sk_buff** rx_skb; } ;
struct hix5hd2_desc {int buff_addr; int cmd; } ;
typedef int dma_addr_t ;


 int FUNC_0 (int,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int ,int,scalar_t__,int ) ;
 int FUNC_6 (struct sk_buff*,struct net_device*) ;
 int FUNC_7 (struct hix5hd2_priv*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,struct sk_buff*) ;
 int FUNC_10 (struct net_device*,char*,...) ;
 struct hix5hd2_priv* FUNC_11 (struct net_device*) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 () ;
 int FUNC_14 (struct sk_buff*,int) ;
 scalar_t__ FUNC_15 (int) ;
 int FUNC_16 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_17(struct net_device *VAR_7, int VAR_8)
{
 struct hix5hd2_priv *VAR_9 = FUNC_11(VAR_7);
 struct sk_buff *VAR_10;
 struct hix5hd2_desc *VAR_11;
 dma_addr_t VAR_12;
 u32 VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;


 VAR_13 = FUNC_3(FUNC_12(VAR_9->base + VAR_4));

 VAR_14 = FUNC_3(FUNC_12(VAR_9->base + VAR_5));
 VAR_15 = FUNC_0(VAR_14, VAR_13, VAR_6);
 if (VAR_15 > VAR_8)
  VAR_15 = VAR_8;


 FUNC_13();
 for (VAR_17 = 0, VAR_16 = VAR_13; VAR_17 < VAR_15; VAR_17++) {
  VAR_10 = VAR_9->rx_skb[VAR_16];
  if (FUNC_15(!VAR_10)) {
   FUNC_10(VAR_7, "inconsistent rx_skb\n");
   break;
  }
  VAR_9->rx_skb[VAR_16] = ((void*)0);

  VAR_11 = VAR_9->rx_bq.desc + VAR_16;
  VAR_18 = (FUNC_8(VAR_11->cmd) >> VAR_0) &
         VAR_1;
  VAR_12 = FUNC_8(VAR_11->buff_addr);
  FUNC_5(VAR_9->dev, VAR_12, VAR_3,
     VAR_2);

  FUNC_14(VAR_10, VAR_18);
  if (VAR_10->len > VAR_3) {
   FUNC_10(VAR_7, "rcv len err, len = %d\n", VAR_10->len);
   VAR_7->stats.rx_errors++;
   VAR_7->stats.rx_length_errors++;
   FUNC_1(VAR_10);
   goto next;
  }

  VAR_10->protocol = FUNC_6(VAR_10, VAR_7);
  FUNC_9(&VAR_9->napi, VAR_10);
  VAR_7->stats.rx_packets++;
  VAR_7->stats.rx_bytes += VAR_10->len;
next:
  VAR_16 = FUNC_4(VAR_16, VAR_6);
 }

 if (VAR_16 != VAR_13)
  FUNC_16(FUNC_2(VAR_16), VAR_9->base + VAR_4);

 FUNC_7(VAR_9);

 return VAR_15;
}
