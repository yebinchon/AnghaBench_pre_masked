
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skb_shared_info {int nr_frags; int * frags; } ;
struct sk_buff {scalar_t__ head; } ;
struct deferred_unmap_info {int pdev; int * addr; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,scalar_t__,int ) ;
 int FUNC_2 (int *) ;
 struct skb_shared_info* FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_6(struct sk_buff *VAR_1)
{
 int VAR_2;
 const dma_addr_t *VAR_3;
 const struct skb_shared_info *VAR_4;
 const struct deferred_unmap_info *VAR_5;

 VAR_5 = (struct deferred_unmap_info *)VAR_1->head;
 VAR_3 = VAR_5->addr;

 if (FUNC_4(VAR_1) - FUNC_5(VAR_1))
  FUNC_1(VAR_5->pdev, *VAR_3++, FUNC_4(VAR_1) -
     FUNC_5(VAR_1), VAR_0);

 VAR_4 = FUNC_3(VAR_1);
 for (VAR_2 = 0; VAR_2 < VAR_4->nr_frags; VAR_2++)
  FUNC_0(VAR_5->pdev, *VAR_3++, FUNC_2(&VAR_4->frags[VAR_2]),
          VAR_0);
}
