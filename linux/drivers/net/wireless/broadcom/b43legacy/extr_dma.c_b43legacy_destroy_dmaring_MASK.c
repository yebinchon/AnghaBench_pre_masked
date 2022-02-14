
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct b43legacy_dmaring {struct b43legacy_dmaring* meta; struct b43legacy_dmaring* txhdr_cache; int nr_slots; int max_used_slots; scalar_t__ tx; int mmio_base; scalar_t__ type; TYPE_1__* dev; } ;
struct TYPE_2__ {int wl; } ;


 int FUNC_0 (int ,char*,unsigned int,int ,char*,int ,int ) ;
 int FUNC_1 (struct b43legacy_dmaring*) ;
 int FUNC_2 (struct b43legacy_dmaring*) ;
 int FUNC_3 (struct b43legacy_dmaring*) ;
 int FUNC_4 (struct b43legacy_dmaring*) ;

__attribute__((used)) static void FUNC_5(struct b43legacy_dmaring *VAR_0)
{
 if (!VAR_0)
  return;

 FUNC_0(VAR_0->dev->wl, "DMA-%u 0x%04X (%s) max used slots:"
       " %d/%d\n", (unsigned int)(VAR_0->type), VAR_0->mmio_base,
       (VAR_0->tx) ? "TX" : "RX", VAR_0->max_used_slots,
       VAR_0->nr_slots);



 FUNC_1(VAR_0);
 FUNC_2(VAR_0);
 FUNC_3(VAR_0);

 FUNC_4(VAR_0->txhdr_cache);
 FUNC_4(VAR_0->meta);
 FUNC_4(VAR_0);
}
