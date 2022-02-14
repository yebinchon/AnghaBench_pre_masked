
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct r8192_priv {size_t NumTotalRFPath; TYPE_1__* PHYRegDef; } ;
struct net_device {int dummy; } ;
typedef enum rf90_radio_path_e { ____Placeholder_rf90_radio_path_e } rf90_radio_path_e ;
struct TYPE_2__ {int rfintfs; int rfHSSIPara2; int rfintfo; int rfintfe; } ;
typedef TYPE_1__ BB_REGISTER_DEFINITION_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int FUNC_0 (int ,char*,...) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct r8192_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,int ,int) ;
 int FUNC_3 (struct net_device*,size_t) ;
 size_t FUNC_4 (struct net_device*,int) ;
 int FUNC_5 (struct net_device*,int,int,int ) ;
 int FUNC_6 (struct net_device*,int,int,int ,int) ;
 scalar_t__ FUNC_7 (struct net_device*,int ,int) ;
 int FUNC_8 (struct net_device*,int ,int,int) ;

__attribute__((used)) static void FUNC_9(struct net_device *VAR_8)
{
 u32 VAR_9 = 0;
 u8 VAR_10;
 BB_REGISTER_DEFINITION_T *VAR_11;
 struct r8192_priv *VAR_12 = FUNC_1(VAR_8);
 u32 VAR_13 = 0x3;
 u32 VAR_14 = 0x7f1;
 u32 VAR_15 = 0;
 u8 VAR_16 = 5, VAR_17 = 5;
 u8 VAR_18 = 0;

 for (VAR_10 = (enum rf90_radio_path_e)131; VAR_10 < VAR_12->NumTotalRFPath; VAR_10++) {
  if (!FUNC_3(VAR_8, VAR_10))
   continue;

  VAR_11 = &VAR_12->PHYRegDef[VAR_10];





  switch (VAR_10) {
  case 131:
  case 129:
   VAR_9 = FUNC_2(VAR_8, VAR_11->rfintfs, VAR_7);
   break;
  case 130:
  case 128:
   VAR_9 = FUNC_2(VAR_8, VAR_11->rfintfs, VAR_7 << 16);
   break;
  }


  FUNC_8(VAR_8, VAR_11->rfintfe, VAR_7 << 16, 0x1);


  FUNC_8(VAR_8, VAR_11->rfintfo, VAR_7, 0x1);


  FUNC_8(VAR_8, VAR_11->rfHSSIPara2, VAR_4, 0x0);
  FUNC_8(VAR_8, VAR_11->rfHSSIPara2, VAR_5, 0x0);

  FUNC_6(VAR_8, (enum rf90_radio_path_e)VAR_10, 0x0, VAR_6, 0xbf);




  if (FUNC_7(VAR_8, VAR_3, (enum rf90_radio_path_e)VAR_10)) {
   FUNC_0(VAR_0, "phy_rf8256_config():Check Radio[%d] Fail!!\n", VAR_10);
   goto phy_RF8256_Config_ParaFile_Fail;
  }

  VAR_17 = VAR_16;
  VAR_15 = 0;

  switch (VAR_10) {
  case 131:
   while (VAR_15 != VAR_14 && VAR_17 != 0) {
    VAR_18 = FUNC_4(VAR_8, (enum rf90_radio_path_e)VAR_10);
    VAR_15 = FUNC_5(VAR_8, (enum rf90_radio_path_e)VAR_10, VAR_13, VAR_6);
    FUNC_0(VAR_2, "RF %d %d register final value: %x\n", VAR_10, VAR_13, VAR_15);
    VAR_17--;
   }
   break;
  case 130:
   while (VAR_15 != VAR_14 && VAR_17 != 0) {
    VAR_18 = FUNC_4(VAR_8, (enum rf90_radio_path_e)VAR_10);
    VAR_15 = FUNC_5(VAR_8, (enum rf90_radio_path_e)VAR_10, VAR_13, VAR_6);
    FUNC_0(VAR_2, "RF %d %d register final value: %x\n", VAR_10, VAR_13, VAR_15);
    VAR_17--;
   }
   break;
  case 129:
   while (VAR_15 != VAR_14 && VAR_17 != 0) {
    VAR_18 = FUNC_4(VAR_8, (enum rf90_radio_path_e)VAR_10);
    VAR_15 = FUNC_5(VAR_8, (enum rf90_radio_path_e)VAR_10, VAR_13, VAR_6);
    FUNC_0(VAR_2, "RF %d %d register final value: %x\n", VAR_10, VAR_13, VAR_15);
    VAR_17--;
   }
   break;
  case 128:
   while (VAR_15 != VAR_14 && VAR_17 != 0) {
    VAR_18 = FUNC_4(VAR_8, (enum rf90_radio_path_e)VAR_10);
    VAR_15 = FUNC_5(VAR_8, (enum rf90_radio_path_e)VAR_10, VAR_13, VAR_6);
    FUNC_0(VAR_2, "RF %d %d register final value: %x\n", VAR_10, VAR_13, VAR_15);
    VAR_17--;
   }
   break;
  }


  switch (VAR_10) {
  case 131:
  case 129:
   FUNC_8(VAR_8, VAR_11->rfintfs, VAR_7, VAR_9);
   break;
  case 130:
  case 128:
   FUNC_8(VAR_8, VAR_11->rfintfs, VAR_7 << 16, VAR_9);
   break;
  }

  if (VAR_18) {
   FUNC_0(VAR_0, "phy_rf8256_config_para_file():Radio[%d] Fail!!", VAR_10);
   goto phy_RF8256_Config_ParaFile_Fail;
  }
 }

 FUNC_0(VAR_1, "PHY Initialization Success\n");
 return;

phy_RF8256_Config_ParaFile_Fail:
 FUNC_0(VAR_0, "PHY Initialization failed\n");
}
