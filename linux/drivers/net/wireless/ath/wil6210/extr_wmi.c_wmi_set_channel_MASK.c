
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmi_set_pcp_channel_cmd {int channel; } ;
struct wil6210_vif {int mid; } ;
struct wil6210_priv {int main_ndev; } ;
typedef int cmd ;


 int VAR_0 ;
 struct wil6210_vif* FUNC_0 (int ) ;
 int FUNC_1 (struct wil6210_priv*,int ,int ,struct wmi_set_pcp_channel_cmd*,int) ;

int FUNC_2(struct wil6210_priv *VAR_1, int VAR_2)
{
 struct wil6210_vif *VAR_3 = FUNC_0(VAR_1->main_ndev);
 struct wmi_set_pcp_channel_cmd VAR_4 = {
  .channel = VAR_2 - 1,
 };

 return FUNC_1(VAR_1, VAR_0, VAR_3->mid,
   &VAR_4, sizeof(VAR_4));
}
