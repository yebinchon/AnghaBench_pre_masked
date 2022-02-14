
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wmi_new_sta_cmd {int dst_mac; int aid; } ;
struct wil6210_vif {int mid; } ;
struct wil6210_priv {int dummy; } ;
typedef int cmd ;


 int VAR_0 ;
 int FUNC_0 (int ,int const*) ;
 struct wil6210_priv* FUNC_1 (struct wil6210_vif*) ;
 int FUNC_2 (struct wil6210_priv*,char*,int const*,int ) ;
 int FUNC_3 (struct wil6210_priv*,char*,int) ;
 int FUNC_4 (struct wil6210_priv*,int ,int ,struct wmi_new_sta_cmd*,int) ;

int FUNC_5(struct wil6210_vif *VAR_1, const u8 *VAR_2, u8 VAR_3)
{
 struct wil6210_priv *VAR_4 = FUNC_1(VAR_1);
 int VAR_5;
 struct wmi_new_sta_cmd VAR_6 = {
  .aid = VAR_3,
 };

 FUNC_2(VAR_4, "new sta %pM, aid %d\n", VAR_2, VAR_3);

 FUNC_0(VAR_6.dst_mac, VAR_2);

 VAR_5 = FUNC_4(VAR_4, VAR_0, VAR_1->mid, &VAR_6, sizeof(VAR_6));
 if (VAR_5)
  FUNC_3(VAR_4, "Failed to send new sta (%d)\n", VAR_5);

 return VAR_5;
}
