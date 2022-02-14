
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wireless_dev {size_t iftype; } ;
struct wil6210_priv {int wiphy; scalar_t__* vifs; } ;
struct iface_combination_params {int num_different_channels; int * iftype_num; } ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;


 int FUNC_0 (struct wil6210_priv*) ;
 int FUNC_1 (int ,struct iface_combination_params*) ;
 struct wireless_dev* FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct wil6210_priv *VAR_0,
        enum nl80211_iftype VAR_1)
{
 int VAR_2;
 struct wireless_dev *VAR_3;
 struct iface_combination_params VAR_4 = {
  .num_different_channels = 1,
 };

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++) {
  if (VAR_0->vifs[VAR_2]) {
   VAR_3 = FUNC_2(VAR_0->vifs[VAR_2]);
   VAR_4.iftype_num[VAR_3->iftype]++;
  }
 }
 VAR_4.iftype_num[VAR_1]++;
 return FUNC_1(VAR_0->wiphy, &VAR_4);
}
