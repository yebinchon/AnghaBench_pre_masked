
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sk_buff {int data; } ;
struct TYPE_2__ {struct hix5hd2_desc* desc; } ;
struct hix5hd2_priv {scalar_t__ base; struct sk_buff** rx_skb; TYPE_1__ rx_fq; int dev; int netdev; } ;
struct hix5hd2_desc {void* cmd; void* buff_addr; } ;
typedef scalar_t__ dma_addr_t ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_6 (int ,scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__,int ) ;
 struct sk_buff* FUNC_8 (int ,scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 () ;
 int FUNC_12 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_13(struct hix5hd2_priv *VAR_7)
{
 struct hix5hd2_desc *VAR_8;
 struct sk_buff *VAR_9;
 u32 VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 u32 VAR_15 = VAR_3;
 dma_addr_t VAR_16;


 VAR_10 = FUNC_4(FUNC_9(VAR_7->base + VAR_6));

 VAR_11 = FUNC_4(FUNC_9(VAR_7->base + VAR_5));
 VAR_12 = FUNC_0(VAR_10, VAR_11, VAR_4);

 for (VAR_14 = 0, VAR_13 = VAR_10; VAR_14 < VAR_12; VAR_14++) {
  if (VAR_7->rx_skb[VAR_13]) {
   break;
  } else {
   VAR_9 = FUNC_8(VAR_7->netdev, VAR_15);
   if (FUNC_10(VAR_9 == ((void*)0)))
    break;
  }

  VAR_16 = FUNC_5(VAR_7->dev, VAR_9->data, VAR_15, VAR_2);
  if (FUNC_6(VAR_7->dev, VAR_16)) {
   FUNC_2(VAR_9);
   break;
  }

  VAR_8 = VAR_7->rx_fq.desc + VAR_13;
  VAR_8->buff_addr = FUNC_1(VAR_16);
  VAR_7->rx_skb[VAR_13] = VAR_9;
  VAR_8->cmd = FUNC_1(VAR_1 |
     (VAR_15 - 1) << VAR_0);
  VAR_13 = FUNC_7(VAR_13, VAR_4);
 }


 FUNC_11();

 if (VAR_13 != VAR_10)
  FUNC_12(FUNC_3(VAR_13), VAR_7->base + VAR_6);
}
