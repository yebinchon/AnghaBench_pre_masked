
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct b43_pio_txqueue {TYPE_2__* dev; struct b43_pio_txpacket* packets; } ;
struct b43_pio_txpacket {int * skb; } ;
struct TYPE_4__ {TYPE_1__* wl; } ;
struct TYPE_3__ {int hw; } ;


 unsigned int FUNC_0 (struct b43_pio_txpacket*) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct b43_pio_txqueue *VAR_0)
{
 struct b43_pio_txpacket *VAR_1;
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0->packets); VAR_2++) {
  VAR_1 = &(VAR_0->packets[VAR_2]);
  if (VAR_1->skb) {
   FUNC_1(VAR_0->dev->wl->hw, VAR_1->skb);
   VAR_1->skb = ((void*)0);
  }
 }
}
