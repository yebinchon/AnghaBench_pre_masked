
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint ;
typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct nphy_txgains {int* ipa; int* pad; int* pga; int* txgm; int* txlpf; } ;
struct TYPE_2__ {int phy_rev; } ;
struct brcms_phy {scalar_t__ nphy_txpwrctrl; TYPE_1__ pubpi; scalar_t__ phyhang_avoid; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int) ;
 scalar_t__ VAR_1 ;
 int* FUNC_1 (struct brcms_phy*) ;
 int* VAR_2 ;
 int FUNC_2 (struct brcms_phy*,int) ;
 int FUNC_3 (struct brcms_phy*,int) ;
 int FUNC_4 (struct brcms_phy*,int ,int,int,int,int*) ;

struct nphy_txgains FUNC_5(struct brcms_phy *VAR_3)
{
 u16 VAR_4[2], VAR_5[2];
 u8 VAR_6;
 struct nphy_txgains VAR_7;
 u32 *VAR_8 = ((void*)0);

 if (VAR_3->nphy_txpwrctrl == VAR_1) {
  if (VAR_3->phyhang_avoid)
   FUNC_3(VAR_3, 1);

  FUNC_4(VAR_3, VAR_0, 2, 0x110, 16,
     VAR_5);

  if (VAR_3->phyhang_avoid)
   FUNC_3(VAR_3, 0);

  for (VAR_6 = 0; VAR_6 < 2; VAR_6++) {
   if (FUNC_0(VAR_3->pubpi.phy_rev, 7)) {
    VAR_7.ipa[VAR_6] =
     VAR_5[VAR_6] & 0x0007;
    VAR_7.pad[VAR_6] =
     ((VAR_5[VAR_6] & 0x00F8) >> 3);
    VAR_7.pga[VAR_6] =
     ((VAR_5[VAR_6] & 0x0F00) >> 8);
    VAR_7.txgm[VAR_6] =
     ((VAR_5[VAR_6] & 0x7000) >> 12);
    VAR_7.txlpf[VAR_6] =
     ((VAR_5[VAR_6] & 0x8000) >> 15);
   } else if (FUNC_0(VAR_3->pubpi.phy_rev, 3)) {
    VAR_7.ipa[VAR_6] =
     VAR_5[VAR_6] & 0x000F;
    VAR_7.pad[VAR_6] =
     ((VAR_5[VAR_6] & 0x00F0) >> 4);
    VAR_7.pga[VAR_6] =
     ((VAR_5[VAR_6] & 0x0F00) >> 8);
    VAR_7.txgm[VAR_6] =
     ((VAR_5[VAR_6] & 0x7000) >> 12);
   } else {
    VAR_7.ipa[VAR_6] =
     VAR_5[VAR_6] & 0x0003;
    VAR_7.pad[VAR_6] =
     ((VAR_5[VAR_6] & 0x000C) >> 2);
    VAR_7.pga[VAR_6] =
     ((VAR_5[VAR_6] & 0x0070) >> 4);
    VAR_7.txgm[VAR_6] =
     ((VAR_5[VAR_6] & 0x0380) >> 7);
   }
  }
 } else {
  uint VAR_9 = VAR_3->pubpi.phy_rev;

  VAR_4[0] = (FUNC_2(VAR_3, 0x1ed) >> 8) & 0x7f;
  VAR_4[1] = (FUNC_2(VAR_3, 0x1ee) >> 8) & 0x7f;
  for (VAR_6 = 0; VAR_6 < 2; VAR_6++) {
   if (FUNC_0(VAR_9, 3)) {
    VAR_8 =
     FUNC_1(VAR_3);
    if (FUNC_0(VAR_9, 7)) {
     VAR_7.ipa[VAR_6] =
      (VAR_8
       [VAR_4[VAR_6]]
       >> 16) & 0x7;
     VAR_7.pad[VAR_6] =
      (VAR_8
       [VAR_4[VAR_6]]
       >> 19) & 0x1f;
     VAR_7.pga[VAR_6] =
      (VAR_8
       [VAR_4[VAR_6]]
       >> 24) & 0xf;
     VAR_7.txgm[VAR_6] =
      (VAR_8
       [VAR_4[VAR_6]]
       >> 28) & 0x7;
     VAR_7.txlpf[VAR_6] =
      (VAR_8
       [VAR_4[VAR_6]]
       >> 31) & 0x1;
    } else {
     VAR_7.ipa[VAR_6] =
      (VAR_8
       [VAR_4[VAR_6]]
       >> 16) & 0xf;
     VAR_7.pad[VAR_6] =
      (VAR_8
       [VAR_4[VAR_6]]
       >> 20) & 0xf;
     VAR_7.pga[VAR_6] =
      (VAR_8
       [VAR_4[VAR_6]]
       >> 24) & 0xf;
     VAR_7.txgm[VAR_6] =
      (VAR_8
      [VAR_4[VAR_6]]
       >> 28) & 0x7;
    }
   } else {
    VAR_7.ipa[VAR_6] =
     (VAR_2[VAR_4[VAR_6]] >>
      16) & 0x3;
    VAR_7.pad[VAR_6] =
     (VAR_2[VAR_4[VAR_6]] >>
      18) & 0x3;
    VAR_7.pga[VAR_6] =
     (VAR_2[VAR_4[VAR_6]] >>
      20) & 0x7;
    VAR_7.txgm[VAR_6] =
     (VAR_2[VAR_4[VAR_6]] >>
      23) & 0x7;
   }
  }
 }

 return VAR_7;
}
