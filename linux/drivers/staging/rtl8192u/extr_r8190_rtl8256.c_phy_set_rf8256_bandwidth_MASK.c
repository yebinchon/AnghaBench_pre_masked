
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct r8192_priv {int chan; int card_8192_version; } ;
struct net_device {int dummy; } ;
typedef enum rf90_radio_path_e { ____Placeholder_rf90_radio_path_e } rf90_radio_path_e ;
typedef enum ht_channel_width { ____Placeholder_ht_channel_width } ht_channel_width ;


 int VAR_0 ;


 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct r8192_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,scalar_t__) ;
 int FUNC_3 (struct net_device*,int,int,int ,int) ;

void FUNC_4(struct net_device *VAR_5, enum ht_channel_width VAR_6)
{
 u8 VAR_7;
 struct r8192_priv *VAR_8 = FUNC_1(VAR_5);




 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  if (!FUNC_2(VAR_5, VAR_7))
   continue;

  switch (VAR_6) {
  case 129:
    if (VAR_8->card_8192_version == VAR_2 ||
     VAR_8->card_8192_version ==
     VAR_3) {
     FUNC_3(VAR_5,
      (enum rf90_radio_path_e)VAR_7,
      0x0b, VAR_4, 0x100);
     FUNC_3(VAR_5,
      (enum rf90_radio_path_e)VAR_7,
      0x2c, VAR_4, 0x3d7);
     FUNC_3(VAR_5,
      (enum rf90_radio_path_e)VAR_7,
      0x0e, VAR_4, 0x021);
     FUNC_3(VAR_5,
      (enum rf90_radio_path_e)VAR_7,
      0x14, VAR_4, 0x5ab);
    } else {
     FUNC_0(VAR_0, "phy_set_rf8256_bandwidth(): unknown hardware version\n");
     }
    break;
  case 128:
    if (VAR_8->card_8192_version == VAR_2 || VAR_8->card_8192_version == VAR_3) {
     FUNC_3(VAR_5, (enum rf90_radio_path_e)VAR_7, 0x0b, VAR_4, 0x300);
     FUNC_3(VAR_5, (enum rf90_radio_path_e)VAR_7, 0x2c, VAR_4, 0x3df);
     FUNC_3(VAR_5, (enum rf90_radio_path_e)VAR_7, 0x0e, VAR_4, 0x0a1);

     if (VAR_8->chan == 3 || VAR_8->chan == 9)

      FUNC_3(VAR_5, (enum rf90_radio_path_e)VAR_7, 0x14, VAR_4, 0x59b);
     else
      FUNC_3(VAR_5, (enum rf90_radio_path_e)VAR_7, 0x14, VAR_4, 0x5ab);
    } else {
     FUNC_0(VAR_0, "phy_set_rf8256_bandwidth(): unknown hardware version\n");
     }
    break;
  default:
    FUNC_0(VAR_0, "phy_set_rf8256_bandwidth(): unknown Bandwidth: %#X\n", VAR_6);
    break;
  }
 }
}
