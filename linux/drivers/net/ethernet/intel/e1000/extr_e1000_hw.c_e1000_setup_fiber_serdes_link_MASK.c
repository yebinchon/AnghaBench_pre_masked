
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct e1000_hw {scalar_t__ media_type; scalar_t__ mac_type; int fc; int txcw; int autoneg_failed; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;




 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 () ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_1 (struct e1000_hw*) ;
 scalar_t__ FUNC_2 (struct e1000_hw*) ;
 int FUNC_3 (struct e1000_hw*) ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ FUNC_4 (struct e1000_hw*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int) ;

__attribute__((used)) static s32 FUNC_9(struct e1000_hw *VAR_16)
{
 u32 VAR_17;
 u32 VAR_18;
 u32 VAR_19 = 0;
 u32 VAR_20;
 u32 VAR_21 = 0;
 s32 VAR_22;







 VAR_17 = FUNC_6(VAR_0);
 if (VAR_16->media_type == VAR_14)
  VAR_21 = (VAR_16->mac_type > VAR_13) ? VAR_2 : 0;

 VAR_22 = FUNC_1(VAR_16);
 if (VAR_22)
  return VAR_22;


 VAR_17 &= ~(VAR_1);


 VAR_22 = FUNC_4(VAR_16);
 if (VAR_22)
  return VAR_22;

 FUNC_3(VAR_16);
 switch (VAR_16->fc) {
 case 130:

  VAR_19 = (VAR_6 | VAR_8);
  break;
 case 129:







  VAR_19 = (VAR_6 | VAR_8 | VAR_9);
  break;
 case 128:



  VAR_19 = (VAR_6 | VAR_8 | VAR_7);
  break;
 case 131:



  VAR_19 = (VAR_6 | VAR_8 | VAR_9);
  break;
 default:
  FUNC_5("Flow control param set incorrectly\n");
  return -VAR_3;
 }







 FUNC_5("Auto-negotiation enabled\n");

 FUNC_7(VAR_12, VAR_19);
 FUNC_7(VAR_0, VAR_17);
 FUNC_0();

 VAR_16->txcw = VAR_19;
 FUNC_8(1);
 if (VAR_16->media_type == VAR_15 ||
     (FUNC_6(VAR_0) & VAR_2) == VAR_21) {
  FUNC_5("Looking for Link\n");
  for (VAR_20 = 0; VAR_20 < (VAR_10 / 10); VAR_20++) {
   FUNC_8(10);
   VAR_18 = FUNC_6(VAR_11);
   if (VAR_18 & VAR_4)
    break;
  }
  if (VAR_20 == (VAR_10 / 10)) {
   FUNC_5("Never got a valid link from auto-neg!!!\n");
   VAR_16->autoneg_failed = 1;





   VAR_22 = FUNC_2(VAR_16);
   if (VAR_22) {
    FUNC_5("Error while checking for link\n");
    return VAR_22;
   }
   VAR_16->autoneg_failed = 0;
  } else {
   VAR_16->autoneg_failed = 0;
   FUNC_5("Valid Link Found\n");
  }
 } else {
  FUNC_5("No Signal Detected\n");
 }
 return VAR_5;
}
