
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zd_usb {int submitted_cmds; int intf; } ;
struct usb_interface {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct zd_usb*) ;
 int FUNC_2 (struct zd_usb*) ;
 int FUNC_3 (struct zd_usb*) ;
 int FUNC_4 (struct zd_usb*,int ,int) ;
 int FUNC_5 (struct usb_interface*) ;
 int FUNC_6 (int ,struct ieee80211_hw*) ;

void FUNC_7(struct zd_usb *VAR_0, struct ieee80211_hw *VAR_1,
          struct usb_interface *VAR_2)
{
 FUNC_4(VAR_0, 0, sizeof(*VAR_0));
 VAR_0->intf = FUNC_5(VAR_2);
 FUNC_6(VAR_0->intf, VAR_1);
 FUNC_0(&VAR_0->submitted_cmds);
 FUNC_1(VAR_0);
 FUNC_3(VAR_0);
 FUNC_2(VAR_0);
}
