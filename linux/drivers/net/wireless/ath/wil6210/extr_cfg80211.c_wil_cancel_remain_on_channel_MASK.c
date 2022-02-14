
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct wireless_dev {int dummy; } ;
struct wiphy {int dummy; } ;
struct wil6210_vif {int dummy; } ;
struct wil6210_priv {int dummy; } ;


 struct wil6210_vif* FUNC_0 (struct wil6210_priv*,struct wireless_dev*) ;
 int FUNC_1 (struct wil6210_priv*,char*) ;
 int FUNC_2 (struct wil6210_vif*,int ) ;
 struct wil6210_priv* FUNC_3 (struct wiphy*) ;

__attribute__((used)) static int FUNC_4(struct wiphy *VAR_0,
     struct wireless_dev *VAR_1,
     u64 VAR_2)
{
 struct wil6210_priv *VAR_3 = FUNC_3(VAR_0);
 struct wil6210_vif *VAR_4 = FUNC_0(VAR_3, VAR_1);

 FUNC_1(VAR_3, "cancel_remain_on_channel\n");

 return FUNC_2(VAR_4, VAR_2);
}
