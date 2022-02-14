
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {scalar_t__ phy_corenum; int radiorev; int phy_rev; } ;
struct brcms_phy {TYPE_1__ pubpi; int radio_chanspec; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_3 (struct brcms_phy*,int ,int ,scalar_t__,int ,int) ;
 int FUNC_4 (struct brcms_phy*,int ,int ,scalar_t__,int ,int) ;
 int FUNC_5 (struct brcms_phy*,int ,int ,int) ;

__attribute__((used)) static void FUNC_6(struct brcms_phy *VAR_17)
{
 u8 VAR_18;

 if (FUNC_1(VAR_17->pubpi.phy_rev, 7)) {
  for (VAR_18 = 0; VAR_18 < VAR_17->pubpi.phy_corenum; VAR_18++) {
   if (FUNC_0(VAR_17->radio_chanspec)) {
    FUNC_4(VAR_17, VAR_4, VAR_13, VAR_18,
       VAR_15, 0x5);
    FUNC_4(VAR_17, VAR_4, VAR_13, VAR_18,
       VAR_16, 0xe);

    if (VAR_17->pubpi.radiorev != 5)
     FUNC_4(VAR_17, VAR_4, VAR_13,
        VAR_18, VAR_7, 0);

    if (!FUNC_2(VAR_17->pubpi.phy_rev, 7))
     FUNC_4(VAR_17, VAR_4, VAR_13,
        VAR_18, VAR_8, 0x1);
    else
     FUNC_4(VAR_17, VAR_4, VAR_13,
        VAR_18, VAR_8, 0x31);
   } else {
    FUNC_4(VAR_17, VAR_4, VAR_13, VAR_18,
       VAR_15, 0x9);
    FUNC_4(VAR_17, VAR_4, VAR_13, VAR_18,
       VAR_16, 0xc);
    FUNC_4(VAR_17, VAR_4, VAR_13, VAR_18,
       VAR_8, 0);

    if (VAR_17->pubpi.radiorev != 5) {
     if (!FUNC_2(VAR_17->pubpi.phy_rev, 7))
      FUNC_4(VAR_17, VAR_4,
         VAR_13, VAR_18,
         VAR_7, 0x1);
     else
      FUNC_4(VAR_17, VAR_4,
         VAR_13, VAR_18,
         VAR_7, 0x31);
    }
   }
   FUNC_4(VAR_17, VAR_4, VAR_13, VAR_18, VAR_2,
      0);
   FUNC_4(VAR_17, VAR_4, VAR_13, VAR_18, VAR_1,
      0);
   FUNC_4(VAR_17, VAR_4, VAR_13, VAR_18, VAR_12,
      0x3);
   FUNC_4(VAR_17, VAR_4, VAR_13, VAR_18, VAR_9,
      0x0);
  }
 } else {
  FUNC_5(VAR_17, VAR_3, VAR_6,
    (FUNC_0(VAR_17->radio_chanspec)) ? 0x128 :
    0x80);
  FUNC_5(VAR_17, VAR_3, VAR_5, 0x0);
  FUNC_5(VAR_17, VAR_3, VAR_0, 0x29);

  for (VAR_18 = 0; VAR_18 < VAR_17->pubpi.phy_corenum; VAR_18++) {
   FUNC_3(VAR_17, VAR_3, VAR_13, VAR_18, VAR_2,
      0x0);
   FUNC_3(VAR_17, VAR_3, VAR_13, VAR_18, VAR_1,
      0x0);
   FUNC_3(VAR_17, VAR_3, VAR_13, VAR_18, VAR_12,
      0x3);
   FUNC_3(VAR_17, VAR_3, VAR_13, VAR_18, VAR_14,
      0x0);
   FUNC_3(VAR_17, VAR_3, VAR_13, VAR_18, VAR_9,
      0x8);
   FUNC_3(VAR_17, VAR_3, VAR_13, VAR_18, VAR_10,
      0x0);
   FUNC_3(VAR_17, VAR_3, VAR_13, VAR_18, VAR_11,
      0x0);

   if (FUNC_0(VAR_17->radio_chanspec)) {
    FUNC_3(VAR_17, VAR_3, VAR_13, VAR_18,
       VAR_15, 0x5);

    if (VAR_17->pubpi.radiorev != 5)
     FUNC_3(VAR_17, VAR_3, VAR_13,
        VAR_18, VAR_7, 0x0);
    if (FUNC_1(VAR_17->pubpi.phy_rev, 5))
     FUNC_3(VAR_17, VAR_3, VAR_13,
        VAR_18, VAR_8, 0x31);
    else
     FUNC_3(VAR_17, VAR_3, VAR_13,
        VAR_18, VAR_8, 0x11);
    FUNC_3(VAR_17, VAR_3, VAR_13, VAR_18,
       VAR_16, 0xe);
   } else {
    FUNC_3(VAR_17, VAR_3, VAR_13, VAR_18,
       VAR_15, 0x9);
    FUNC_3(VAR_17, VAR_3, VAR_13, VAR_18,
       VAR_7, 0x31);
    FUNC_3(VAR_17, VAR_3, VAR_13, VAR_18,
       VAR_8, 0x0);
    FUNC_3(VAR_17, VAR_3, VAR_13, VAR_18,
       VAR_16, 0xc);
   }
  }
 }
}
