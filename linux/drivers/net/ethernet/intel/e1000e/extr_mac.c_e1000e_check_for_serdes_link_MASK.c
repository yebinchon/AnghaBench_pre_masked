
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct e1000_mac_info {int autoneg_failed; int txcw; int serdes_has_link; } ;
struct e1000_hw {struct e1000_mac_info mac; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (struct e1000_hw*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int,int) ;

s32 FUNC_5(struct e1000_hw *VAR_11)
{
 struct e1000_mac_info *VAR_12 = &VAR_11->mac;
 u32 VAR_13;
 u32 VAR_14;
 u32 VAR_15;
 s32 VAR_16;

 VAR_14 = FUNC_2(VAR_0);
 VAR_15 = FUNC_2(VAR_9);
 VAR_13 = FUNC_2(VAR_8);
 if (!(VAR_15 & VAR_6) && !(VAR_13 & VAR_3)) {
  if (!VAR_12->autoneg_failed) {
   VAR_12->autoneg_failed = 1;
   return 0;
  }
  FUNC_1("NOT Rx'ing /C/, disable AutoNeg and force link.\n");


  FUNC_3(VAR_10, (VAR_12->txcw & ~VAR_7));


  VAR_14 = FUNC_2(VAR_0);
  VAR_14 |= (VAR_2 | VAR_1);
  FUNC_3(VAR_0, VAR_14);


  VAR_16 = FUNC_0(VAR_11);
  if (VAR_16) {
   FUNC_1("Error configuring flow control\n");
   return VAR_16;
  }
 } else if ((VAR_14 & VAR_2) && (VAR_13 & VAR_3)) {





  FUNC_1("Rx'ing /C/, enable AutoNeg and stop forcing link.\n");
  FUNC_3(VAR_10, VAR_12->txcw);
  FUNC_3(VAR_0, (VAR_14 & ~VAR_2));

  VAR_12->serdes_has_link = 1;
 } else if (!(VAR_7 & FUNC_2(VAR_10))) {





  FUNC_4(10, 20);
  VAR_13 = FUNC_2(VAR_8);
  if (VAR_13 & VAR_5) {
   if (!(VAR_13 & VAR_4)) {
    VAR_12->serdes_has_link = 1;
    FUNC_1("SERDES: Link up - forced.\n");
   }
  } else {
   VAR_12->serdes_has_link = 0;
   FUNC_1("SERDES: Link down - force failed.\n");
  }
 }

 if (VAR_7 & FUNC_2(VAR_10)) {
  VAR_15 = FUNC_2(VAR_9);
  if (VAR_15 & VAR_6) {

   FUNC_4(10, 20);
   VAR_13 = FUNC_2(VAR_8);
   if (VAR_13 & VAR_5) {
    if (!(VAR_13 & VAR_4)) {
     VAR_12->serdes_has_link = 1;
     FUNC_1("SERDES: Link up - autoneg completed successfully.\n");
    } else {
     VAR_12->serdes_has_link = 0;
     FUNC_1("SERDES: Link down - invalid codewords detected in autoneg.\n");
    }
   } else {
    VAR_12->serdes_has_link = 0;
    FUNC_1("SERDES: Link down - no sync.\n");
   }
  } else {
   VAR_12->serdes_has_link = 0;
   FUNC_1("SERDES: Link down - autoneg failed\n");
  }
 }

 return 0;
}
