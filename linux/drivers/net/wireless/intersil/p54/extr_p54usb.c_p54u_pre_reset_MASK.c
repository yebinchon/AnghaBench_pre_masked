
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211_hw*) ;
 struct ieee80211_hw* FUNC_1 (struct usb_interface*) ;

__attribute__((used)) static int FUNC_2(struct usb_interface *VAR_1)
{
 struct ieee80211_hw *VAR_2 = FUNC_1(VAR_1);

 if (!VAR_2)
  return -VAR_0;

 FUNC_0(VAR_2);
 return 0;
}
