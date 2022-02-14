
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u16 ;
struct wireless_dev {int dummy; } ;
struct wiphy {int dummy; } ;
struct ieee80211_channel {int center_freq; } ;
struct brcmf_p2p_info {int remain_on_channel_cookie; int remain_on_channel; } ;
struct brcmf_cfg80211_info {struct brcmf_p2p_info p2p; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,unsigned int) ;
 int FUNC_1 (struct brcmf_p2p_info*,int ,unsigned int) ;
 int FUNC_2 (struct brcmf_p2p_info*) ;
 int FUNC_3 (struct wireless_dev*,int ,struct ieee80211_channel*,unsigned int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,struct ieee80211_channel*,int) ;
 struct brcmf_cfg80211_info* FUNC_6 (struct wiphy*) ;

int FUNC_7(struct wiphy *VAR_2, struct wireless_dev *VAR_3,
    struct ieee80211_channel *VAR_4,
    unsigned int VAR_5, u64 *VAR_6)
{
 struct brcmf_cfg80211_info *VAR_7 = FUNC_6(VAR_2);
 struct brcmf_p2p_info *VAR_8 = &VAR_7->p2p;
 s32 VAR_9;
 u16 VAR_10;

 VAR_10 = FUNC_4(VAR_4->center_freq);
 FUNC_0(VAR_1, "Enter, channel: %d, duration ms (%d)\n", VAR_10,
    VAR_5);

 VAR_9 = FUNC_2(VAR_8);
 if (VAR_9)
  goto exit;
 VAR_9 = FUNC_1(VAR_8, VAR_10, VAR_5);
 if (VAR_9)
  goto exit;

 FUNC_5(&VAR_8->remain_on_channel, VAR_4, sizeof(*VAR_4));
 *VAR_6 = VAR_8->remain_on_channel_cookie;
 FUNC_3(VAR_3, *VAR_6, VAR_4, VAR_5, VAR_0);

exit:
 return VAR_9;
}
