
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct r8192_priv {scalar_t__ IC_Cut; scalar_t__ rf_type; int* AntennaTxPwDiff; int CrystalCap; } ;
struct net_device {int dummy; } ;
typedef enum rf90_radio_path { ____Placeholder_rf90_radio_path } rf90_radio_path ;
typedef enum hw90_block { ____Placeholder_hw90_block } hw90_block ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (int,char*,scalar_t__) ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (struct net_device*,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_2 (struct net_device*,int,int) ;
 scalar_t__ FUNC_3 (struct net_device*,int ) ;
 int FUNC_4 (struct net_device*,int ) ;
 int FUNC_5 (struct net_device*,int ,int,int) ;
 int FUNC_6 (struct net_device*,int ,scalar_t__) ;
 int FUNC_7 (struct net_device*,int ,int) ;
 struct r8192_priv* FUNC_8 (struct net_device*) ;

__attribute__((used)) static bool FUNC_9(struct net_device *VAR_21)
{
 struct r8192_priv *VAR_22 = FUNC_8(VAR_21);
 bool VAR_23 = 1;
 u8 VAR_24 = 0, VAR_25 = 0;
 u32 VAR_26 = 0;

 VAR_24 = FUNC_3(VAR_21, VAR_0);
 FUNC_6(VAR_21, VAR_0, (VAR_24|VAR_1));

 VAR_26 = FUNC_4(VAR_21, VAR_6);
 FUNC_7(VAR_21, VAR_6, (VAR_26&(~VAR_7)));

 for (VAR_25 = (enum hw90_block)VAR_8;
      VAR_25 <= VAR_9; VAR_25++) {
  VAR_23 = FUNC_2(VAR_21,
         (enum hw90_block)VAR_25,
         (enum rf90_radio_path)0);
  if (!VAR_23) {
   FUNC_0((VAR_4 | VAR_5),
     "rtl92e_config_rf():Check PHY%d Fail!!\n",
     VAR_25-1);
   return VAR_23;
  }
 }
 FUNC_5(VAR_21, VAR_19, VAR_12|VAR_13, 0x0);
 FUNC_1(VAR_21, VAR_3);

 VAR_26 = FUNC_4(VAR_21, VAR_6);
 FUNC_7(VAR_21, VAR_6, (VAR_26|VAR_7));

 FUNC_1(VAR_21, VAR_2);

 if (VAR_22->IC_Cut > VAR_11) {
  if (VAR_22->rf_type == VAR_10)
   VAR_26 = VAR_22->AntennaTxPwDiff[2]<<8 |
          VAR_22->AntennaTxPwDiff[1]<<4 |
          VAR_22->AntennaTxPwDiff[0];
  else
   VAR_26 = 0x0;
  FUNC_5(VAR_21, VAR_20,
      (VAR_14|VAR_15|VAR_16), VAR_26);


  VAR_26 = VAR_22->CrystalCap;
  FUNC_5(VAR_21, VAR_18, VAR_17,
      VAR_26);
 }

 return VAR_23;
}
