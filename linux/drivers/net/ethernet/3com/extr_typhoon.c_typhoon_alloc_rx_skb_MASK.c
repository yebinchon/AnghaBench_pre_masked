
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct typhoon_indexes {void* rxBuffReady; int rxBuffCleared; } ;
struct basic_ring {int lastWrite; scalar_t__ ringBase; } ;
struct typhoon {int pdev; int dev; struct basic_ring rxBuffRing; struct rxbuff_ent* rxbuffers; struct typhoon_indexes* indexes; } ;
struct sk_buff {int data; } ;
struct rxbuff_ent {int dma_addr; struct sk_buff* skb; } ;
struct rx_free {size_t virtAddr; void* physAddr; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 struct sk_buff* FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (struct sk_buff*,int) ;
 int FUNC_5 (int*,int) ;
 int FUNC_6 () ;

__attribute__((used)) static int
FUNC_7(struct typhoon *VAR_4, u32 VAR_5)
{
 struct typhoon_indexes *VAR_6 = VAR_4->indexes;
 struct rxbuff_ent *VAR_7 = &VAR_4->rxbuffers[VAR_5];
 struct basic_ring *VAR_8 = &VAR_4->rxBuffRing;
 struct rx_free *VAR_9;
 struct sk_buff *VAR_10;
 dma_addr_t VAR_11;

 VAR_7->skb = ((void*)0);

 if((VAR_8->lastWrite + sizeof(*VAR_9)) % (VAR_3 * sizeof(*VAR_9)) ==
    FUNC_1(VAR_6->rxBuffCleared))
  return -VAR_0;

 VAR_10 = FUNC_2(VAR_4->dev, VAR_2);
 if(!VAR_10)
  return -VAR_0;
 VAR_11 = FUNC_3(VAR_4->pdev, VAR_10->data,
      VAR_2, VAR_1);




 VAR_9 = (struct rx_free *) (VAR_8->ringBase + VAR_8->lastWrite);
 FUNC_5(&VAR_8->lastWrite, 1);
 VAR_9->virtAddr = VAR_5;
 VAR_9->physAddr = FUNC_0(VAR_11);
 VAR_7->skb = VAR_10;
 VAR_7->dma_addr = VAR_11;


 FUNC_6();
 VAR_6->rxBuffReady = FUNC_0(VAR_8->lastWrite);
 return 0;
}
