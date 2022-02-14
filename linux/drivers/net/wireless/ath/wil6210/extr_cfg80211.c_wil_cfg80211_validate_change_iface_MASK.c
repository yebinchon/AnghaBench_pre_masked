
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wireless_dev {size_t iftype; } ;
struct wil6210_vif {int dummy; } ;
struct wil6210_priv {int wiphy; struct wil6210_vif** vifs; } ;
struct iface_combination_params {int num_different_channels; int * iftype_num; } ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;


 int FUNC_0 (struct wil6210_priv*) ;
 int FUNC_1 (int ,struct iface_combination_params*) ;
 struct wireless_dev* FUNC_2 (struct wil6210_vif*) ;

__attribute__((used)) static int FUNC_3(struct wil6210_priv *VAR_0,
           struct wil6210_vif *VAR_1,
           enum nl80211_iftype VAR_2)
{
 int VAR_3, VAR_4 = 0;
 struct wireless_dev *VAR_5;
 struct iface_combination_params VAR_6 = {
  .num_different_channels = 1,
 };
 bool VAR_7 = 0;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
  struct wil6210_vif *VAR_8 = VAR_0->vifs[VAR_3];

  if (VAR_8 && VAR_1 != VAR_8) {
   VAR_5 = FUNC_2(VAR_8);
   VAR_6.iftype_num[VAR_5->iftype]++;
   VAR_7 = 1;
  }
 }

 if (VAR_7) {
  VAR_6.iftype_num[VAR_2]++;
  VAR_4 = FUNC_1(VAR_0->wiphy, &VAR_6);
 }
 return VAR_4;
}
