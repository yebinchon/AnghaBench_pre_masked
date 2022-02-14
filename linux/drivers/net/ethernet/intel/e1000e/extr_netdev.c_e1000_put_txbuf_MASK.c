
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct e1000_ring {struct e1000_adapter* adapter; } ;
struct e1000_buffer {scalar_t__ time_stamp; int * skb; int dma; int length; scalar_t__ mapped_as_page; } ;
struct e1000_adapter {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ,int ) ;
 int FUNC_3 (int *,int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct e1000_ring *VAR_1,
       struct e1000_buffer *VAR_2,
       bool VAR_3)
{
 struct e1000_adapter *VAR_4 = VAR_1->adapter;

 if (VAR_2->dma) {
  if (VAR_2->mapped_as_page)
   FUNC_2(&VAR_4->pdev->dev, VAR_2->dma,
           VAR_2->length, VAR_0);
  else
   FUNC_3(&VAR_4->pdev->dev, VAR_2->dma,
      VAR_2->length, VAR_0);
  VAR_2->dma = 0;
 }
 if (VAR_2->skb) {
  if (VAR_3)
   FUNC_1(VAR_2->skb);
  else
   FUNC_0(VAR_2->skb);
  VAR_2->skb = ((void*)0);
 }
 VAR_2->time_stamp = 0;
}
