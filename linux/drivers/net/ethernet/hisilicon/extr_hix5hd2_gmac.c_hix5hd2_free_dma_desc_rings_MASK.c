
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int len; } ;
struct TYPE_4__ {struct hix5hd2_desc* desc; } ;
struct TYPE_3__ {struct hix5hd2_desc* desc; } ;
struct hix5hd2_priv {struct sk_buff** tx_skb; int dev; TYPE_2__ tx_rq; struct sk_buff** rx_skb; TYPE_1__ rx_fq; } ;
struct hix5hd2_desc {int buff_addr; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct hix5hd2_priv *VAR_5)
{
 struct hix5hd2_desc *VAR_6;
 dma_addr_t VAR_7;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  struct sk_buff *VAR_9 = VAR_5->rx_skb[VAR_8];
  if (VAR_9 == ((void*)0))
   continue;

  VAR_6 = VAR_5->rx_fq.desc + VAR_8;
  VAR_7 = FUNC_2(VAR_6->buff_addr);
  FUNC_1(VAR_5->dev, VAR_7,
     VAR_2, VAR_0);
  FUNC_0(VAR_9);
  VAR_5->rx_skb[VAR_8] = ((void*)0);
 }

 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
  struct sk_buff *VAR_10 = VAR_5->tx_skb[VAR_8];
  if (VAR_10 == ((void*)0))
   continue;

  VAR_6 = VAR_5->tx_rq.desc + VAR_8;
  VAR_7 = FUNC_2(VAR_6->buff_addr);
  FUNC_1(VAR_5->dev, VAR_7, VAR_10->len, VAR_1);
  FUNC_0(VAR_10);
  VAR_5->tx_skb[VAR_8] = ((void*)0);
 }
}
