
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dev; } ;
struct usb_device {int dev; } ;
struct usb_anchor {int dummy; } ;
struct rt2x00_ops {int hw; } ;
struct rt2x00_dev {int anchor; int txstatus_timer; int txdone_work; int rxdone_work; struct ieee80211_hw* hw; struct rt2x00_ops const* ops; int * dev; } ;
struct ieee80211_hw {struct rt2x00_dev* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int VAR_4 ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 struct ieee80211_hw* FUNC_3 (int,int ) ;
 int FUNC_4 (struct ieee80211_hw*) ;
 int FUNC_5 (int ) ;
 struct usb_device* FUNC_6 (struct usb_interface*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (struct rt2x00_dev*,int ) ;
 int FUNC_9 (struct rt2x00_dev*) ;
 int FUNC_10 (struct rt2x00_dev*) ;
 int FUNC_11 (struct rt2x00_dev*) ;
 int VAR_5 ;
 int VAR_6 ;
 struct usb_device* FUNC_12 (struct usb_device*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct usb_device*) ;
 int FUNC_15 (struct usb_device*) ;
 int FUNC_16 (struct usb_interface*,struct ieee80211_hw*) ;

int FUNC_17(struct usb_interface *VAR_7,
      const struct rt2x00_ops *VAR_8)
{
 struct usb_device *VAR_9 = FUNC_6(VAR_7);
 struct ieee80211_hw *VAR_10;
 struct rt2x00_dev *VAR_11;
 int VAR_12;

 VAR_9 = FUNC_12(VAR_9);
 FUNC_15(VAR_9);

 VAR_10 = FUNC_3(sizeof(struct rt2x00_dev), VAR_8->hw);
 if (!VAR_10) {
  FUNC_7("Failed to allocate hardware\n");
  VAR_12 = -VAR_1;
  goto exit_put_device;
 }

 FUNC_16(VAR_7, VAR_10);

 VAR_11 = VAR_10->priv;
 VAR_11->dev = &VAR_7->dev;
 VAR_11->ops = VAR_8;
 VAR_11->hw = VAR_10;

 FUNC_8(VAR_11, VAR_4);

 FUNC_0(&VAR_11->rxdone_work, VAR_5);
 FUNC_0(&VAR_11->txdone_work, VAR_6);
 FUNC_2(&VAR_11->txstatus_timer, VAR_0,
       VAR_3);

 VAR_12 = FUNC_10(VAR_11);
 if (VAR_12)
  goto exit_free_device;

 VAR_11->anchor = FUNC_1(&VAR_9->dev,
     sizeof(struct usb_anchor),
     VAR_2);
 if (!VAR_11->anchor) {
  VAR_12 = -VAR_1;
  goto exit_free_reg;
 }
 FUNC_5(VAR_11->anchor);

 VAR_12 = FUNC_9(VAR_11);
 if (VAR_12)
  goto exit_free_anchor;

 return 0;

exit_free_anchor:
 FUNC_13(VAR_11->anchor);

exit_free_reg:
 FUNC_11(VAR_11);

exit_free_device:
 FUNC_4(VAR_10);

exit_put_device:
 FUNC_14(VAR_9);

 FUNC_16(VAR_7, ((void*)0));

 return VAR_12;
}
