
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wiphy {int dummy; } ;
struct net_device {int dummy; } ;
struct mwifiex_private {int dummy; } ;
struct mwifiex_ds_encrypt_key {int is_igtk_def_key; int mac_addr; int key_index; int key_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mwifiex_ds_encrypt_key*,int ,int) ;
 struct mwifiex_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct mwifiex_private*,int ,int ,int,struct mwifiex_ds_encrypt_key*,int) ;
 int FUNC_4 (struct wiphy*,char*,int ) ;

__attribute__((used)) static int
FUNC_5(struct wiphy *VAR_3,
          struct net_device *VAR_4,
          u8 VAR_5)
{
 struct mwifiex_private *VAR_6 = FUNC_2(VAR_4);
 struct mwifiex_ds_encrypt_key VAR_7;

 FUNC_4(VAR_3, "set default mgmt key, key index=%d\n", VAR_5);

 FUNC_1(&VAR_7, 0, sizeof(struct mwifiex_ds_encrypt_key));
 VAR_7.key_len = VAR_2;
 VAR_7.key_index = VAR_5;
 VAR_7.is_igtk_def_key = 1;
 FUNC_0(VAR_7.mac_addr);

 return FUNC_3(VAR_6, VAR_1,
    VAR_0, 1, &VAR_7, 1);
}
