
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zd_usb {scalar_t__ was_running; } ;
struct TYPE_2__ {int mutex; struct zd_usb usb; } ;
struct zd_mac {TYPE_1__ chip; } ;
struct usb_interface {scalar_t__ condition; } ;
struct ieee80211_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 struct ieee80211_hw* FUNC_1 (struct usb_interface*) ;
 struct zd_mac* FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct zd_usb*) ;

__attribute__((used)) static int FUNC_4(struct usb_interface *VAR_1)
{
 struct ieee80211_hw *VAR_2 = FUNC_1(VAR_1);
 struct zd_mac *VAR_3;
 struct zd_usb *VAR_4;

 if (!VAR_2 || VAR_1->condition != VAR_0)
  return 0;

 VAR_3 = FUNC_2(VAR_2);
 VAR_4 = &VAR_3->chip.usb;

 FUNC_0(&VAR_3->chip.mutex);

 if (VAR_4->was_running)
  FUNC_3(VAR_4);
 return 0;
}
