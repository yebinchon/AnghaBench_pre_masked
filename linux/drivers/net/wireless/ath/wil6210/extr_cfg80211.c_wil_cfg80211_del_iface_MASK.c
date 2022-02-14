
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wireless_dev {int address; int iftype; } ;
struct wiphy {int dummy; } ;
struct wil6210_vif {scalar_t__ mid; } ;
struct wil6210_priv {struct wireless_dev* p2p_wdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct wil6210_vif* FUNC_0 (struct wil6210_priv*,struct wireless_dev*) ;
 int FUNC_1 (struct wiphy*,struct wireless_dev*) ;
 int FUNC_2 (struct wil6210_priv*,char*) ;
 int FUNC_3 (struct wil6210_priv*,char*,...) ;
 int FUNC_4 (struct wil6210_priv*,char*,scalar_t__,int ,int ) ;
 int FUNC_5 (struct wil6210_priv*) ;
 int FUNC_6 (struct wil6210_vif*) ;
 int FUNC_7 (struct wil6210_priv*,scalar_t__) ;
 struct wil6210_priv* FUNC_8 (struct wiphy*) ;

__attribute__((used)) static int FUNC_9(struct wiphy *VAR_2,
      struct wireless_dev *VAR_3)
{
 struct wil6210_priv *VAR_4 = FUNC_8(VAR_2);
 struct wil6210_vif *VAR_5 = FUNC_0(VAR_4, VAR_3);
 int VAR_6;

 FUNC_2(VAR_4, "del_iface\n");

 if (VAR_3->iftype == VAR_1) {
  if (VAR_3 != VAR_4->p2p_wdev) {
   FUNC_3(VAR_4, "delete of incorrect interface 0x%p\n",
    VAR_3);
   return -VAR_0;
  }

  FUNC_1(VAR_2, VAR_3);
  FUNC_5(VAR_4);
  return 0;
 }

 if (VAR_5->mid == 0) {
  FUNC_3(VAR_4, "cannot remove the main interface\n");
  return -VAR_0;
 }

 VAR_6 = FUNC_6(VAR_5);
 if (VAR_6)
  goto out;

 FUNC_4(VAR_4, "deleted VIF, mid %d iftype %d MAC %pM\n",
   VAR_5->mid, VAR_3->iftype, VAR_3->address);

 FUNC_7(VAR_4, VAR_5->mid);
out:
 return VAR_6;
}
