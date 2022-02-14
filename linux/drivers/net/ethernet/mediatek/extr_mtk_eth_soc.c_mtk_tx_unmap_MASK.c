
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct mtk_tx_buf {int flags; struct sk_buff* skb; } ;
struct mtk_eth {int dev; TYPE_1__* soc; } ;
struct TYPE_2__ {int caps; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct sk_buff*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct mtk_tx_buf*,int ) ;
 scalar_t__ FUNC_3 (struct mtk_tx_buf*,int ) ;
 int FUNC_4 (int ,int ,scalar_t__,int ) ;
 int FUNC_5 (int ,int ,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_6(struct mtk_eth *VAR_9, struct mtk_tx_buf *VAR_10)
{
 if (FUNC_0(VAR_9->soc->caps, VAR_2)) {
  if (VAR_10->flags & VAR_4) {
   FUNC_5(VAR_9->dev,
      FUNC_2(VAR_10, VAR_5),
      FUNC_3(VAR_10, VAR_7),
      VAR_0);
  } else if (VAR_10->flags & VAR_3) {
   FUNC_4(VAR_9->dev,
           FUNC_2(VAR_10, VAR_5),
           FUNC_3(VAR_10, VAR_7),
           VAR_0);
  }
 } else {
  if (FUNC_3(VAR_10, VAR_7)) {
   FUNC_4(VAR_9->dev,
           FUNC_2(VAR_10, VAR_5),
           FUNC_3(VAR_10, VAR_7),
           VAR_0);
  }

  if (FUNC_3(VAR_10, VAR_8)) {
   FUNC_4(VAR_9->dev,
           FUNC_2(VAR_10, VAR_6),
           FUNC_3(VAR_10, VAR_8),
           VAR_0);
  }
 }

 VAR_10->flags = 0;
 if (VAR_10->skb &&
     (VAR_10->skb != (struct sk_buff *)VAR_1))
  FUNC_1(VAR_10->skb);
 VAR_10->skb = ((void*)0);
}
