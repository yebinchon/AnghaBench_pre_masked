
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u8 ;
struct nphy_gain_ctl_workaround_entry {int cliplo_gain; int* rfseq_init; int init_gain; int crsminu; } ;
struct b43_phy {int rev; int radio_rev; } ;
struct b43_wldev {TYPE_4__* dev; struct b43_phy phy; } ;
struct TYPE_8__ {TYPE_3__* bus_sprom; } ;
struct TYPE_5__ {size_t tr_iso; } ;
struct TYPE_6__ {TYPE_1__ ghz2; } ;
struct TYPE_7__ {TYPE_2__ fem; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct b43_wldev*) ;
 struct nphy_gain_ctl_workaround_entry VAR_0 ;
 struct nphy_gain_ctl_workaround_entry** VAR_1 ;

struct nphy_gain_ctl_workaround_entry *FUNC_2(
 struct b43_wldev *VAR_2, bool VAR_3, bool VAR_4)
{
 struct b43_phy *VAR_5 = &VAR_2->phy;
 struct nphy_gain_ctl_workaround_entry *VAR_6;
 u8 VAR_7;

 if (!VAR_3 && VAR_2->phy.rev >= 6 && VAR_2->phy.radio_rev == 11)
  return &VAR_0;

 FUNC_0(VAR_2->phy.rev < 3);
 if (VAR_2->phy.rev >= 6)
  VAR_7 = 3;
 else if (VAR_2->phy.rev == 5)
  VAR_7 = 2;
 else if (VAR_2->phy.rev == 4)
  VAR_7 = 1;
 else
  VAR_7 = 0;
 VAR_6 = &VAR_1[VAR_3][VAR_7];


 if (!VAR_3) {
  u8 VAR_8 = VAR_2->dev->bus_sprom->fem.ghz2.tr_iso;

  if (VAR_8 > 7)
   VAR_8 = 3;

  if (VAR_5->rev >= 6) {
   static const int VAR_9[] = { 0x106a, 0x106c, 0x1074,
        0x107c, 0x007e, 0x107e,
        0x207e, 0x307e, };

   VAR_6->cliplo_gain = VAR_9[VAR_8];
  } else if (VAR_5->rev == 5) {
   static const int VAR_10[] = { 0x0062, 0x0064, 0x006a,
        0x106a, 0x106c, 0x1074,
        0x107c, 0x207c, };

   VAR_6->cliplo_gain = VAR_10[VAR_8];
  }

  if (VAR_5->rev >= 5 && VAR_4) {
   VAR_6->rfseq_init[0] &= ~0x4000;
   VAR_6->rfseq_init[1] &= ~0x4000;
   VAR_6->rfseq_init[2] &= ~0x4000;
   VAR_6->rfseq_init[3] &= ~0x4000;
   VAR_6->init_gain &= ~0x4000;
  }
 } else {
  if (VAR_5->rev >= 6) {
   if (VAR_5->radio_rev == 11 && !FUNC_1(VAR_2))
    VAR_6->crsminu = 0x2d;
  } else if (VAR_5->rev == 4 && VAR_4) {
   VAR_6->rfseq_init[0] &= ~0x4000;
   VAR_6->rfseq_init[1] &= ~0x4000;
   VAR_6->rfseq_init[2] &= ~0x4000;
   VAR_6->rfseq_init[3] &= ~0x4000;
   VAR_6->init_gain &= ~0x4000;
   VAR_6->rfseq_init[0] |= 0x1000;
   VAR_6->rfseq_init[1] |= 0x1000;
   VAR_6->rfseq_init[2] |= 0x1000;
   VAR_6->rfseq_init[3] |= 0x1000;
   VAR_6->init_gain |= 0x1000;
  }
 }

 return VAR_6;
}
