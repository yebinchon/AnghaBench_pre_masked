
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct r8192_priv {scalar_t__ rf_chip; int* RfReg0Value; TYPE_1__* PHYRegDef; } ;
struct net_device {int dummy; } ;
typedef enum rf90_radio_path_e { ____Placeholder_rf90_radio_path_e } rf90_radio_path_e ;
struct TYPE_2__ {int rf3wireOffset; } ;
typedef TYPE_1__ BB_REGISTER_DEFINITION_T ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,char*) ;
 int VAR_3 ;
 struct r8192_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_4,
          enum rf90_radio_path_e VAR_5,
          u32 VAR_6,
          u32 VAR_7)
{
 struct r8192_priv *VAR_8 = FUNC_1(VAR_4);
 u32 VAR_9 = 0, VAR_10 = 0;
 BB_REGISTER_DEFINITION_T *VAR_11 = &VAR_8->PHYRegDef[VAR_5];

 VAR_6 &= 0x3f;
 if (VAR_8->rf_chip == VAR_2) {

  if (VAR_6 >= 31) {
   VAR_8->RfReg0Value[VAR_5] |= 0x140;
   FUNC_2(VAR_4, VAR_11->rf3wireOffset,
      VAR_3,
      VAR_8->RfReg0Value[VAR_5] << 16);
   VAR_10 = VAR_6 - 30;
  } else if (VAR_6 >= 16) {
   VAR_8->RfReg0Value[VAR_5] |= 0x100;
   VAR_8->RfReg0Value[VAR_5] &= (~0x40);
   FUNC_2(VAR_4, VAR_11->rf3wireOffset,
      VAR_3,
      VAR_8->RfReg0Value[VAR_5]<<16);
   VAR_10 = VAR_6 - 15;
  } else {
   VAR_10 = VAR_6;
  }
 } else {
  FUNC_0((VAR_1|VAR_0),
    "check RF type here, need to be 8256\n");
  VAR_10 = VAR_6;
 }


 VAR_9 = (VAR_7<<16) | (VAR_10&0x3f);


 FUNC_2(VAR_4, VAR_11->rf3wireOffset, VAR_3, VAR_9);


 if (VAR_6 == 0x0)
  VAR_8->RfReg0Value[VAR_5] = VAR_7;


 if (VAR_8->rf_chip == VAR_2) {
  if (VAR_6 != 0) {
   VAR_8->RfReg0Value[VAR_5] &= 0xebf;
   FUNC_2(VAR_4, VAR_11->rf3wireOffset,
      VAR_3,
      VAR_8->RfReg0Value[VAR_5] << 16);
  }
 }
}
