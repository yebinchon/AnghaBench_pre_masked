
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zd_usb_tx {int submitted_skbs; int submitted; int enabled; } ;
struct zd_usb {struct zd_usb_tx tx; } ;
struct usb_device {int dummy; } ;
struct urb {int dummy; } ;
struct sk_buff {int len; int data; } ;
struct ieee80211_tx_info {void** rate_driver_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,struct urb*,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int *,struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,int *) ;
 int FUNC_5 (struct zd_usb*) ;
 int VAR_5 ;
 struct urb* FUNC_6 (int ,int ) ;
 int FUNC_7 (struct urb*,int *) ;
 int FUNC_8 (struct urb*,struct usb_device*,int ,int ,int ,int ,struct sk_buff*) ;
 int FUNC_9 (struct urb*) ;
 int FUNC_10 (struct usb_device*,int ) ;
 int FUNC_11 (struct urb*,int ) ;
 int FUNC_12 (struct urb*) ;
 int FUNC_13 (struct zd_usb*) ;
 struct usb_device* FUNC_14 (struct zd_usb*) ;

int FUNC_15(struct zd_usb *VAR_6, struct sk_buff *VAR_7)
{
 int VAR_8;
 struct ieee80211_tx_info *VAR_9 = FUNC_0(VAR_7);
 struct usb_device *VAR_10 = FUNC_14(VAR_6);
 struct urb *VAR_11;
 struct zd_usb_tx *VAR_12 = &VAR_6->tx;

 if (!FUNC_1(&VAR_12->enabled)) {
  VAR_8 = -VAR_0;
  goto out;
 }

 VAR_11 = FUNC_6(0, VAR_3);
 if (!VAR_11) {
  VAR_8 = -VAR_1;
  goto out;
 }

 FUNC_8(VAR_11, VAR_10, FUNC_10(VAR_10, VAR_2),
            VAR_7->data, VAR_7->len, VAR_5, VAR_7);

 VAR_9->rate_driver_data[1] = (void *)VAR_4;
 FUNC_3(&VAR_12->submitted_skbs, VAR_7);
 FUNC_7(VAR_11, &VAR_12->submitted);

 VAR_8 = FUNC_11(VAR_11, VAR_3);
 if (VAR_8) {
  FUNC_2(FUNC_13(VAR_6), "error submit urb %p %d\n", VAR_11, VAR_8);
  FUNC_12(VAR_11);
  FUNC_4(VAR_7, &VAR_12->submitted_skbs);
  goto error;
 }
 FUNC_5(VAR_6);
 return 0;
error:
 FUNC_9(VAR_11);
out:
 return VAR_8;
}
