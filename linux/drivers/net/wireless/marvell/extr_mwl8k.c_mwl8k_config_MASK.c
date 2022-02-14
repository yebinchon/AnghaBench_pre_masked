
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mwl8k_priv {scalar_t__ ap_fw; } ;
struct ieee80211_conf {int flags; int power_level; } ;
struct ieee80211_hw {struct mwl8k_priv* priv; struct ieee80211_conf conf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ieee80211_hw*,int,int) ;
 int FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct ieee80211_hw*,int) ;
 int FUNC_4 (struct ieee80211_hw*,struct ieee80211_conf*) ;
 int FUNC_5 (struct ieee80211_hw*,struct ieee80211_conf*,int) ;
 int FUNC_6 (struct ieee80211_hw*) ;
 int FUNC_7 (struct ieee80211_hw*) ;

__attribute__((used)) static int FUNC_8(struct ieee80211_hw *VAR_3, u32 VAR_4)
{
 struct ieee80211_conf *VAR_5 = &VAR_3->conf;
 struct mwl8k_priv *VAR_6 = VAR_3->priv;
 int VAR_7;

 VAR_7 = FUNC_6(VAR_3);
 if (VAR_7)
  return VAR_7;

 if (VAR_5->flags & VAR_2)
  VAR_7 = FUNC_1(VAR_3);
 else
  VAR_7 = FUNC_2(VAR_3);
 if (VAR_7)
  goto out;

 if (VAR_4 & VAR_0) {
  VAR_7 = FUNC_4(VAR_3, VAR_5);
  if (VAR_7)
   goto out;
 }

 if (VAR_5->power_level > 18)
  VAR_5->power_level = 18;

 if (VAR_6->ap_fw) {

  if (VAR_5->flags & VAR_1) {
   VAR_7 = FUNC_5(VAR_3, VAR_5, VAR_5->power_level);
   if (VAR_7)
    goto out;
  }


 } else {
  VAR_7 = FUNC_3(VAR_3, VAR_5->power_level);
  if (VAR_7)
   goto out;
  VAR_7 = FUNC_0(VAR_3, 0x7, 0x7);
 }

out:
 FUNC_7(VAR_3);

 return VAR_7;
}
