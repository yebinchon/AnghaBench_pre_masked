
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct b43_dmaring {TYPE_2__* dev; scalar_t__ tx; } ;
struct b43_dmadesc_meta {int * skb; } ;
struct TYPE_4__ {TYPE_1__* wl; } ;
struct TYPE_3__ {int hw; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static inline
    void FUNC_2(struct b43_dmaring *VAR_0,
    struct b43_dmadesc_meta *VAR_1)
{
 if (VAR_1->skb) {
  if (VAR_0->tx)
   FUNC_1(VAR_0->dev->wl->hw, VAR_1->skb);
  else
   FUNC_0(VAR_1->skb);
  VAR_1->skb = ((void*)0);
 }
}
