
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wireless_dev {int dummy; } ;
struct wiphy {int dummy; } ;
struct wil_sta_info {int dummy; } ;
struct wil6210_vif {int mid; } ;
struct wil6210_priv {int dummy; } ;
struct net_device {int dummy; } ;
typedef enum wmi_key_usage { ____Placeholder_wmi_key_usage } wmi_key_usage ;


 scalar_t__ FUNC_0 (struct wil_sta_info*) ;
 int FUNC_1 (struct wil_sta_info*) ;
 int * VAR_0 ;
 struct wil6210_vif* FUNC_2 (struct net_device*) ;
 struct wireless_dev* FUNC_3 (struct wil6210_vif*) ;
 int FUNC_4 (struct wil6210_priv*,char*,int const*,int ,int ) ;
 int FUNC_5 (int ,int,struct wil_sta_info*) ;
 int FUNC_6 (struct wireless_dev*,int) ;
 struct wil_sta_info* FUNC_7 (struct wil6210_priv*,int ,int,int const*) ;
 int FUNC_8 (struct wil6210_priv*,char*,int const*,int ,int ) ;
 struct wil6210_priv* FUNC_9 (struct wiphy*) ;
 int FUNC_10 (struct wil6210_vif*,int ,int const*,int) ;

__attribute__((used)) static int FUNC_11(struct wiphy *VAR_1,
    struct net_device *VAR_2,
    u8 VAR_3, bool VAR_4,
    const u8 *VAR_5)
{
 struct wil6210_vif *VAR_6 = FUNC_2(VAR_2);
 struct wil6210_priv *VAR_7 = FUNC_9(VAR_1);
 struct wireless_dev *VAR_8 = FUNC_3(VAR_6);
 enum wmi_key_usage VAR_9 = FUNC_6(VAR_8, VAR_4);
 struct wil_sta_info *VAR_10 = FUNC_7(VAR_7, VAR_6->mid,
           VAR_9,
           VAR_5);

 FUNC_4(VAR_7, "del_key: %pM %s[%d]\n", VAR_5,
       VAR_0[VAR_9], VAR_3);

 if (FUNC_0(VAR_10))
  FUNC_8(VAR_7, "Not connected, %pM %s[%d]\n",
    VAR_5, VAR_0[VAR_9], VAR_3);

 if (!FUNC_1(VAR_10))
  FUNC_5(VAR_3, VAR_9, VAR_10);

 return FUNC_10(VAR_6, VAR_3, VAR_5, VAR_9);
}
