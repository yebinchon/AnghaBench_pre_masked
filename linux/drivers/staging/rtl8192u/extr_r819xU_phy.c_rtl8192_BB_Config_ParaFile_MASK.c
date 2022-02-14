
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct r8192_priv {scalar_t__ card_8192_version; int* AntennaTxPwDiff; int CrystalCap; scalar_t__ bCckHighPower; } ;
struct net_device {int dummy; } ;
typedef enum rf90_radio_path_e { ____Placeholder_rf90_radio_path_e } rf90_radio_path_e ;
typedef enum hw90_block_e { ____Placeholder_hw90_block_e } hw90_block_e ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int,char*,scalar_t__) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 struct r8192_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_3 (struct net_device*,int ,scalar_t__*) ;
 int FUNC_4 (struct net_device*,int ,int*) ;
 scalar_t__ FUNC_5 (struct net_device*,int ,int) ;
 int FUNC_6 (struct net_device*,int ) ;
 scalar_t__ FUNC_7 (struct net_device*,int,int) ;
 int FUNC_8 (struct net_device*,int ,int,int) ;
 int FUNC_9 (struct net_device*,int ,scalar_t__) ;
 int FUNC_10 (struct net_device*,int,int) ;
 int FUNC_11 (struct net_device*,int ,int) ;

__attribute__((used)) static void FUNC_12(struct net_device *VAR_20)
{
 struct r8192_priv *VAR_21 = FUNC_1(VAR_20);
 u8 VAR_22 = 0, VAR_23 = 0, VAR_24 = 0;
 u32 VAR_25 = 0;






 FUNC_3(VAR_20, VAR_2, &VAR_22);
 FUNC_9(VAR_20, VAR_2, (VAR_22|VAR_3));
 FUNC_2(50);

 FUNC_4(VAR_20, VAR_6, &VAR_25);
 FUNC_11(VAR_20, VAR_6, (VAR_25&(~VAR_7)));



 for (VAR_23 = (enum hw90_block_e)VAR_8;
      VAR_23 <= VAR_9; VAR_23++) {

  VAR_24 = FUNC_7(VAR_20, (enum hw90_block_e)VAR_23,
        (enum rf90_radio_path_e)0);
  if (VAR_24 != 0) {
   FUNC_0((VAR_4 | VAR_5),
     "phy_rf8256_config(): Check PHY%d Fail!!\n",
     VAR_23-1);
   return;
  }
 }

 FUNC_8(VAR_20, VAR_17, VAR_11|VAR_12, 0x0);


 FUNC_6(VAR_20, VAR_1);


 FUNC_4(VAR_20, VAR_6, &VAR_25);
 FUNC_11(VAR_20, VAR_6, (VAR_25|VAR_7));



 FUNC_6(VAR_20, VAR_0);


 FUNC_10(VAR_20, 0x5e, 0x00);
 if (VAR_21->card_8192_version == VAR_10) {

  VAR_25 = VAR_21->AntennaTxPwDiff[1]<<4 |
      VAR_21->AntennaTxPwDiff[0];
  FUNC_8(VAR_20, VAR_18, (VAR_13|VAR_14),
     VAR_25);


  VAR_25 = VAR_21->CrystalCap & 0xf;
  FUNC_8(VAR_20, VAR_16, VAR_15,
     VAR_25);
 }




 VAR_21->bCckHighPower = (u8)FUNC_5(VAR_20,
           VAR_19,
           0x200);
}
