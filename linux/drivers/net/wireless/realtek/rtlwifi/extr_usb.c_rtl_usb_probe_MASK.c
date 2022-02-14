
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct usb_interface {int dev; } ;
struct usb_device_id {int dummy; } ;
struct usb_device {int dev; } ;
struct TYPE_9__ {struct usb_device* udev; struct usb_interface* intf; } ;
struct rtl_usb_priv {TYPE_3__ dev; } ;
struct TYPE_12__ {int mac80211_registered; } ;
struct TYPE_10__ {int interface; } ;
struct TYPE_8__ {int lps_change_work; int fill_h2c_cmd; } ;
struct TYPE_7__ {int usb_lock; } ;
struct rtl_priv {int firmware_loading_complete; int status; TYPE_6__ mac80211; struct rtl_hal_cfg* cfg; int * intf_ops; TYPE_4__ rtlhal; scalar_t__ usb_data_index; TYPE_2__ works; TYPE_1__ locks; int usb_data; struct ieee80211_hw* hw; } ;
struct rtl_hal_cfg {TYPE_5__* ops; } ;
struct ieee80211_hw {struct rtl_priv* priv; } ;
struct TYPE_11__ {int (* init_sw_leds ) (struct ieee80211_hw*) ;scalar_t__ (* init_sw_vars ) (struct ieee80211_hw*) ;int (* read_eeprom_info ) (struct ieee80211_hw*) ;int (* read_chip_version ) (struct ieee80211_hw*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct ieee80211_hw*,int *) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (int *,struct ieee80211_hw*) ;
 int FUNC_5 (struct ieee80211_hw*) ;
 int FUNC_6 (int *) ;
 struct ieee80211_hw* FUNC_7 (int,int *) ;
 int FUNC_8 (struct ieee80211_hw*) ;
 int FUNC_9 (int *) ;
 struct usb_device* FUNC_10 (struct usb_interface*) ;
 int FUNC_11 (int ,int,int ) ;
 int FUNC_12 (struct rtl_usb_priv*,int ,int) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (struct ieee80211_hw*) ;
 int VAR_6 ;
 int FUNC_15 (struct ieee80211_hw*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_16 (struct ieee80211_hw*) ;
 int VAR_9 ;
 struct rtl_usb_priv* FUNC_17 (struct ieee80211_hw*) ;
 int FUNC_18 (int ,int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (struct ieee80211_hw*) ;
 int FUNC_21 (struct ieee80211_hw*) ;
 scalar_t__ FUNC_22 (struct ieee80211_hw*) ;
 int FUNC_23 (struct ieee80211_hw*) ;
 int FUNC_24 (struct usb_device*) ;
 int FUNC_25 (struct usb_device*) ;
 int FUNC_26 (struct usb_interface*,struct ieee80211_hw*) ;

int FUNC_27(struct usb_interface *VAR_10,
    const struct usb_device_id *VAR_11,
    struct rtl_hal_cfg *VAR_12)
{
 int VAR_13;
 struct ieee80211_hw *VAR_14 = ((void*)0);
 struct rtl_priv *VAR_15 = ((void*)0);
 struct usb_device *VAR_16;
 struct rtl_usb_priv *VAR_17;

 VAR_14 = FUNC_7(sizeof(struct rtl_priv) +
    sizeof(struct rtl_usb_priv), &VAR_8);
 if (!VAR_14) {
  FUNC_2(1, "rtl_usb: ieee80211 alloc failed\n");
  return -VAR_1;
 }
 VAR_15 = VAR_14->priv;
 VAR_15->hw = VAR_14;
 VAR_15->usb_data = FUNC_11(VAR_5, sizeof(u32),
        VAR_2);
 if (!VAR_15->usb_data)
  return -VAR_1;


 FUNC_19(&VAR_15->locks.usb_lock);
 FUNC_0(&VAR_15->works.fill_h2c_cmd,
    VAR_6);
 FUNC_0(&VAR_15->works.lps_change_work,
    VAR_7);

 VAR_15->usb_data_index = 0;
 FUNC_9(&VAR_15->firmware_loading_complete);
 FUNC_1(VAR_14, &VAR_10->dev);
 VAR_16 = FUNC_10(VAR_10);
 FUNC_24(VAR_16);
 VAR_17 = FUNC_17(VAR_14);
 FUNC_12(VAR_17, 0, sizeof(*VAR_17));
 VAR_17->dev.intf = VAR_10;
 VAR_17->dev.udev = VAR_16;
 FUNC_26(VAR_10, VAR_14);

 VAR_15->rtlhal.interface = VAR_3;
 VAR_15->cfg = VAR_12;
 VAR_15->intf_ops = &VAR_9;

 FUNC_4(&VAR_16->dev, VAR_14);
 VAR_15->cfg->ops->read_chip_version(VAR_14);

 VAR_15->cfg->ops->read_eeprom_info(VAR_14);
 VAR_13 = FUNC_3(VAR_14);
 if (VAR_13)
  goto error_out2;
 FUNC_16(VAR_14);

 VAR_13 = FUNC_15(VAR_14);
 if (VAR_13) {
  FUNC_13("Can't allocate sw for mac80211\n");
  goto error_out2;
 }
 if (VAR_15->cfg->ops->init_sw_vars(VAR_14)) {
  FUNC_13("Can't init_sw_vars\n");
  goto error_out;
 }
 VAR_15->cfg->ops->init_sw_leds(VAR_14);

 VAR_13 = FUNC_8(VAR_14);
 if (VAR_13) {
  FUNC_13("Can't register mac80211 hw.\n");
  VAR_13 = -VAR_0;
  goto error_out;
 }
 VAR_15->mac80211.mac80211_registered = 1;

 FUNC_18(VAR_4, &VAR_15->status);
 return 0;

error_out:
 FUNC_14(VAR_14);
error_out2:
 FUNC_5(VAR_14);
 FUNC_25(VAR_16);
 FUNC_6(&VAR_15->firmware_loading_complete);
 return -VAR_0;
}
