
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pch_gbe_buffer {int mapped; int * skb; int length; int dma; } ;
struct pch_gbe_adapter {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(
 struct pch_gbe_adapter *VAR_1, struct pch_gbe_buffer *VAR_2)
{
 if (VAR_2->mapped) {
  FUNC_1(&VAR_1->pdev->dev, VAR_2->dma,
     VAR_2->length, VAR_0);
  VAR_2->mapped = 0;
 }
 if (VAR_2->skb) {
  FUNC_0(VAR_2->skb);
  VAR_2->skb = ((void*)0);
 }
}
