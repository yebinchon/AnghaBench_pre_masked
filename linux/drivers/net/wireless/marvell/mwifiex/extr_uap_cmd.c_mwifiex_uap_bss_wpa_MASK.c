
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_10__ {int pairwise_cipher_wpa; int pairwise_cipher_wpa2; int group_cipher; int length; int passphrase; } ;
struct mwifiex_uap_bss_param {int key_mgmt_operation; int key_mgmt; TYPE_5__ wpa_cfg; } ;
struct mwifiex_ie_types_header {int dummy; } ;
struct TYPE_7__ {void* len; void* type; } ;
struct host_cmd_tlv_pwk_cipher {int cipher; void* proto; TYPE_2__ header; } ;
struct TYPE_9__ {void* len; void* type; } ;
struct host_cmd_tlv_passphrase {int passphrase; TYPE_4__ header; } ;
struct TYPE_8__ {void* len; void* type; } ;
struct host_cmd_tlv_gwk_cipher {int cipher; TYPE_3__ header; } ;
struct TYPE_6__ {void* len; void* type; } ;
struct host_cmd_tlv_akmp {void* key_mgmt; void* key_mgmt_operation; TYPE_1__ header; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_2(u8 **VAR_7, void *VAR_8, u16 *VAR_9)
{
 struct host_cmd_tlv_pwk_cipher *VAR_10;
 struct host_cmd_tlv_gwk_cipher *VAR_11;
 struct host_cmd_tlv_passphrase *VAR_12;
 struct host_cmd_tlv_akmp *VAR_13;
 struct mwifiex_uap_bss_param *VAR_14 = VAR_8;
 u16 VAR_15 = *VAR_9;
 u8 *VAR_16 = *VAR_7;

 VAR_13 = (struct host_cmd_tlv_akmp *)VAR_16;
 VAR_13->header.type = FUNC_0(VAR_4);
 VAR_13->header.len = FUNC_0(sizeof(struct host_cmd_tlv_akmp) -
     sizeof(struct mwifiex_ie_types_header));
 VAR_13->key_mgmt_operation = FUNC_0(VAR_14->key_mgmt_operation);
 VAR_13->key_mgmt = FUNC_0(VAR_14->key_mgmt);
 VAR_15 += sizeof(struct host_cmd_tlv_akmp);
 VAR_16 += sizeof(struct host_cmd_tlv_akmp);

 if (VAR_14->wpa_cfg.pairwise_cipher_wpa & VAR_6) {
  VAR_10 = (struct host_cmd_tlv_pwk_cipher *)VAR_16;
  VAR_10->header.type = FUNC_0(VAR_3);
  VAR_10->header.len =
   FUNC_0(sizeof(struct host_cmd_tlv_pwk_cipher) -
        sizeof(struct mwifiex_ie_types_header));
  VAR_10->proto = FUNC_0(VAR_0);
  VAR_10->cipher = VAR_14->wpa_cfg.pairwise_cipher_wpa;
  VAR_15 += sizeof(struct host_cmd_tlv_pwk_cipher);
  VAR_16 += sizeof(struct host_cmd_tlv_pwk_cipher);
 }

 if (VAR_14->wpa_cfg.pairwise_cipher_wpa2 & VAR_6) {
  VAR_10 = (struct host_cmd_tlv_pwk_cipher *)VAR_16;
  VAR_10->header.type = FUNC_0(VAR_3);
  VAR_10->header.len =
   FUNC_0(sizeof(struct host_cmd_tlv_pwk_cipher) -
        sizeof(struct mwifiex_ie_types_header));
  VAR_10->proto = FUNC_0(VAR_1);
  VAR_10->cipher = VAR_14->wpa_cfg.pairwise_cipher_wpa2;
  VAR_15 += sizeof(struct host_cmd_tlv_pwk_cipher);
  VAR_16 += sizeof(struct host_cmd_tlv_pwk_cipher);
 }

 if (VAR_14->wpa_cfg.group_cipher & VAR_6) {
  VAR_11 = (struct host_cmd_tlv_gwk_cipher *)VAR_16;
  VAR_11->header.type = FUNC_0(VAR_2);
  VAR_11->header.len =
   FUNC_0(sizeof(struct host_cmd_tlv_gwk_cipher) -
        sizeof(struct mwifiex_ie_types_header));
  VAR_11->cipher = VAR_14->wpa_cfg.group_cipher;
  VAR_15 += sizeof(struct host_cmd_tlv_gwk_cipher);
  VAR_16 += sizeof(struct host_cmd_tlv_gwk_cipher);
 }

 if (VAR_14->wpa_cfg.length) {
  VAR_12 = (struct host_cmd_tlv_passphrase *)VAR_16;
  VAR_12->header.type =
    FUNC_0(VAR_5);
  VAR_12->header.len = FUNC_0(VAR_14->wpa_cfg.length);
  FUNC_1(VAR_12->passphrase, VAR_14->wpa_cfg.passphrase,
         VAR_14->wpa_cfg.length);
  VAR_15 += sizeof(struct mwifiex_ie_types_header) +
       VAR_14->wpa_cfg.length;
  VAR_16 += sizeof(struct mwifiex_ie_types_header) +
    VAR_14->wpa_cfg.length;
 }

 *VAR_9 = VAR_15;
 *VAR_7 = VAR_16;

 return;
}
