
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct r8192_priv {scalar_t__ rf_chip; int* RfReg0Value; struct bb_reg_definition* PHYRegDef; } ;
struct net_device {int dummy; } ;
struct bb_reg_definition {int rf3wireOffset; int rfLSSIReadBack; int rfHSSIPara2; } ;
typedef enum rf90_radio_path { ____Placeholder_rf90_radio_path } rf90_radio_path ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int VAR_7 ;
 int FUNC_2 (struct net_device*,int ,int ) ;
 int FUNC_3 (struct net_device*,int ,int,int) ;
 struct r8192_priv* FUNC_4 (struct net_device*) ;

__attribute__((used)) static u32 FUNC_5(struct net_device *VAR_8,
          enum rf90_radio_path VAR_9, u32 VAR_10)
{
 struct r8192_priv *VAR_11 = FUNC_4(VAR_8);
 u32 VAR_12 = 0;
 u32 VAR_13 = 0;
 struct bb_reg_definition *VAR_14 = &VAR_11->PHYRegDef[VAR_9];

 VAR_10 &= 0x3f;

 if (VAR_11->rf_chip == VAR_2) {
  FUNC_3(VAR_8, VAR_7, 0xf00, 0x0);
  if (VAR_10 >= 31) {
   VAR_11->RfReg0Value[VAR_9] |= 0x140;
   FUNC_3(VAR_8, VAR_14->rf3wireOffset,
       VAR_6,
       (VAR_11->RfReg0Value[VAR_9]<<16));
   VAR_13 = VAR_10 - 30;
  } else if (VAR_10 >= 16) {
   VAR_11->RfReg0Value[VAR_9] |= 0x100;
   VAR_11->RfReg0Value[VAR_9] &= (~0x40);
   FUNC_3(VAR_8, VAR_14->rf3wireOffset,
       VAR_6,
       (VAR_11->RfReg0Value[VAR_9]<<16));

   VAR_13 = VAR_10 - 15;
  } else
   VAR_13 = VAR_10;
 } else {
  FUNC_0((VAR_1|VAR_0),
    "check RF type here, need to be 8256\n");
  VAR_13 = VAR_10;
 }
 FUNC_3(VAR_8, VAR_14->rfHSSIPara2, VAR_3,
     VAR_13);
 FUNC_3(VAR_8, VAR_14->rfHSSIPara2, VAR_5, 0x0);
 FUNC_3(VAR_8, VAR_14->rfHSSIPara2, VAR_5, 0x1);

 FUNC_1(1);

 VAR_12 = FUNC_2(VAR_8, VAR_14->rfLSSIReadBack,
    VAR_4);

 if (VAR_11->rf_chip == VAR_2) {
  VAR_11->RfReg0Value[VAR_9] &= 0xebf;

  FUNC_3(VAR_8, VAR_14->rf3wireOffset, VAR_6,
      (VAR_11->RfReg0Value[VAR_9] << 16));

  FUNC_3(VAR_8, VAR_7, 0x300, 0x3);
 }


 return VAR_12;

}
