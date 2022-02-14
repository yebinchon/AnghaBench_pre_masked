
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ixgb_buffer {scalar_t__ time_stamp; int * skb; scalar_t__ dma; int length; scalar_t__ mapped_as_page; } ;
struct ixgb_adapter {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,scalar_t__,int ,int ) ;
 int FUNC_2 (int *,scalar_t__,int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct ixgb_adapter *VAR_1,
                                struct ixgb_buffer *VAR_2)
{
 if (VAR_2->dma) {
  if (VAR_2->mapped_as_page)
   FUNC_1(&VAR_1->pdev->dev, VAR_2->dma,
           VAR_2->length, VAR_0);
  else
   FUNC_2(&VAR_1->pdev->dev, VAR_2->dma,
      VAR_2->length, VAR_0);
  VAR_2->dma = 0;
 }

 if (VAR_2->skb) {
  FUNC_0(VAR_2->skb);
  VAR_2->skb = ((void*)0);
 }
 VAR_2->time_stamp = 0;



}
