
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wmi_fw_version {int minor; int major; } ;
struct ieee80211_hw {TYPE_1__* wiphy; } ;
struct ath9k_htc_priv {int fw_version_major; int fw_version_minor; int fw_flags; int dev; struct ieee80211_hw* hw; } ;
typedef int cmd_rsp ;
struct TYPE_2__ {int fw_version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int,int) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (struct wmi_fw_version*,int ,int) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int,char*,int,int) ;
 scalar_t__ FUNC_7 (int ,int *) ;

__attribute__((used)) static int FUNC_8(struct ath9k_htc_priv *VAR_5)
{
 struct ieee80211_hw *VAR_6 = VAR_5->hw;
 struct wmi_fw_version VAR_7;
 int VAR_8;

 FUNC_4(&VAR_7, 0, sizeof(VAR_7));

 FUNC_0(VAR_4);
 if (VAR_8)
  return -VAR_0;

 VAR_5->fw_version_major = FUNC_1(VAR_7.major);
 VAR_5->fw_version_minor = FUNC_1(VAR_7.minor);

 FUNC_6(VAR_6->wiphy->fw_version, sizeof(VAR_6->wiphy->fw_version), "%d.%d",
   VAR_5->fw_version_major,
   VAR_5->fw_version_minor);

 FUNC_3(VAR_5->dev, "ath9k_htc: FW Version: %d.%d\n",
   VAR_5->fw_version_major,
   VAR_5->fw_version_minor);





 if (VAR_5->fw_version_major != VAR_2 ||
     VAR_5->fw_version_minor < VAR_3) {
  FUNC_2(VAR_5->dev, "ath9k_htc: Please upgrade to FW version %d.%d\n",
   VAR_2, VAR_3);
  return -VAR_0;
 }

 if (VAR_5->fw_version_major == 1 && VAR_5->fw_version_minor < 4)
  FUNC_5(VAR_1, &VAR_5->fw_flags);

 FUNC_3(VAR_5->dev, "FW RMW support: %s\n",
  FUNC_7(VAR_1, &VAR_5->fw_flags) ? "Off" : "On");

 return 0;
}
