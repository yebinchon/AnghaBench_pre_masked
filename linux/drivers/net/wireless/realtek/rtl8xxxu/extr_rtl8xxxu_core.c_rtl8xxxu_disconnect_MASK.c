
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct rtl8xxxu_priv {TYPE_2__* udev; int h2c_mutex; int usb_buf_mutex; int fw_data; TYPE_1__* fops; } ;
struct ieee80211_hw {struct rtl8xxxu_priv* priv; } ;
struct TYPE_5__ {scalar_t__ state; int dev; } ;
struct TYPE_4__ {int (* power_off ) (struct rtl8xxxu_priv*) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct rtl8xxxu_priv*) ;
 struct ieee80211_hw* FUNC_6 (struct usb_interface*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_10(struct usb_interface *VAR_1)
{
 struct rtl8xxxu_priv *VAR_2;
 struct ieee80211_hw *VAR_3;

 VAR_3 = FUNC_6(VAR_1);
 VAR_2 = VAR_3->priv;

 FUNC_2(VAR_3);

 VAR_2->fops->power_off(VAR_2);

 FUNC_9(VAR_1, ((void*)0));

 FUNC_0(&VAR_2->udev->dev, "disconnecting\n");

 FUNC_3(VAR_2->fw_data);
 FUNC_4(&VAR_2->usb_buf_mutex);
 FUNC_4(&VAR_2->h2c_mutex);

 if (VAR_2->udev->state != VAR_0) {
  FUNC_0(&VAR_2->udev->dev,
    "Device still attached, trying to reset\n");
  FUNC_8(VAR_2->udev);
 }
 FUNC_7(VAR_2->udev);
 FUNC_1(VAR_3);
}
