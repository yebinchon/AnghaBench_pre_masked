
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmi_echo_cmd {int value; } ;
struct wil6210_vif {int mid; } ;
struct wil6210_priv {int main_ndev; } ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 struct wil6210_vif* FUNC_1 (int ) ;
 int FUNC_2 (struct wil6210_priv*,int ,int ,struct wmi_echo_cmd*,int,int ,int *,int ,int ) ;

int FUNC_3(struct wil6210_priv *VAR_3)
{
 struct wil6210_vif *VAR_4 = FUNC_1(VAR_3->main_ndev);
 struct wmi_echo_cmd VAR_5 = {
  .value = FUNC_0(0x12345678),
 };

 return FUNC_2(VAR_3, VAR_1, VAR_4->mid, &VAR_5, sizeof(VAR_5),
   VAR_2, ((void*)0), 0,
   VAR_0);
}
