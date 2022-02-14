
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct r8192_priv {scalar_t__ rf_chip; int* RfReg0Value; struct bb_reg_definition* PHYRegDef; } ;
struct net_device {int dummy; } ;
struct bb_reg_definition {int rf3wireOffset; } ;
typedef enum rf90_radio_path { ____Placeholder_rf90_radio_path } rf90_radio_path ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct net_device*,int ,int,int) ;
 struct r8192_priv* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_5,
     enum rf90_radio_path VAR_6, u32 VAR_7,
     u32 VAR_8)
{
 struct r8192_priv *VAR_9 = FUNC_2(VAR_5);
 u32 VAR_10 = 0, VAR_11 = 0;
 struct bb_reg_definition *VAR_12 = &VAR_9->PHYRegDef[VAR_6];

 VAR_7 &= 0x3f;
 if (VAR_9->rf_chip == VAR_2) {
  FUNC_1(VAR_5, VAR_4, 0xf00, 0x0);

  if (VAR_7 >= 31) {
   VAR_9->RfReg0Value[VAR_6] |= 0x140;
   FUNC_1(VAR_5, VAR_12->rf3wireOffset,
       VAR_3,
       (VAR_9->RfReg0Value[VAR_6] << 16));
   VAR_11 = VAR_7 - 30;
  } else if (VAR_7 >= 16) {
   VAR_9->RfReg0Value[VAR_6] |= 0x100;
   VAR_9->RfReg0Value[VAR_6] &= (~0x40);
   FUNC_1(VAR_5, VAR_12->rf3wireOffset,
       VAR_3,
       (VAR_9->RfReg0Value[VAR_6] << 16));
   VAR_11 = VAR_7 - 15;
  } else
   VAR_11 = VAR_7;
 } else {
  FUNC_0((VAR_1|VAR_0),
    "check RF type here, need to be 8256\n");
  VAR_11 = VAR_7;
 }

 VAR_10 = (VAR_11 & 0x3f) | (VAR_8 << 16);

 FUNC_1(VAR_5, VAR_12->rf3wireOffset, VAR_3, VAR_10);

 if (VAR_7 == 0x0)
  VAR_9->RfReg0Value[VAR_6] = VAR_8;

 if (VAR_9->rf_chip == VAR_2) {
  if (VAR_7 != 0) {
   VAR_9->RfReg0Value[VAR_6] &= 0xebf;
   FUNC_1(VAR_5, VAR_12->rf3wireOffset,
       VAR_3,
       (VAR_9->RfReg0Value[VAR_6] << 16));
  }
  FUNC_1(VAR_5, VAR_4, 0x300, 0x3);
 }
}
