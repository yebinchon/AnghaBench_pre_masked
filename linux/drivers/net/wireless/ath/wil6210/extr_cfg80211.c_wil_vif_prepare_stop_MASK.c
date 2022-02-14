
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wireless_dev {scalar_t__ iftype; } ;
struct wil6210_vif {int dummy; } ;
struct wil6210_priv {int dummy; } ;
struct net_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 struct net_device* FUNC_2 (struct wil6210_vif*) ;
 struct wireless_dev* FUNC_3 (struct wil6210_vif*) ;
 struct wil6210_priv* FUNC_4 (struct wil6210_vif*) ;
 int FUNC_5 (struct wil6210_vif*) ;
 int FUNC_6 (struct wil6210_priv*,char*,int) ;
 int FUNC_7 (struct wil6210_vif*) ;

int FUNC_8(struct wil6210_vif *VAR_1)
{
 struct wil6210_priv *VAR_2 = FUNC_4(VAR_1);
 struct wireless_dev *VAR_3 = FUNC_3(VAR_1);
 struct net_device *VAR_4;
 int VAR_5;

 if (VAR_3->iftype != VAR_0)
  return 0;

 VAR_4 = FUNC_2(VAR_1);
 if (FUNC_1(VAR_4)) {
  VAR_5 = FUNC_7(VAR_1);
  if (VAR_5) {
   FUNC_6(VAR_2, "failed to stop AP, status %d\n",
     VAR_5);

  }
  FUNC_5(VAR_1);
  FUNC_0(VAR_4);
 }

 return 0;
}
