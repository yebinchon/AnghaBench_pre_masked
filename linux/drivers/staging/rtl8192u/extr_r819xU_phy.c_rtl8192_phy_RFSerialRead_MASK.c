
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct r8192_priv {scalar_t__ rf_chip; int* RfReg0Value; TYPE_1__* PHYRegDef; } ;
struct net_device {int dummy; } ;
typedef enum rf90_radio_path_e { ____Placeholder_rf90_radio_path_e } rf90_radio_path_e ;
struct TYPE_2__ {int rf3wireOffset; int rfLSSIReadBack; int rfHSSIPara2; } ;
typedef TYPE_1__ BB_REGISTER_DEFINITION_T ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct r8192_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,int ,int ) ;
 int FUNC_3 (struct net_device*,int ,int ,int) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static u32 FUNC_5(struct net_device *VAR_7,
        enum rf90_radio_path_e VAR_8, u32 VAR_9)
{
 struct r8192_priv *VAR_10 = FUNC_1(VAR_7);
 u32 VAR_11 = 0;
 u32 VAR_12 = 0;
 BB_REGISTER_DEFINITION_T *VAR_13 = &VAR_10->PHYRegDef[VAR_8];

 FUNC_3(VAR_7, VAR_13->rfLSSIReadBack, VAR_4, 0);

 VAR_9 &= 0x3f;


 if (VAR_10->rf_chip == VAR_2) {
  if (VAR_9 >= 31) {
   VAR_10->RfReg0Value[VAR_8] |= 0x140;

   FUNC_3(VAR_7, VAR_13->rf3wireOffset,
      VAR_6,
      VAR_10->RfReg0Value[VAR_8]<<16);

   VAR_12 = VAR_9 - 30;
  } else if (VAR_9 >= 16) {
   VAR_10->RfReg0Value[VAR_8] |= 0x100;
   VAR_10->RfReg0Value[VAR_8] &= (~0x40);

   FUNC_3(VAR_7, VAR_13->rf3wireOffset,
      VAR_6,
      VAR_10->RfReg0Value[VAR_8]<<16);

   VAR_12 = VAR_9 - 15;
  } else {
   VAR_12 = VAR_9;
  }
 } else {
  FUNC_0((VAR_1|VAR_0),
    "check RF type here, need to be 8256\n");
  VAR_12 = VAR_9;
 }

 FUNC_3(VAR_7, VAR_13->rfHSSIPara2, VAR_3,
    VAR_12);

 FUNC_3(VAR_7, VAR_13->rfHSSIPara2, VAR_5, 0x0);
 FUNC_3(VAR_7, VAR_13->rfHSSIPara2, VAR_5, 0x1);



 FUNC_4(1000, 1000);

 VAR_11 = FUNC_2(VAR_7, VAR_13->rfLSSIReadBack,
     VAR_4);



 if (VAR_10->rf_chip == VAR_2) {
  VAR_10->RfReg0Value[VAR_8] &= 0xebf;

  FUNC_3(VAR_7, VAR_13->rf3wireOffset, VAR_6,
     VAR_10->RfReg0Value[VAR_8] << 16);
 }

 return VAR_11;
}
