
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mt7601u_tx_queue {int entries; TYPE_1__* e; int dev; } ;
struct TYPE_2__ {int urb; scalar_t__ skb; } ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct mt7601u_tx_queue *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->entries; VAR_1++) {
  FUNC_2(VAR_0->e[VAR_1].urb);
  if (VAR_0->e[VAR_1].skb)
   FUNC_0(VAR_0->dev, VAR_0->e[VAR_1].skb);
  FUNC_1(VAR_0->e[VAR_1].urb);
 }
}
