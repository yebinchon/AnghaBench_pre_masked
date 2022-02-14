
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtw_dev {int dummy; } ;
struct rtw_chip_info {int band; scalar_t__ vht_supported; scalar_t__ ht_supported; } ;
struct ieee80211_supported_band {int vht_cap; int ht_cap; } ;
struct ieee80211_hw {TYPE_1__* wiphy; struct rtw_dev* priv; } ;
struct TYPE_2__ {struct ieee80211_supported_band** bands; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ieee80211_supported_band*) ;
 struct ieee80211_supported_band* FUNC_1 (int *,int,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct rtw_dev*,char*) ;
 int FUNC_3 (struct rtw_dev*,int *) ;
 int FUNC_4 (struct rtw_dev*,int *) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_hw *VAR_7,
       struct rtw_chip_info *VAR_8)
{
 struct rtw_dev *VAR_9 = VAR_7->priv;
 struct ieee80211_supported_band *VAR_10;

 if (VAR_8->band & VAR_3) {
  VAR_10 = FUNC_1(&VAR_5, sizeof(*VAR_10), VAR_0);
  if (!VAR_10)
   goto err_out;
  if (VAR_8->ht_supported)
   FUNC_3(VAR_9, &VAR_10->ht_cap);
  VAR_7->wiphy->bands[VAR_1] = VAR_10;
 }

 if (VAR_8->band & VAR_4) {
  VAR_10 = FUNC_1(&VAR_6, sizeof(*VAR_10), VAR_0);
  if (!VAR_10)
   goto err_out;
  if (VAR_8->ht_supported)
   FUNC_3(VAR_9, &VAR_10->ht_cap);
  if (VAR_8->vht_supported)
   FUNC_4(VAR_9, &VAR_10->vht_cap);
  VAR_7->wiphy->bands[VAR_2] = VAR_10;
 }

 return;

err_out:
 FUNC_2(VAR_9, "failed to set supported band\n");
 FUNC_0(VAR_10);
}
