
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint ;
typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_10__ {int extpagain; } ;
struct TYPE_9__ {int extpagain; } ;
struct TYPE_8__ {size_t phy_rev; size_t phy_corenum; } ;
struct brcms_phy {scalar_t__ phyhang_avoid; TYPE_5__ srom_fem2g; TYPE_4__ srom_fem5g; int radio_chanspec; TYPE_3__ pubpi; TYPE_2__* nphy_txpwrindex; TYPE_1__* sh; } ;
typedef int s32 ;
typedef int s16 ;
struct TYPE_7__ {int index_internal; int index_internal_save; } ;
struct TYPE_6__ {int sromrev; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (size_t,int) ;
 scalar_t__ FUNC_2 (size_t,int) ;
 scalar_t__ FUNC_3 (size_t,int) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ FUNC_4 (struct brcms_phy*) ;




 int FUNC_5 (struct brcms_phy*,int,int) ;
 int FUNC_6 (struct brcms_phy*,int,int,int) ;
 int* VAR_4 ;
 int* VAR_5 ;
 int* VAR_6 ;
 int* VAR_7 ;
 int* VAR_8 ;
 int* VAR_9 ;
 int* VAR_10 ;
 int FUNC_7 (struct brcms_phy*,int ) ;
 int* FUNC_8 (struct brcms_phy*) ;
 int FUNC_9 (struct brcms_phy*,int) ;
 int FUNC_10 (struct brcms_phy*,int,int,int,int,int*) ;
 int FUNC_11 (struct brcms_phy*,int,int,int,int,int*) ;
 int FUNC_12 (struct brcms_phy*,int,int) ;

void FUNC_13(struct brcms_phy *VAR_11)
{
 uint VAR_12;
 u32 VAR_13;
 u16 VAR_14, VAR_15, VAR_16, VAR_17;
 u8 VAR_18[2], VAR_19;
 s32 VAR_20;

 if (VAR_11->phyhang_avoid)
  FUNC_9(VAR_11, 1);

 if (VAR_11->sh->sromrev < 4) {
  VAR_18[0] = VAR_18[1] = 72;
 } else {

  VAR_19 = FUNC_7(VAR_11, 0);
  switch (VAR_19) {
  case 131:
  case 129:
  case 128:
  case 130:
   VAR_18[0] = 0;
   VAR_18[1] = 0;
   break;
  default:
   VAR_18[0] = VAR_18[1] = 91;
   break;
  }
 }

 if (FUNC_1(VAR_11->pubpi.phy_rev, 7))
  VAR_18[0] = VAR_18[1] = 30;
 else if (FUNC_1(VAR_11->pubpi.phy_rev, 3))
  VAR_18[0] = VAR_18[1] = 40;

 if (FUNC_3(VAR_11->pubpi.phy_rev, 7)) {

  if ((VAR_18[0] < 40) || (VAR_18[0] > 100) ||
      (VAR_18[1] < 40) || (VAR_18[1] > 100))
   VAR_18[0] = VAR_18[1] = 91;
 }

 VAR_11->nphy_txpwrindex[VAR_2].index_internal = VAR_18[0];
 VAR_11->nphy_txpwrindex[VAR_3].index_internal = VAR_18[1];
 VAR_11->nphy_txpwrindex[VAR_2].index_internal_save = VAR_18[0];
 VAR_11->nphy_txpwrindex[VAR_3].index_internal_save = VAR_18[1];

 for (VAR_12 = 0; VAR_12 < VAR_11->pubpi.phy_corenum; VAR_12++) {
  uint VAR_21 = VAR_11->pubpi.phy_rev;

  if (FUNC_1(VAR_21, 3)) {
   if (FUNC_4(VAR_11)) {
    u32 *VAR_22 =
     FUNC_8(VAR_11);
    VAR_13 = VAR_22[VAR_18[VAR_12]];
   } else {
    if (FUNC_0(VAR_11->radio_chanspec)) {
     if (FUNC_2(VAR_21, 3)) {
      VAR_13 =
            VAR_5
           [VAR_18[VAR_12]];
     } else if (FUNC_2(VAR_21, 4)) {
      VAR_13 = (
        VAR_11->srom_fem5g.extpagain ==
        3) ?
        VAR_4
       [VAR_18[VAR_12]] :
       VAR_6
       [VAR_18[VAR_12]];
     } else {
      VAR_13 =
            VAR_7
           [VAR_18[VAR_12]];
     }
    } else {
     if (FUNC_1(VAR_21, 5) &&
         (VAR_11->srom_fem2g.extpagain == 3)) {
      VAR_13 =
       VAR_9
       [VAR_18[VAR_12]];
     } else {
      VAR_13 = VAR_10
        [VAR_18[VAR_12]];
     }
    }
   }
  } else {
   VAR_13 = VAR_8[VAR_18[VAR_12]];
  }

  if (FUNC_1(VAR_21, 3))
   VAR_14 = (VAR_13 >> 16) & ((1 << (32 - 16 + 1)) - 1);
  else
   VAR_14 = (VAR_13 >> 16) & ((1 << (28 - 16 + 1)) - 1);

  if (FUNC_1(VAR_21, 7))
   VAR_15 = (VAR_13 >> 8) & ((1 << (10 - 8 + 1)) - 1);
  else
   VAR_15 = (VAR_13 >> 8) & ((1 << (13 - 8 + 1)) - 1);

  VAR_16 = (VAR_13 >> 0) & ((1 << (7 - 0 + 1)) - 1);

  if (FUNC_1(VAR_21, 3))
   FUNC_6(VAR_11, ((VAR_12 == VAR_2) ? 0x8f :
      0xa5), (0x1 << 8), (0x1 << 8));
  else
   FUNC_6(VAR_11, 0xa5, (0x1 << 14), (0x1 << 14));

  FUNC_12(VAR_11, (VAR_12 == VAR_2) ? 0xaa : 0xab, VAR_15);

  FUNC_11(VAR_11, 7, 1, (0x110 + VAR_12), 16,
      &VAR_14);

  FUNC_10(VAR_11, 15, 1, 87, 16, &VAR_17);
  VAR_17 &= ((VAR_12 == VAR_2) ? 0x00ff : 0xff00);
  VAR_17 |= ((VAR_12 == VAR_2) ? (VAR_16 << 8) : (VAR_16 << 0));
  FUNC_11(VAR_11, 15, 1, 87, 16, &VAR_17);

  if (FUNC_4(VAR_11)) {
   FUNC_10(VAR_11,
      (VAR_12 ==
       VAR_2 ?
       VAR_0 :
       VAR_1), 1,
      576 + VAR_18[VAR_12], 32,
      &VAR_20);

   FUNC_6(VAR_11, (VAR_12 == VAR_2) ? 0x297 :
        0x29b, (0x1ff << 4),
        ((s16) VAR_20) << 4);

   FUNC_6(VAR_11, (VAR_12 == VAR_2) ? 0x297 :
        0x29b, (0x1 << 2), (1) << 2);

  }
 }

 FUNC_5(VAR_11, 0xbf, (u16) (~(0x1f << 0)));

 if (VAR_11->phyhang_avoid)
  FUNC_9(VAR_11, 0);
}
