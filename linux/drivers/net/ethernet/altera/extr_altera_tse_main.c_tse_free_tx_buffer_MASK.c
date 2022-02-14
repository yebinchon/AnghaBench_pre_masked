
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tse_buffer {int * skb; scalar_t__ dma_addr; int len; scalar_t__ mapped_as_page; } ;
struct altera_tse_private {int device; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,scalar_t__,int ,int ) ;
 int FUNC_2 (int ,scalar_t__,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct altera_tse_private *VAR_1,
          struct tse_buffer *VAR_2)
{
 if (VAR_2->dma_addr) {
  if (VAR_2->mapped_as_page)
   FUNC_1(VAR_1->device, VAR_2->dma_addr,
           VAR_2->len, VAR_0);
  else
   FUNC_2(VAR_1->device, VAR_2->dma_addr,
      VAR_2->len, VAR_0);
  VAR_2->dma_addr = 0;
 }
 if (VAR_2->skb) {
  FUNC_0(VAR_2->skb);
  VAR_2->skb = ((void*)0);
 }
}
