
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wmi_delete_cipher_key_cmd {int mac; int key_index; } ;
struct wil6210_vif {int mid; } ;
struct wil6210_priv {int dummy; } ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,void const*,int ) ;
 struct wil6210_priv* FUNC_1 (struct wil6210_vif*) ;
 int FUNC_2 (struct wil6210_priv*,int ,int ,struct wmi_delete_cipher_key_cmd*,int) ;

int FUNC_3(struct wil6210_vif *VAR_2, u8 VAR_3,
         const void *VAR_4, int VAR_5)
{
 struct wil6210_priv *VAR_6 = FUNC_1(VAR_2);
 struct wmi_delete_cipher_key_cmd VAR_7 = {
  .key_index = VAR_3,
 };

 if (VAR_4)
  FUNC_0(VAR_7.mac, VAR_4, VAR_1);

 return FUNC_2(VAR_6, VAR_0, VAR_2->mid,
   &VAR_7, sizeof(VAR_7));
}
