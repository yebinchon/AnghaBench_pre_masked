
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wmi_update_ft_ies_cmd {int ie_info; int ie_len; } ;
struct wil6210_vif {int mid; } ;
struct wil6210_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct wmi_update_ft_ies_cmd*) ;
 struct wmi_update_ft_ies_cmd* FUNC_2 (int,int ) ;
 int FUNC_3 (int ,void const*,int) ;
 struct wil6210_priv* FUNC_4 (struct wil6210_vif*) ;
 int FUNC_5 (struct wil6210_priv*,char*,int) ;
 int FUNC_6 (struct wil6210_priv*,int ,int ,struct wmi_update_ft_ies_cmd*,int) ;

int FUNC_7(struct wil6210_vif *VAR_4, u16 VAR_5, const void *VAR_6)
{
 struct wil6210_priv *VAR_7 = FUNC_4(VAR_4);
 u16 VAR_8;
 struct wmi_update_ft_ies_cmd *VAR_9;
 int VAR_10;

 if (!VAR_6)
  VAR_5 = 0;

 VAR_8 = sizeof(struct wmi_update_ft_ies_cmd) + VAR_5;
 if (VAR_8 < VAR_5) {
  FUNC_5(VAR_7, "wraparound. ie len %d\n", VAR_5);
  return -VAR_0;
 }

 VAR_9 = FUNC_2(VAR_8, VAR_2);
 if (!VAR_9) {
  VAR_10 = -VAR_1;
  goto out;
 }

 VAR_9->ie_len = FUNC_0(VAR_5);
 FUNC_3(VAR_9->ie_info, VAR_6, VAR_5);
 VAR_10 = FUNC_6(VAR_7, VAR_3, VAR_4->mid, VAR_9, VAR_8);
 FUNC_1(VAR_9);

out:
 if (VAR_10)
  FUNC_5(VAR_7, "update ft ies failed : %d\n", VAR_10);

 return VAR_10;
}
