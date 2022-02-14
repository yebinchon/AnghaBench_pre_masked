
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct p54u_priv {int (* upload_fw ) (struct ieee80211_hw*) ;scalar_t__ fw; } ;
struct ieee80211_hw {struct p54u_priv* priv; } ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211_hw*) ;
 scalar_t__ FUNC_1 (int) ;
 struct ieee80211_hw* FUNC_2 (struct usb_interface*) ;

__attribute__((used)) static int FUNC_3(struct usb_interface *VAR_1)
{
 struct ieee80211_hw *VAR_2 = FUNC_2(VAR_1);
 struct p54u_priv *VAR_3;

 if (!VAR_2)
  return -VAR_0;

 VAR_3 = VAR_2->priv;
 if (FUNC_1(!(VAR_3->upload_fw && VAR_3->fw)))
  return 0;

 return VAR_3->upload_fw(VAR_2);
}
