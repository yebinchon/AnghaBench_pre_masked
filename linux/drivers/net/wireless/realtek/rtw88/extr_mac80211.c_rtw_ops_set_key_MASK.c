
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct rtw_sec_desc {scalar_t__ total_cam_num; } ;
struct rtw_dev {int mutex; struct rtw_sec_desc sec; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {int dummy; } ;
struct ieee80211_key_conf {int cipher; int flags; scalar_t__ keyidx; scalar_t__ hw_key_idx; } ;
struct ieee80211_hw {struct rtw_dev* priv; } ;
typedef enum set_key_cmd { ____Placeholder_set_key_cmd } set_key_cmd ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct rtw_dev*,struct rtw_sec_desc*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct rtw_sec_desc*) ;
 int FUNC_4 (struct rtw_dev*,struct rtw_sec_desc*,struct ieee80211_sta*,struct ieee80211_key_conf*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct ieee80211_hw *VAR_11, enum set_key_cmd VAR_12,
      struct ieee80211_vif *VAR_13, struct ieee80211_sta *VAR_14,
      struct ieee80211_key_conf *VAR_15)
{
 struct rtw_dev *VAR_16 = VAR_11->priv;
 struct rtw_sec_desc *VAR_17 = &VAR_16->sec;
 u8 VAR_18;
 u8 VAR_19;
 int VAR_20 = 0;

 switch (VAR_15->cipher) {
 case 128:
  VAR_18 = VAR_10;
  break;
 case 129:
  VAR_18 = VAR_9;
  break;
 case 130:
  VAR_18 = VAR_8;
  VAR_15->flags |= VAR_4;
  break;
 case 131:
  VAR_18 = VAR_7;
  VAR_15->flags |= VAR_6;
  break;
 case 135:
 case 134:
 case 133:
 case 132:

  return -VAR_2;
 default:
  return -VAR_1;
 }

 FUNC_0(&VAR_16->mutex);

 if (VAR_15->flags & VAR_5) {
  VAR_19 = FUNC_3(VAR_17);
 } else {

  VAR_19 = VAR_15->keyidx;
 }

 if (VAR_19 > VAR_17->total_cam_num) {
  VAR_20 = -VAR_0;
  goto out;
 }

 switch (VAR_12) {
 case 136:

  VAR_15->flags |= VAR_3;
  VAR_15->hw_key_idx = VAR_19;
  FUNC_4(VAR_16, VAR_17, VAR_14, VAR_15,
      VAR_18, VAR_19);
  break;
 case 137:
  FUNC_2(VAR_16, VAR_17, VAR_15->hw_key_idx);
  break;
 }

out:
 FUNC_1(&VAR_16->mutex);

 return VAR_20;
}
