
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int data; } ;
struct jme_ring {struct jme_buffer_info* bufinf; } ;
struct jme_buffer_info {int mapping; int len; struct sk_buff* skb; } ;
struct jme_adapter {int pdev; TYPE_1__* dev; struct jme_ring* rxring; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {scalar_t__ mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int ) ;
 struct sk_buff* FUNC_2 (TYPE_1__*,scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int FUNC_7 (struct sk_buff*) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int
FUNC_10(struct jme_adapter *VAR_3, int VAR_4)
{
 struct jme_ring *VAR_5 = &(VAR_3->rxring[0]);
 struct jme_buffer_info *VAR_6 = VAR_5->bufinf + VAR_4;
 struct sk_buff *VAR_7;
 dma_addr_t VAR_8;

 VAR_7 = FUNC_2(VAR_3->dev,
  VAR_3->dev->mtu + VAR_2);
 if (FUNC_8(!VAR_7))
  return -VAR_0;

 VAR_8 = FUNC_5(VAR_3->pdev, FUNC_9(VAR_7->data),
          FUNC_3(VAR_7->data), FUNC_7(VAR_7),
          VAR_1);
 if (FUNC_8(FUNC_4(VAR_3->pdev, VAR_8))) {
  FUNC_0(VAR_7);
  return -VAR_0;
 }

 if (FUNC_1(VAR_6->mapping))
  FUNC_6(VAR_3->pdev, VAR_6->mapping,
          VAR_6->len, VAR_1);

 VAR_6->skb = VAR_7;
 VAR_6->len = FUNC_7(VAR_7);
 VAR_6->mapping = VAR_8;
 return 0;
}
