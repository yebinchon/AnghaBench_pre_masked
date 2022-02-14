
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct wireless_dev {int iftype; } ;
struct wiphy {int dummy; } ;
struct wil6210_priv {int dummy; } ;
struct ieee80211_channel {int center_freq; } ;


 int FUNC_0 (struct wil6210_priv*,char*,int ,unsigned int,int ) ;
 int FUNC_1 (struct wil6210_priv*,struct wireless_dev*,unsigned int,struct ieee80211_channel*,int *) ;
 struct wil6210_priv* FUNC_2 (struct wiphy*) ;

__attribute__((used)) static int FUNC_3(struct wiphy *VAR_0,
     struct wireless_dev *VAR_1,
     struct ieee80211_channel *VAR_2,
     unsigned int VAR_3,
     u64 *VAR_4)
{
 struct wil6210_priv *VAR_5 = FUNC_2(VAR_0);
 int VAR_6;

 FUNC_0(VAR_5,
       "remain_on_channel: center_freq=%d, duration=%d iftype=%d\n",
       VAR_2->center_freq, VAR_3, VAR_1->iftype);

 VAR_6 = FUNC_1(VAR_5, VAR_1, VAR_3, VAR_2, VAR_4);
 return VAR_6;
}
