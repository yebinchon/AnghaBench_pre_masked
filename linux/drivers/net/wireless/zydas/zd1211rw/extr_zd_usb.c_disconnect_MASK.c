
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zd_usb {int dummy; } ;
struct TYPE_2__ {struct zd_usb usb; } ;
struct zd_mac {TYPE_1__ chip; } ;
struct usb_interface {int dev; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (struct usb_interface*) ;
 int FUNC_5 (int ) ;
 struct zd_mac* FUNC_6 (struct ieee80211_hw*) ;
 struct ieee80211_hw* FUNC_7 (struct usb_interface*) ;
 int FUNC_8 (struct zd_mac*) ;
 int FUNC_9 (struct zd_usb*) ;
 int FUNC_10 (struct zd_usb*) ;
 int FUNC_11 (struct zd_usb*) ;
 int FUNC_12 (struct zd_usb*) ;

__attribute__((used)) static void FUNC_13(struct usb_interface *VAR_0)
{
 struct ieee80211_hw *VAR_1 = FUNC_7(VAR_0);
 struct zd_mac *VAR_2;
 struct zd_usb *VAR_3;



 if (VAR_1 == ((void*)0))
  return;

 VAR_2 = FUNC_6(VAR_1);
 VAR_3 = &VAR_2->chip.usb;

 FUNC_1(FUNC_9(VAR_3), "\n");

 FUNC_3(VAR_1);


 FUNC_12(VAR_3);
 FUNC_11(VAR_3);
 FUNC_10(VAR_3);






 FUNC_5(FUNC_4(VAR_0));

 FUNC_8(VAR_2);
 FUNC_2(VAR_1);
 FUNC_0(&VAR_0->dev, "disconnected\n");
}
