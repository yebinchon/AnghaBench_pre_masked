
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u32 ;
struct adapter {int dummy; } ;
typedef int WLAN_PWR_CFG ;


 int FUNC_0 (char*,size_t,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int VAR_0 ;
 int VAR_1 ;





 int FUNC_9 (int ,int ,char*) ;
 int FUNC_10 (struct adapter*,size_t) ;
 int FUNC_11 (struct adapter*,size_t,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_12 (struct adapter*,size_t) ;
 int FUNC_13 (struct adapter*,size_t,int) ;
 int FUNC_14 (int) ;

u8 FUNC_15(
 struct adapter *VAR_5,
 u8 VAR_6,
 u8 VAR_7,
 u8 VAR_8,
 WLAN_PWR_CFG VAR_9[]
)
{
 WLAN_PWR_CFG VAR_10;
 u8 VAR_11 = 0;
 u32 VAR_12 = 0;
 u8 VAR_13 = 0;
 u32 VAR_14 = 0;
 u32 VAR_15 = 0;
 u32 VAR_16 = 5000;

 do {
  VAR_10 = VAR_9[VAR_12];

  FUNC_9(
   VAR_4,
   VAR_3,
   (
    "HalPwrSeqCmdParsing: offset(%#x) cut_msk(%#x) fab_msk(%#x) interface_msk(%#x) base(%#x) cmd(%#x) msk(%#x) value(%#x)\n",
    FUNC_7(VAR_10),
    FUNC_3(VAR_10),
    FUNC_4(VAR_10),
    FUNC_5(VAR_10),
    FUNC_1(VAR_10),
    FUNC_2(VAR_10),
    FUNC_6(VAR_10),
    FUNC_8(VAR_10)
   )
  );


  if (
   (FUNC_4(VAR_10) & VAR_7) &&
   (FUNC_3(VAR_10) & VAR_6) &&
   (FUNC_5(VAR_10) & VAR_8)
  ) {
   switch (FUNC_2(VAR_10)) {
   case 129:
    FUNC_9(
     VAR_4,
     VAR_3,
     ("HalPwrSeqCmdParsing: PWR_CMD_READ\n")
    );
    break;

   case 128:
    FUNC_9(
     VAR_4,
     VAR_3,
     ("HalPwrSeqCmdParsing: PWR_CMD_WRITE\n")
    );
    VAR_14 = FUNC_7(VAR_10);





    if (FUNC_1(VAR_10) == VAR_1) {

     VAR_13 = FUNC_10(VAR_5, VAR_14);

     VAR_13 &= ~(FUNC_6(VAR_10));
     VAR_13 |= (
      FUNC_8(VAR_10) &
      FUNC_6(VAR_10)
     );


     FUNC_11(VAR_5, VAR_14, VAR_13);
    } else {

     VAR_13 = FUNC_12(VAR_5, VAR_14);

     VAR_13 &= (~(FUNC_6(VAR_10)));
     VAR_13 |= (
      FUNC_8(VAR_10)
      &FUNC_6(VAR_10)
     );


     FUNC_13(VAR_5, VAR_14, VAR_13);
    }
    break;

   case 130:
    FUNC_9(
     VAR_4,
     VAR_3,
     ("HalPwrSeqCmdParsing: PWR_CMD_POLLING\n")
    );

    VAR_11 = 0;
    VAR_14 = FUNC_7(VAR_10);
    do {
     if (FUNC_1(VAR_10) == VAR_1)
      VAR_13 = FUNC_10(VAR_5, VAR_14);
     else
      VAR_13 = FUNC_12(VAR_5, VAR_14);

     VAR_13 = VAR_13&FUNC_6(VAR_10);
     if (
      VAR_13 == (FUNC_8(VAR_10) &
      FUNC_6(VAR_10))
     )
      VAR_11 = 1;
     else
      FUNC_14(10);

     if (VAR_15++ > VAR_16) {
      FUNC_0(
       "Fail to polling Offset[%#x]=%02x\n",
       VAR_14,
       VAR_13
      );
      return 0;
     }
    } while (!VAR_11);

    break;

   case 132:
    FUNC_9(
     VAR_4,
     VAR_3,
     ("HalPwrSeqCmdParsing: PWR_CMD_DELAY\n")
    );
    if (FUNC_8(VAR_10) == VAR_0)
     FUNC_14(FUNC_7(VAR_10));
    else
     FUNC_14(FUNC_7(VAR_10)*1000);
    break;

   case 131:

    FUNC_9(
     VAR_4,
     VAR_3,
     ("HalPwrSeqCmdParsing: PWR_CMD_END\n")
    );
    return 1;

   default:
    FUNC_9(
     VAR_4,
     VAR_2,
     ("HalPwrSeqCmdParsing: Unknown CMD!!\n")
    );
    break;
   }
  }

  VAR_12++;
 } while (1);

 return 1;
}
