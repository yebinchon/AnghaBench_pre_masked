
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct b43legacy_dmaring {int nr_slots; int rx_buffersize; scalar_t__ tx; int used_slots; } ;
struct b43legacy_dmadesc_meta {int dmaaddr; TYPE_1__* skb; } ;
struct TYPE_2__ {int len; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct b43legacy_dmaring*,struct b43legacy_dmadesc_meta*,int ) ;
 int FUNC_2 (struct b43legacy_dmaring*,int,struct b43legacy_dmadesc_meta**) ;
 int FUNC_3 (struct b43legacy_dmaring*,int ,int ,int) ;

__attribute__((used)) static void FUNC_4(struct b43legacy_dmaring *VAR_0)
{
 struct b43legacy_dmadesc_meta *VAR_1;
 int VAR_2;

 if (!VAR_0->used_slots)
  return;
 for (VAR_2 = 0; VAR_2 < VAR_0->nr_slots; VAR_2++) {
  FUNC_2(VAR_0, VAR_2, &VAR_1);

  if (!VAR_1->skb) {
   FUNC_0(!VAR_0->tx);
   continue;
  }
  if (VAR_0->tx)
   FUNC_3(VAR_0, VAR_1->dmaaddr,
      VAR_1->skb->len, 1);
  else
   FUNC_3(VAR_0, VAR_1->dmaaddr,
      VAR_0->rx_buffersize, 0);
  FUNC_1(VAR_0, VAR_1, 0);
 }
}
