
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef scalar_t__ u16 ;
struct wmi_set_appie_cmd {size_t mgmt_frm_type; int ie_info; int ie_len; } ;
struct wil6210_vif {int mid; } ;
struct wil6210_priv {int dummy; } ;


 size_t FUNC_0 (char const* const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 int VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct wmi_set_appie_cmd*) ;
 struct wmi_set_appie_cmd* FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (int ,void const*,scalar_t__) ;
 struct wil6210_priv* FUNC_5 (struct wil6210_vif*) ;
 int FUNC_6 (struct wil6210_priv*,char*,size_t,char const*,int) ;
 int FUNC_7 (struct wil6210_priv*,int ,int ,struct wmi_set_appie_cmd*,scalar_t__) ;

int FUNC_8(struct wil6210_vif *VAR_4, u8 VAR_5, u16 VAR_6, const void *VAR_7)
{
 struct wil6210_priv *VAR_8 = FUNC_5(VAR_4);
 static const char *const VAR_9[] = {
  [130] = "BEACON",
  [129] = "PROBE_REQ",
  [128] = "WMI_FRAME_PROBE_RESP",
  [132] = "WMI_FRAME_ASSOC_REQ",
  [131] = "WMI_FRAME_ASSOC_RESP",
 };
 int VAR_10;
 u16 VAR_11 = sizeof(struct wmi_set_appie_cmd) + VAR_6;
 struct wmi_set_appie_cmd *VAR_12;

 if (VAR_11 < VAR_6) {
  VAR_10 = -VAR_0;
  goto out;
 }

 VAR_12 = FUNC_3(VAR_11, VAR_2);
 if (!VAR_12) {
  VAR_10 = -VAR_1;
  goto out;
 }
 if (!VAR_7)
  VAR_6 = 0;

 VAR_12->mgmt_frm_type = VAR_5;

 VAR_12->ie_len = FUNC_1(VAR_6);
 FUNC_4(VAR_12->ie_info, VAR_7, VAR_6);
 VAR_10 = FUNC_7(VAR_8, VAR_3, VAR_4->mid, VAR_12, VAR_11);
 FUNC_2(VAR_12);
out:
 if (VAR_10) {
  const char *VAR_13 = VAR_5 < FUNC_0(VAR_9) ?
       VAR_9[VAR_5] : "??";
  FUNC_6(VAR_8, "set_ie(%d %s) failed : %d\n", VAR_5, VAR_13, VAR_10);
 }

 return VAR_10;
}
