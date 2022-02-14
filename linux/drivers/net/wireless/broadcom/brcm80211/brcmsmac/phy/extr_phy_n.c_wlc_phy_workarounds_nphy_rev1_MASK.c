
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint ;
typedef int u8 ;
typedef int u16 ;
struct TYPE_4__ {int phy_rev; } ;
struct brcms_phy {TYPE_2__ pubpi; TYPE_1__* sh; scalar_t__ phy_5g_pwrgain; int radio_chanspec; } ;
typedef int s16 ;
struct TYPE_3__ {int boardflags2; int boardtype; int physhim; } ;


 size_t FUNC_0 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;







 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (int ,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (struct brcms_phy*,int ,int) ;
 int FUNC_5 (struct brcms_phy*,int,int,int) ;
 int FUNC_6 (struct brcms_phy*,int ,int) ;
 int FUNC_7 (struct brcms_phy*,int) ;
 int FUNC_8 (int ,int ,int ,int ,int ) ;
 int FUNC_9 (struct brcms_phy*,int ,int const*,int const*,size_t) ;
 int FUNC_10 (struct brcms_phy*,int,int,int,int,int*) ;
 int FUNC_11 (struct brcms_phy*) ;
 int FUNC_12 (struct brcms_phy*,int,int) ;

__attribute__((used)) static void FUNC_13(struct brcms_phy *VAR_10)
{
 static const u8 VAR_11[] = {
  132,
  131,
  129,
  134,
  130,
  128,
  133
 };
 u8 VAR_12[] = { 8, 6, 6, 2, 4, 60, 1 };
 static const u8 VAR_13[] = {
  132,
  133,
  128,
  130,
  129,
  131,
  134
 };
 static const u8 VAR_14[] = { 8, 6, 2, 4, 4, 6, 1 };
 s16 VAR_15, VAR_16, VAR_17;
 s16 VAR_18, VAR_19, VAR_20;
 u16 VAR_21;

 if (VAR_10->sh->boardflags2 & VAR_0 ||
     (VAR_10->sh->boardtype == 0x8b)) {
  uint VAR_22;
  u8 VAR_23[] = { 1, 6, 6, 2, 4, 20, 1 };
  for (VAR_22 = 0; VAR_22 < FUNC_0(VAR_12); VAR_22++)
   VAR_12[VAR_22] = VAR_23[VAR_22];
 }

 if (FUNC_1(VAR_10->radio_chanspec) && VAR_10->phy_5g_pwrgain) {
  FUNC_4(VAR_10, VAR_8, 0xf7);
  FUNC_4(VAR_10, VAR_9, 0xf7);
 } else {
  FUNC_6(VAR_10, VAR_8, 0x8);
  FUNC_6(VAR_10, VAR_9, 0x8);
 }

 VAR_21 = 0x000a;
 FUNC_10(VAR_10, 8, 1, 0, 16, &VAR_21);
 FUNC_10(VAR_10, 8, 1, 0x10, 16, &VAR_21);

 if (FUNC_3(VAR_10->pubpi.phy_rev, 3)) {
  VAR_21 = 0xcdaa;
  FUNC_10(VAR_10, 8, 1, 0x02, 16, &VAR_21);
  FUNC_10(VAR_10, 8, 1, 0x12, 16, &VAR_21);
 }

 if (FUNC_3(VAR_10->pubpi.phy_rev, 2)) {
  VAR_21 = 0x0000;
  FUNC_10(VAR_10, 8, 1, 0x08, 16, &VAR_21);
  FUNC_10(VAR_10, 8, 1, 0x18, 16, &VAR_21);

  VAR_21 = 0x7aab;
  FUNC_10(VAR_10, 8, 1, 0x07, 16, &VAR_21);
  FUNC_10(VAR_10, 8, 1, 0x17, 16, &VAR_21);

  VAR_21 = 0x0800;
  FUNC_10(VAR_10, 8, 1, 0x06, 16, &VAR_21);
  FUNC_10(VAR_10, 8, 1, 0x16, 16, &VAR_21);
 }

 FUNC_12(VAR_10, 0xf8, 0x02d8);
 FUNC_12(VAR_10, 0xf9, 0x0301);
 FUNC_12(VAR_10, 0xfa, 0x02d8);
 FUNC_12(VAR_10, 0xfb, 0x0301);

 FUNC_9(VAR_10, VAR_6, VAR_11,
          VAR_12,
          FUNC_0(VAR_11));

 FUNC_9(VAR_10, VAR_7, VAR_13,
          VAR_14,
          FUNC_0(VAR_13));

 FUNC_11(VAR_10);

 if (FUNC_3(VAR_10->pubpi.phy_rev, 2)) {

  if (FUNC_7(VAR_10, 0xa0) & VAR_5)
   FUNC_8(VAR_10->sh->physhim, VAR_2,
           VAR_3,
           VAR_3, VAR_1);

 } else if (FUNC_2(VAR_10->pubpi.phy_rev, 2)) {
  FUNC_12(VAR_10, 0x1e3, 0x0);
  FUNC_12(VAR_10, 0x1e4, 0x0);
 }

 if (FUNC_3(VAR_10->pubpi.phy_rev, 2))
  FUNC_5(VAR_10, 0x90, (0x1 << 7), 0);

 VAR_15 = 293;
 VAR_16 = 435;
 VAR_17 = 261;
 VAR_18 = 366;
 VAR_19 = 205;
 VAR_20 = 32;
 FUNC_12(VAR_10, 0x145, VAR_15);
 FUNC_12(VAR_10, 0x146, VAR_16);
 FUNC_12(VAR_10, 0x147, VAR_17);
 FUNC_12(VAR_10, 0x148, VAR_18);
 FUNC_12(VAR_10, 0x149, VAR_19);
 FUNC_12(VAR_10, 0x14a, VAR_20);

 if (FUNC_3(VAR_10->pubpi.phy_rev, 3)) {
  FUNC_5(VAR_10, 0x142, (0xf << 12), 0);

  FUNC_12(VAR_10, 0x192, 0xb5);
  FUNC_12(VAR_10, 0x193, 0xa4);
  FUNC_12(VAR_10, 0x194, 0x0);
 }

 if (FUNC_2(VAR_10->pubpi.phy_rev, 2))
  FUNC_5(VAR_10, 0x221,
       VAR_4,
       VAR_4);
}
