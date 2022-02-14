
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ fw_interface; struct ieee80211_hw* hw; } ;
struct p54u_priv {int (* upload_fw ) (struct ieee80211_hw*) ;TYPE_1__* udev; TYPE_2__ common; int fw; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_6__ {scalar_t__ intf; int hw; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (struct p54u_priv*) ;
 int FUNC_2 (struct ieee80211_hw*,int ) ;
 int FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (struct ieee80211_hw*,int *) ;
 TYPE_3__* VAR_1 ;
 int FUNC_5 (struct ieee80211_hw*) ;
 int FUNC_6 (struct ieee80211_hw*) ;
 int FUNC_7 (struct ieee80211_hw*) ;

__attribute__((used)) static int FUNC_8(struct p54u_priv *VAR_2)
{
 struct ieee80211_hw *VAR_3 = VAR_2->common.hw;
 int VAR_4;

 VAR_4 = FUNC_2(VAR_3, VAR_2->fw);
 if (VAR_4)
  goto err_out;

 VAR_4 = FUNC_1(VAR_2);
 if (VAR_4 < 0)
  goto err_out;

 if (VAR_2->common.fw_interface != VAR_1[VAR_4].intf) {
  FUNC_0(&VAR_2->udev->dev, "wrong firmware, please get "
   "a firmware for \"%s\" and try again.\n",
   VAR_1[VAR_4].hw);
  VAR_4 = -VAR_0;
  goto err_out;
 }

 VAR_4 = VAR_2->upload_fw(VAR_3);
 if (VAR_4)
  goto err_out;

 VAR_4 = FUNC_5(VAR_3);
 if (VAR_4)
  goto err_out;

 VAR_4 = FUNC_3(VAR_3);
 if (VAR_4)
  goto err_stop;

 FUNC_6(VAR_3);

 VAR_4 = FUNC_4(VAR_3, &VAR_2->udev->dev);
 if (VAR_4)
  goto err_stop;

 return 0;

err_stop:
 FUNC_6(VAR_3);

err_out:




 return VAR_4;
}
