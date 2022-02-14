
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tse_buffer {scalar_t__ dma_addr; struct sk_buff* skb; int len; } ;
struct sk_buff {int dummy; } ;
struct altera_tse_private {int device; } ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,scalar_t__,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct altera_tse_private *VAR_1,
          struct tse_buffer *VAR_2)
{
 struct sk_buff *VAR_3 = VAR_2->skb;
 dma_addr_t VAR_4 = VAR_2->dma_addr;

 if (VAR_3 != ((void*)0)) {
  if (VAR_4)
   FUNC_1(VAR_1->device, VAR_4,
      VAR_2->len,
      VAR_0);
  FUNC_0(VAR_3);
  VAR_2->skb = ((void*)0);
  VAR_2->dma_addr = 0;
 }
}
