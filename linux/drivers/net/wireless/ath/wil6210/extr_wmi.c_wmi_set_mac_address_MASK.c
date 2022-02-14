
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmi_set_mac_address_cmd {int mac; } ;
struct wil6210_vif {int mid; } ;
struct wil6210_priv {int main_ndev; } ;
typedef int cmd ;


 int VAR_0 ;
 int FUNC_0 (int ,void*) ;
 struct wil6210_vif* FUNC_1 (int ) ;
 int FUNC_2 (struct wil6210_priv*,char*,void*) ;
 int FUNC_3 (struct wil6210_priv*,int ,int ,struct wmi_set_mac_address_cmd*,int) ;

int FUNC_4(struct wil6210_priv *VAR_1, void *VAR_2)
{
 struct wil6210_vif *VAR_3 = FUNC_1(VAR_1->main_ndev);
 struct wmi_set_mac_address_cmd VAR_4;

 FUNC_0(VAR_4.mac, VAR_2);

 FUNC_2(VAR_1, "Set MAC %pM\n", VAR_2);

 return FUNC_3(VAR_1, VAR_0, VAR_3->mid,
   &VAR_4, sizeof(VAR_4));
}
