
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mwifiex_private {int dummy; } ;
struct mwifiex_ds_encrypt_key {int key_len; int is_igtk_key; int is_current_wep_key; int pn_len; int is_rx_seq_valid; int key_disable; int mac_addr; int pn; int key_material; int key_index; } ;
struct key_params {scalar_t__ cipher; int seq_len; int const* seq; } ;
typedef int encrypt_key ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int const*,int) ;
 int FUNC_1 (struct mwifiex_ds_encrypt_key*,int ,int) ;
 int FUNC_2 (struct mwifiex_private*,struct mwifiex_ds_encrypt_key*) ;

int FUNC_3(struct mwifiex_private *VAR_2, struct key_params *VAR_3,
         const u8 *VAR_4, int VAR_5, u8 VAR_6,
         const u8 *VAR_7, int VAR_8)
{
 struct mwifiex_ds_encrypt_key VAR_9;

 FUNC_1(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.key_len = VAR_5;
 VAR_9.key_index = VAR_6;

 if (VAR_3 && VAR_3->cipher == VAR_1)
  VAR_9.is_igtk_key = 1;

 if (!VAR_8) {
  if (VAR_5)
   FUNC_0(VAR_9.key_material, VAR_4, VAR_5);
  else
   VAR_9.is_current_wep_key = 1;

  if (VAR_7)
   FUNC_0(VAR_9.mac_addr, VAR_7, VAR_0);
  if (VAR_3 && VAR_3->seq && VAR_3->seq_len) {
   FUNC_0(VAR_9.pn, VAR_3->seq, VAR_3->seq_len);
   VAR_9.pn_len = VAR_3->seq_len;
   VAR_9.is_rx_seq_valid = 1;
  }
 } else {
  VAR_9.key_disable = 1;
  if (VAR_7)
   FUNC_0(VAR_9.mac_addr, VAR_7, VAR_0);
 }

 return FUNC_2(VAR_2, &VAR_9);
}
