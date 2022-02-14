
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wireless_dev {int dummy; } ;
struct wiphy {int dummy; } ;
struct TYPE_2__ {struct wireless_dev wdev; } ;
struct wilc_vif {int monitor_flag; TYPE_1__ priv; int ndev; } ;
struct wilc {scalar_t__ vif_num; int vif_mutex; struct wilc_vif** vif; } ;
struct vif_params {int dummy; } ;
struct net_device {int dummy; } ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;


 int VAR_0 ;
 int VAR_1 ;
 struct wireless_dev* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct wilc_vif*) ;

 int VAR_2 ;

 int FUNC_2 (struct wilc_vif*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct wilc*,int) ;
 struct wilc_vif* FUNC_7 (struct wilc*,char const*,int,int,int) ;
 struct net_device* FUNC_8 (struct wilc*,char const*,int ) ;
 struct wilc* FUNC_9 (struct wiphy*) ;

__attribute__((used)) static struct wireless_dev *FUNC_10(struct wiphy *VAR_7,
          const char *VAR_8,
          unsigned char VAR_9,
          enum nl80211_iftype VAR_10,
          struct vif_params *VAR_11)
{
 struct wilc *VAR_12 = FUNC_9(VAR_7);
 struct wilc_vif *VAR_13;
 struct wireless_dev *VAR_14;
 int VAR_15;
 int VAR_16;

 if (VAR_10 == VAR_2) {
  struct net_device *VAR_17;
  int VAR_18 = FUNC_6(VAR_12, VAR_3);

  if (VAR_18 < 0) {
   VAR_18 = FUNC_6(VAR_12, VAR_4);
   if (VAR_18 < 0)
    goto validate_interface;
  }

  VAR_13 = VAR_12->vif[VAR_18];
  if (VAR_13->monitor_flag)
   goto validate_interface;

  VAR_17 = FUNC_8(VAR_12, VAR_8, VAR_13->ndev);
  if (VAR_17)
   VAR_13->monitor_flag = 1;
  else
   return FUNC_0(-VAR_0);

  VAR_14 = &VAR_13->priv.wdev;
  return VAR_14;
 }

validate_interface:
 FUNC_3(&VAR_12->vif_mutex);
 if (VAR_12->vif_num == VAR_5) {
  FUNC_5("Reached maximum number of interface\n");
  VAR_16 = -VAR_0;
  goto out_err;
 }

 switch (VAR_10) {
 case 128:
  VAR_15 = VAR_6;
  break;
 case 129:
  VAR_15 = VAR_3;
  break;
 default:
  VAR_16 = -VAR_1;
  goto out_err;
 }

 VAR_13 = FUNC_7(VAR_12, VAR_8, VAR_15, VAR_10, 1);
 if (FUNC_1(VAR_13)) {
  VAR_16 = FUNC_2(VAR_13);
  goto out_err;
 }

 FUNC_4(&VAR_12->vif_mutex);

 return &VAR_13->priv.wdev;

out_err:
 FUNC_4(&VAR_12->vif_mutex);
 return FUNC_0(VAR_16);
}
