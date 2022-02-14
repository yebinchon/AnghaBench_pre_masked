
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct usb_device {int dummy; } ;
struct TYPE_2__ {int state; } ;
struct mt76x02_dev {TYPE_1__ mt76; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (struct ieee80211_hw*) ;
 struct usb_device* FUNC_2 (struct usb_interface*) ;
 struct ieee80211_hw* FUNC_3 (struct mt76x02_dev*) ;
 int FUNC_4 (struct mt76x02_dev*) ;
 int FUNC_5 (int ,int *) ;
 struct mt76x02_dev* FUNC_6 (struct usb_interface*) ;
 int FUNC_7 (struct usb_device*) ;
 int FUNC_8 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_9(struct usb_interface *VAR_1)
{
 struct usb_device *VAR_2 = FUNC_2(VAR_1);
 struct mt76x02_dev *VAR_3 = FUNC_6(VAR_1);
 struct ieee80211_hw *VAR_4 = FUNC_3(VAR_3);

 FUNC_5(VAR_0, &VAR_3->mt76.state);
 FUNC_1(VAR_4);
 FUNC_4(VAR_3);

 FUNC_0(VAR_4);
 FUNC_8(VAR_1, ((void*)0));
 FUNC_7(VAR_2);
}
