
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wmi_set_ssid_cmd {int ssid; int ssid_len; } ;
struct wil6210_vif {int mid; } ;
struct wil6210_priv {int dummy; } ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,void const*,int) ;
 struct wil6210_priv* FUNC_2 (struct wil6210_vif*) ;
 int FUNC_3 (struct wil6210_priv*,int ,int ,struct wmi_set_ssid_cmd*,int) ;

int FUNC_4(struct wil6210_vif *VAR_2, u8 VAR_3, const void *VAR_4)
{
 struct wil6210_priv *VAR_5 = FUNC_2(VAR_2);
 struct wmi_set_ssid_cmd VAR_6 = {
  .ssid_len = FUNC_0(VAR_3),
 };

 if (VAR_3 > sizeof(VAR_6.ssid))
  return -VAR_0;

 FUNC_1(VAR_6.ssid, VAR_4, VAR_3);

 return FUNC_3(VAR_5, VAR_1, VAR_2->mid, &VAR_6, sizeof(VAR_6));
}
