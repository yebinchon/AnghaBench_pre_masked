
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wmi_add_cipher_key_cmd {int key_usage; int key_len; int mac; int key; int key_index; } ;
struct wil6210_vif {int mid; } ;
struct wil6210_priv {int dummy; } ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,void const*,int) ;
 struct wil6210_priv* FUNC_1 (struct wil6210_vif*) ;
 int FUNC_2 (struct wil6210_priv*,int ,int ,struct wmi_add_cipher_key_cmd*,int) ;

int FUNC_3(struct wil6210_vif *VAR_4, u8 VAR_5,
         const void *VAR_6, int VAR_7, const void *VAR_8,
         int VAR_9)
{
 struct wil6210_priv *VAR_10 = FUNC_1(VAR_4);
 struct wmi_add_cipher_key_cmd VAR_11 = {
  .key_index = VAR_5,
  .key_usage = VAR_9,
  .key_len = VAR_7,
 };

 if (VAR_7 > sizeof(VAR_11.key))
  return -VAR_0;


 if ((VAR_7 == 0 || !VAR_8) &&
     VAR_9 != VAR_2)
  return -VAR_0;

 if (VAR_8)
  FUNC_0(VAR_11.key, VAR_8, VAR_7);

 if (VAR_6)
  FUNC_0(VAR_11.mac, VAR_6, VAR_3);

 return FUNC_2(VAR_10, VAR_1, VAR_4->mid,
   &VAR_11, sizeof(VAR_11));
}
