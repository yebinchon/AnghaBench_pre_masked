
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ar9300_base_eep_hdr {int featureEnable; int swreg; } ;
struct ar9300_eeprom {struct ar9300_base_eep_hdr baseEepHeader; } ;
struct TYPE_2__ {struct ar9300_eeprom ar9300_eep; } ;
struct ath_hw {scalar_t__ is_clk_25mhz; TYPE_1__ eeprom; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (struct ath_hw*) ;
 scalar_t__ FUNC_1 (struct ath_hw*) ;
 scalar_t__ FUNC_2 (struct ath_hw*) ;
 scalar_t__ FUNC_3 (struct ath_hw*) ;
 scalar_t__ FUNC_4 (struct ath_hw*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct ath_hw*,int ) ;
 scalar_t__ FUNC_7 (struct ath_hw*,int ,int) ;
 int FUNC_8 (struct ath_hw*,int ,int,int) ;
 int FUNC_9 (struct ath_hw*,int ,int) ;
 int FUNC_10 (struct ath_hw*,int ,int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int) ;

void FUNC_13(struct ath_hw *VAR_9)
{
 struct ar9300_eeprom *VAR_10 = &VAR_9->eeprom.ar9300_eep;
 struct ar9300_base_eep_hdr *VAR_11 = &VAR_10->baseEepHeader;
 u32 VAR_12;

 if (VAR_11->featureEnable & FUNC_5(4)) {
  if (FUNC_0(VAR_9) || FUNC_2(VAR_9)) {
   int VAR_13;

   VAR_13 = FUNC_6(VAR_9, VAR_2) & ~VAR_3;
   FUNC_9(VAR_9, VAR_2, VAR_13);
   if (!FUNC_10(VAR_9, VAR_2, VAR_13))
    return;

   if (FUNC_0(VAR_9)) {
    if (VAR_9->is_clk_25mhz) {
     VAR_13 = (3 << 1) | (8 << 4) |
            (3 << 8) | (1 << 14) |
            (6 << 17) | (1 << 20) |
            (3 << 24);
    } else {
     VAR_13 = (4 << 1) | (7 << 4) |
            (3 << 8) | (1 << 14) |
            (6 << 17) | (1 << 20) |
            (3 << 24);
    }
   } else {
    VAR_13 = (5 << 1) | (7 << 4) |
           (2 << 8) | (2 << 14) |
           (6 << 17) | (1 << 20) |
           (3 << 24) | (1 << 28);
   }

   FUNC_9(VAR_9, VAR_0, VAR_13);
   if (!FUNC_10(VAR_9, VAR_0, VAR_13))
    return;

   VAR_13 = (FUNC_6(VAR_9, VAR_2) & ~0xFFC00000)
     | (4 << 26);
   FUNC_9(VAR_9, VAR_2, VAR_13);
   if (!FUNC_10(VAR_9, VAR_2, VAR_13))
    return;

   VAR_13 = (FUNC_6(VAR_9, VAR_2) & ~0x00200000)
     | (1 << 21);
   FUNC_9(VAR_9, VAR_2, VAR_13);
   if (!FUNC_10(VAR_9, VAR_2, VAR_13))
    return;
  } else if (FUNC_1(VAR_9) || FUNC_4(VAR_9) ||
      FUNC_3(VAR_9)) {
   VAR_12 = FUNC_11(VAR_11->swreg);
   FUNC_9(VAR_9, VAR_0, VAR_12);

   if (FUNC_3(VAR_9))
    FUNC_9(VAR_9, VAR_2, 0x10200000);
  } else {

   VAR_12 = FUNC_11(VAR_11->swreg);
   FUNC_9(VAR_9, VAR_6,
      FUNC_6(VAR_9, VAR_6) &
      (~VAR_7));
   FUNC_9(VAR_9, VAR_5, VAR_12);

   FUNC_9(VAR_9, VAR_6,
      FUNC_6(VAR_9,
        VAR_6) |
        VAR_7);
  }
 } else {
  if (FUNC_0(VAR_9) || FUNC_2(VAR_9)) {
   FUNC_8(VAR_9, VAR_2, VAR_3, 0);
   while (FUNC_7(VAR_9, VAR_2,
      VAR_3))
    FUNC_12(10);

   FUNC_8(VAR_9, VAR_0, VAR_1, 0x1);
   while (!FUNC_7(VAR_9, VAR_0,
      VAR_1))
    FUNC_12(10);
   FUNC_8(VAR_9, VAR_2, VAR_3, 0x1);
   while (!FUNC_7(VAR_9, VAR_2,
      VAR_3))
    FUNC_12(10);
  } else if (FUNC_1(VAR_9) || FUNC_4(VAR_9))
   FUNC_8(VAR_9, VAR_0, VAR_1, 0x1);
  else {
   VAR_12 = FUNC_6(VAR_9, VAR_8) |
    VAR_4;
   FUNC_9(VAR_9, VAR_8, VAR_12);
  }
 }

}
