
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jme_ring {struct jme_buffer_info* bufinf; } ;
struct jme_buffer_info {scalar_t__ len; scalar_t__ mapping; int * skb; } ;
struct jme_adapter {int pdev; struct jme_ring* rxring; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_2(struct jme_adapter *VAR_1, int VAR_2)
{
 struct jme_ring *VAR_3 = &(VAR_1->rxring[0]);
 struct jme_buffer_info *VAR_4 = VAR_3->bufinf;
 VAR_4 += VAR_2;

 if (VAR_4->skb) {
  FUNC_1(VAR_1->pdev,
     VAR_4->mapping,
     VAR_4->len,
     VAR_0);
  FUNC_0(VAR_4->skb);
  VAR_4->skb = ((void*)0);
  VAR_4->mapping = 0;
  VAR_4->len = 0;
 }
}
