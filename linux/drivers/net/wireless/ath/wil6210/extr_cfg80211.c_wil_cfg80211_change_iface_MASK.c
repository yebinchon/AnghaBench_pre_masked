
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wireless_dev {int iftype; } ;
struct wiphy {scalar_t__ n_iface_combinations; } ;
struct wil6210_vif {scalar_t__ mid; } ;
struct wil6210_priv {int monitor_flags; int mutex; } ;
struct vif_params {int flags; } ;
struct net_device {int dev_addr; } ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;


 int VAR_0 ;





 int FUNC_0 (struct wil6210_priv*) ;
 int FUNC_1 (struct wil6210_priv*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct wil6210_vif* FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct net_device*) ;
 struct wireless_dev* FUNC_6 (struct wil6210_vif*) ;
 int FUNC_7 (struct wil6210_priv*,struct wil6210_vif*,int) ;
 int FUNC_8 (struct wil6210_priv*,char*,...) ;
 int FUNC_9 (struct wil6210_priv*,char*,int) ;
 scalar_t__ FUNC_10 (struct wil6210_priv*,int,int) ;
 int FUNC_11 (struct wil6210_priv*,struct net_device*,int,int) ;
 int FUNC_12 (struct wil6210_priv*) ;
 int FUNC_13 (int,int) ;
 int FUNC_14 (struct wil6210_vif*) ;
 struct wil6210_priv* FUNC_15 (struct wiphy*) ;
 int FUNC_16 (struct wil6210_priv*,scalar_t__,int ,int) ;
 int FUNC_17 (struct wil6210_priv*,scalar_t__) ;

__attribute__((used)) static int FUNC_18(struct wiphy *VAR_1,
         struct net_device *VAR_2,
         enum nl80211_iftype VAR_3,
         struct vif_params *VAR_4)
{
 struct wil6210_priv *VAR_5 = FUNC_15(VAR_1);
 struct wil6210_vif *VAR_6 = FUNC_4(VAR_2);
 struct wireless_dev *VAR_7 = FUNC_6(VAR_6);
 int VAR_8;
 bool VAR_9 = 0;

 FUNC_8(VAR_5, "change_iface: type=%d\n", VAR_3);

 if (VAR_1->n_iface_combinations) {
  VAR_8 = FUNC_7(VAR_5, VAR_6, VAR_3);
  if (VAR_8) {
   FUNC_9(VAR_5, "iface validation failed, err=%d\n", VAR_8);
   return VAR_8;
  }
 }




 if (!FUNC_11(VAR_5, VAR_2, 1, 0) &&
     FUNC_5(VAR_2) && !FUNC_12(VAR_5) &&
     !FUNC_13(VAR_7->iftype, VAR_3)) {
  FUNC_8(VAR_5, "interface is up. resetting...\n");
  FUNC_2(&VAR_5->mutex);
  FUNC_0(VAR_5);
  VAR_8 = FUNC_1(VAR_5);
  FUNC_3(&VAR_5->mutex);

  if (VAR_8)
   return VAR_8;
  VAR_9 = 1;
 }

 switch (VAR_3) {
 case 128:
 case 132:
 case 130:
 case 129:
  break;
 case 131:
  if (VAR_4->flags)
   VAR_5->monitor_flags = VAR_4->flags;
  break;
 default:
  return -VAR_0;
 }

 if (VAR_6->mid != 0 && FUNC_10(VAR_5, 1, 0)) {
  if (!VAR_9)
   FUNC_14(VAR_6);
  VAR_8 = FUNC_17(VAR_5, VAR_6->mid);
  if (VAR_8)
   return VAR_8;
  VAR_8 = FUNC_16(VAR_5, VAR_6->mid, VAR_2->dev_addr, VAR_3);
  if (VAR_8)
   return VAR_8;
 }

 VAR_7->iftype = VAR_3;
 return 0;
}
