
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct ieee80211_hw {struct ar5523* priv; } ;
struct ar5523 {int wq; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct ar5523*) ;
 int FUNC_1 (struct ar5523*,char*) ;
 int FUNC_2 (struct ar5523*) ;
 int FUNC_3 (struct ar5523*) ;
 int FUNC_4 (struct ar5523*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct ieee80211_hw*) ;
 int FUNC_7 (struct ieee80211_hw*) ;
 int FUNC_8 (int ,int *) ;
 struct ieee80211_hw* FUNC_9 (struct usb_interface*) ;
 int FUNC_10 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_11(struct usb_interface *VAR_1)
{
 struct ieee80211_hw *VAR_2 = FUNC_9(VAR_1);
 struct ar5523 *VAR_3 = VAR_2->priv;

 FUNC_1(VAR_3, "detaching\n");
 FUNC_8(VAR_0, &VAR_3->flags);

 FUNC_7(VAR_2);

 FUNC_0(VAR_3);
 FUNC_4(VAR_3);
 FUNC_3(VAR_3);
 FUNC_2(VAR_3);

 FUNC_5(VAR_3->wq);

 FUNC_6(VAR_2);
 FUNC_10(VAR_1, ((void*)0));
}
