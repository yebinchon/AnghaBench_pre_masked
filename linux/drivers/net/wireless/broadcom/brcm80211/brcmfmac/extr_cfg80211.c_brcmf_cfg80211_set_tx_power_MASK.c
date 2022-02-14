
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wireless_dev {int dummy; } ;
struct wiphy {int dummy; } ;
struct net_device {int dummy; } ;
struct brcmf_pub {int dummy; } ;
struct brcmf_if {int vif; } ;
struct brcmf_cfg80211_info {struct brcmf_pub* pub; } ;
typedef int s32 ;
typedef enum nl80211_tx_power_setting { ____Placeholder_nl80211_tx_power_setting } nl80211_tx_power_setting ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;



 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct brcmf_pub*,char*,...) ;
 int FUNC_2 (int ,char*,int,...) ;
 int FUNC_3 (struct brcmf_if*,int ,int) ;
 int FUNC_4 (struct brcmf_if*,char*,int) ;
 struct net_device* FUNC_5 (struct brcmf_cfg80211_info*) ;
 int FUNC_6 (int ) ;
 struct brcmf_if* FUNC_7 (struct net_device*) ;
 struct brcmf_cfg80211_info* FUNC_8 (struct wiphy*) ;

__attribute__((used)) static s32
FUNC_9(struct wiphy *VAR_6, struct wireless_dev *VAR_7,
       enum nl80211_tx_power_setting VAR_8, s32 VAR_9)
{
 struct brcmf_cfg80211_info *VAR_10 = FUNC_8(VAR_6);
 struct net_device *VAR_11 = FUNC_5(VAR_10);
 struct brcmf_if *VAR_12 = FUNC_7(VAR_11);
 struct brcmf_pub *VAR_13 = VAR_10->pub;
 s32 VAR_14;
 s32 VAR_15;
 u32 VAR_16 = 127;

 FUNC_2(VAR_3, "Enter %d %d\n", VAR_8, VAR_9);
 if (!FUNC_6(VAR_12->vif))
  return -VAR_2;

 switch (VAR_8) {
 case 130:
  break;
 case 128:
 case 129:
  if (VAR_9 < 0) {
   FUNC_1(VAR_13, "TX_POWER_FIXED - dbm is negative\n");
   VAR_14 = -VAR_1;
   goto done;
  }
  VAR_16 = FUNC_0(4 * VAR_9);
  if (VAR_16 > 127)
   VAR_16 = 127;
  VAR_16 |= VAR_5;
  break;
 default:
  FUNC_1(VAR_13, "Unsupported type %d\n", VAR_8);
  VAR_14 = -VAR_1;
  goto done;
 }

 VAR_15 = VAR_4 << 16;
 VAR_14 = FUNC_3(VAR_12, VAR_0, VAR_15);
 if (VAR_14)
  FUNC_1(VAR_13, "WLC_SET_RADIO error (%d)\n", VAR_14);

 VAR_14 = FUNC_4(VAR_12, "qtxpower", VAR_16);
 if (VAR_14)
  FUNC_1(VAR_13, "qtxpower error (%d)\n", VAR_14);

done:
 FUNC_2(VAR_3, "Exit %d (qdbm)\n", VAR_16 & ~VAR_5);
 return VAR_14;
}
