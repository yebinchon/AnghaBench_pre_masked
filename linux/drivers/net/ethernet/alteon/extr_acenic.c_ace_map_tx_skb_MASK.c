
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tx_ring_info {struct sk_buff* skb; } ;
struct sk_buff {int len; int data; } ;
struct ace_private {TYPE_1__* skb; int pdev; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {struct tx_ring_info* tx_skbuff; } ;


 int VAR_0 ;
 int FUNC_0 (struct tx_ring_info*,int ,int ) ;
 int FUNC_1 (struct tx_ring_info*,int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int ,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static inline dma_addr_t
FUNC_5(struct ace_private *VAR_2, struct sk_buff *VAR_3,
        struct sk_buff *VAR_4, u32 VAR_5)
{
 dma_addr_t VAR_6;
 struct tx_ring_info *VAR_7;

 VAR_6 = FUNC_3(VAR_2->pdev, FUNC_4(VAR_3->data),
          FUNC_2(VAR_3->data),
          VAR_3->len, VAR_0);

 VAR_7 = VAR_2->skb->tx_skbuff + VAR_5;
 VAR_7->skb = VAR_4;
 FUNC_0(VAR_7, VAR_6, VAR_6);
 FUNC_1(VAR_7, VAR_1, VAR_3->len);
 return VAR_6;
}
