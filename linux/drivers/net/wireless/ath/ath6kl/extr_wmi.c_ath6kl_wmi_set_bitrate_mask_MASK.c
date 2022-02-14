
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wmi {struct ath6kl* parent_dev; } ;
struct cfg80211_bitrate_mask {int dummy; } ;
struct ath6kl {int fw_capabilities; } ;


 int VAR_0 ;
 int FUNC_0 (struct wmi*,int ,struct cfg80211_bitrate_mask const*) ;
 int FUNC_1 (struct wmi*,int ,struct cfg80211_bitrate_mask const*) ;
 scalar_t__ FUNC_2 (int ,int ) ;

int FUNC_3(struct wmi *VAR_1, u8 VAR_2,
    const struct cfg80211_bitrate_mask *VAR_3)
{
 struct ath6kl *VAR_4 = VAR_1->parent_dev;

 if (FUNC_2(VAR_0,
       VAR_4->fw_capabilities))
  return FUNC_1(VAR_1, VAR_2, VAR_3);
 else
  return FUNC_0(VAR_1, VAR_2, VAR_3);
}
