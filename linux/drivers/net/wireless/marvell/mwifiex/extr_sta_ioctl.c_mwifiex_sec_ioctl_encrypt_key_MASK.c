
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mwifiex_private {int dummy; } ;
struct mwifiex_ds_encrypt_key {scalar_t__ key_len; scalar_t__ is_wapi_key; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct mwifiex_private*,struct mwifiex_ds_encrypt_key*) ;
 int FUNC_1 (struct mwifiex_private*,struct mwifiex_ds_encrypt_key*) ;
 int FUNC_2 (struct mwifiex_private*,struct mwifiex_ds_encrypt_key*) ;

__attribute__((used)) static int
FUNC_3(struct mwifiex_private *VAR_1,
         struct mwifiex_ds_encrypt_key *VAR_2)
{
 int VAR_3;

 if (VAR_2->is_wapi_key)
  VAR_3 = FUNC_0(VAR_1, VAR_2);
 else if (VAR_2->key_len > VAR_0)
  VAR_3 = FUNC_2(VAR_1, VAR_2);
 else
  VAR_3 = FUNC_1(VAR_1, VAR_2);
 return VAR_3;
}
