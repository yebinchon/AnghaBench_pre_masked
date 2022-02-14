
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct ssb_sprom {int revision; int* txpid2g; int* txpid5gl; int* txpid5g; int* txpid5gh; } ;
struct b43_phy {int rev; TYPE_3__* chandef; struct b43_phy_n* n; } ;
struct b43_wldev {struct b43_phy phy; int wl; TYPE_1__* dev; } ;
struct b43_phy_n {scalar_t__ hang_avoid; } ;
struct TYPE_6__ {TYPE_2__* chan; } ;
struct TYPE_5__ {int center_freq; } ;
struct TYPE_4__ {struct ssb_sprom* bus_sprom; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_2 (int ) ;
 int* FUNC_3 (struct b43_wldev*) ;
 scalar_t__ FUNC_4 (struct b43_wldev*) ;
 int FUNC_5 (struct b43_wldev*,int) ;
 int FUNC_6 (struct b43_wldev*,int ) ;
 int FUNC_7 (struct b43_wldev*,int ,int) ;
 int FUNC_8 (struct b43_wldev*,int ,int ) ;
 int FUNC_9 (struct b43_wldev*,int,int,int) ;
 int FUNC_10 (struct b43_wldev*,int,int) ;
 int FUNC_11 (struct b43_wldev*,int ,int) ;

__attribute__((used)) static void FUNC_12(struct b43_wldev *VAR_9)
{
 struct b43_phy *VAR_10 = &VAR_9->phy;
 struct b43_phy_n *VAR_11 = VAR_9->phy.n;
 struct ssb_sprom *VAR_12 = VAR_9->dev->bus_sprom;

 u8 VAR_13[2], VAR_14, VAR_15;
 u16 VAR_16, VAR_17, VAR_18;
 u16 VAR_19 = VAR_10->chandef->chan->center_freq;
 u32 VAR_20;


 if (VAR_11->hang_avoid)
  FUNC_5(VAR_9, 1);


 if (VAR_9->phy.rev >= 7) {
  VAR_13[0] = VAR_13[1] = 30;
 } else if (VAR_9->phy.rev >= 3) {
  VAR_13[0] = 40;
  VAR_13[1] = 40;
 } else if (VAR_12->revision < 4) {
  VAR_13[0] = 72;
  VAR_13[1] = 72;
 } else {
  if (FUNC_2(VAR_9->wl) == VAR_8) {
   VAR_13[0] = VAR_12->txpid2g[0];
   VAR_13[1] = VAR_12->txpid2g[1];
  } else if (VAR_19 >= 4900 && VAR_19 < 5100) {
   VAR_13[0] = VAR_12->txpid5gl[0];
   VAR_13[1] = VAR_12->txpid5gl[1];
  } else if (VAR_19 >= 5100 && VAR_19 < 5500) {
   VAR_13[0] = VAR_12->txpid5g[0];
   VAR_13[1] = VAR_12->txpid5g[1];
  } else if (VAR_19 >= 5500) {
   VAR_13[0] = VAR_12->txpid5gh[0];
   VAR_13[1] = VAR_12->txpid5gh[1];
  } else {
   VAR_13[0] = 91;
   VAR_13[1] = 91;
  }
 }
 if (VAR_9->phy.rev < 7 &&
     (VAR_13[0] < 40 || VAR_13[0] > 100 || VAR_13[1] < 40 || VAR_13[1] > 100))
  VAR_13[0] = VAR_13[1] = 91;
 for (VAR_15 = 0; VAR_15 < 2; VAR_15++) {
  const u32 *VAR_21 = FUNC_3(VAR_9);

  if (!VAR_21)
   break;
  VAR_20 = *(VAR_21 + VAR_13[VAR_15]);

  if (VAR_9->phy.rev >= 3)
   VAR_17 = (VAR_20 >> 16) & 0x1FFFF;
  else
   VAR_17 = (VAR_20 >> 16) & 0x1FFF;

  if (VAR_9->phy.rev >= 7)
   VAR_18 = (VAR_20 >> 8) & 0x7;
  else
   VAR_18 = (VAR_20 >> 8) & 0x3F;
  VAR_14 = VAR_20 & 0xFF;

  if (VAR_9->phy.rev >= 3) {
   if (VAR_15 == 0)
    FUNC_10(VAR_9, VAR_3, 0x0100);
   else
    FUNC_10(VAR_9, VAR_2, 0x0100);
  } else {
   FUNC_10(VAR_9, VAR_2, 0x4000);
  }

  if (VAR_15 == 0)
   FUNC_11(VAR_9, VAR_0, VAR_18);
  else
   FUNC_11(VAR_9, VAR_1, VAR_18);

  FUNC_7(VAR_9, FUNC_0(0x7, 0x110 + VAR_15), VAR_17);

  VAR_16 = FUNC_6(VAR_9, FUNC_0(0xF, 0x57));
  if (VAR_15 == 0)
   VAR_16 = (VAR_16 & 0x00FF) | (VAR_14 << 8);
  else
   VAR_16 = (VAR_16 & 0xFF00) | VAR_14;
  FUNC_7(VAR_9, FUNC_0(0xF, 0x57), VAR_16);

  if (FUNC_4(VAR_9)) {
   u32 VAR_22;
   u16 VAR_23 = (VAR_15 == 0) ?
    VAR_6 : VAR_7;
   VAR_22 = FUNC_6(VAR_9, FUNC_1(26 + VAR_15,
             576 + VAR_13[VAR_15]));
   FUNC_9(VAR_9, VAR_23, 0xE00F, (u32) VAR_22 << 4);
   FUNC_10(VAR_9, VAR_23, 0x4);
  }
 }

 FUNC_8(VAR_9, VAR_4, ~VAR_5);

 if (VAR_11->hang_avoid)
  FUNC_5(VAR_9, 0);
}
