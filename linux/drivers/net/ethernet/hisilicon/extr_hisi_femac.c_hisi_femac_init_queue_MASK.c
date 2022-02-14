
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct hisi_femac_queue {unsigned int num; scalar_t__ tail; scalar_t__ head; void* dma_phys; void* skb; } ;
struct device {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (struct device*,unsigned int,int,int ) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_2,
     struct hisi_femac_queue *VAR_3,
     unsigned int VAR_4)
{
 VAR_3->skb = FUNC_0(VAR_2, VAR_4, sizeof(struct sk_buff *),
      VAR_1);
 if (!VAR_3->skb)
  return -VAR_0;

 VAR_3->dma_phys = FUNC_0(VAR_2, VAR_4, sizeof(dma_addr_t),
           VAR_1);
 if (!VAR_3->dma_phys)
  return -VAR_0;

 VAR_3->num = VAR_4;
 VAR_3->head = 0;
 VAR_3->tail = 0;

 return 0;
}
