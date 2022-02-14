
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct velocity_td_info {int nskb_dma; TYPE_2__* skb; scalar_t__* skb_dma; } ;
struct TYPE_3__ {struct velocity_td_info** infos; } ;
struct velocity_info {int dev; TYPE_1__ tx; } ;
struct TYPE_4__ {int len; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,scalar_t__,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct velocity_info *VAR_1,
        int VAR_2, int VAR_3)
{
 struct velocity_td_info *VAR_4 = &(VAR_1->tx.infos[VAR_2][VAR_3]);
 int VAR_5;

 if (VAR_4 == ((void*)0))
  return;

 if (VAR_4->skb) {
  for (VAR_5 = 0; VAR_5 < VAR_4->nskb_dma; VAR_5++) {
   if (VAR_4->skb_dma[VAR_5]) {
    FUNC_1(VAR_1->dev, VAR_4->skb_dma[VAR_5],
     VAR_4->skb->len, VAR_0);
    VAR_4->skb_dma[VAR_5] = 0;
   }
  }
  FUNC_0(VAR_4->skb);
  VAR_4->skb = ((void*)0);
 }
}
