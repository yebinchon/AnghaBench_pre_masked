
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
typedef int u8 ;
struct rtw_ieee802_11_elems {int* ssid; int ssid_len; int* supp_rates; int supp_rates_len; int* fh_params; int fh_params_len; int* ds_params; int ds_params_len; int* cf_params; int cf_params_len; int* tim; int tim_len; int* ibss_params; int ibss_params_len; int* challenge; int challenge_len; int* erp_info; int erp_info_len; int* ext_supp_rates; int ext_supp_rates_len; int* rsn_ie; int rsn_ie_len; int* power_cap; int power_cap_len; int* supp_channels; int supp_channels_len; int* mdie; int mdie_len; int* ftie; int ftie_len; int* timeout_int; int timeout_int_len; int* ht_capabilities; int ht_capabilities_len; int* ht_operation; int ht_operation_len; int* vht_capabilities; int vht_capabilities_len; int* vht_operation; int vht_operation_len; int* vht_op_mode_notify; int vht_op_mode_notify_len; } ;
typedef int ParseRes ;


 int FUNC_0 (char*,int,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct rtw_ieee802_11_elems*,int ,int) ;
 int FUNC_2 (int*,int,struct rtw_ieee802_11_elems*,int) ;

ParseRes FUNC_3(u8 *VAR_3, uint VAR_4,
    struct rtw_ieee802_11_elems *VAR_5,
    int VAR_6)
{
 uint VAR_7 = VAR_4;
 u8 *VAR_8 = VAR_3;
 int VAR_9 = 0;

 FUNC_1(VAR_5, 0, sizeof(*VAR_5));

 while (VAR_7 >= 2) {
  u8 VAR_10, VAR_11;

  VAR_10 = *VAR_8++;
  VAR_11 = *VAR_8++;
  VAR_7 -= 2;

  if (VAR_11 > VAR_7) {
   if (VAR_6) {
    FUNC_0("IEEE 802.11 element "
        "parse failed (id =%d elen =%d "
        "left =%lu)\n",
        VAR_10, VAR_11, (unsigned long) VAR_7);
   }
   return VAR_0;
  }

  switch (VAR_10) {
  case 136:
   VAR_5->ssid = VAR_8;
   VAR_5->ssid_len = VAR_11;
   break;
  case 134:
   VAR_5->supp_rates = VAR_8;
   VAR_5->supp_rates_len = VAR_11;
   break;
  case 143:
   VAR_5->fh_params = VAR_8;
   VAR_5->fh_params_len = VAR_11;
   break;
  case 147:
   VAR_5->ds_params = VAR_8;
   VAR_5->ds_params_len = VAR_11;
   break;
  case 149:
   VAR_5->cf_params = VAR_8;
   VAR_5->cf_params_len = VAR_11;
   break;
  case 133:
   VAR_5->tim = VAR_8;
   VAR_5->tim_len = VAR_11;
   break;
  case 140:
   VAR_5->ibss_params = VAR_8;
   VAR_5->ibss_params_len = VAR_11;
   break;
  case 148:
   VAR_5->challenge = VAR_8;
   VAR_5->challenge_len = VAR_11;
   break;
  case 146:
   VAR_5->erp_info = VAR_8;
   VAR_5->erp_info_len = VAR_11;
   break;
  case 145:
   VAR_5->ext_supp_rates = VAR_8;
   VAR_5->ext_supp_rates_len = VAR_11;
   break;
  case 131:
   if (FUNC_2(VAR_8, VAR_11,
            VAR_5,
            VAR_6))
    VAR_9++;
   break;
  case 137:
   VAR_5->rsn_ie = VAR_8;
   VAR_5->rsn_ie_len = VAR_11;
   break;
  case 138:
   VAR_5->power_cap = VAR_8;
   VAR_5->power_cap_len = VAR_11;
   break;
  case 135:
   VAR_5->supp_channels = VAR_8;
   VAR_5->supp_channels_len = VAR_11;
   break;
  case 139:
   VAR_5->mdie = VAR_8;
   VAR_5->mdie_len = VAR_11;
   break;
  case 144:
   VAR_5->ftie = VAR_8;
   VAR_5->ftie_len = VAR_11;
   break;
  case 132:
   VAR_5->timeout_int = VAR_8;
   VAR_5->timeout_int_len = VAR_11;
   break;
  case 142:
   VAR_5->ht_capabilities = VAR_8;
   VAR_5->ht_capabilities_len = VAR_11;
   break;
  case 141:
   VAR_5->ht_operation = VAR_8;
   VAR_5->ht_operation_len = VAR_11;
   break;
  case 130:
   VAR_5->vht_capabilities = VAR_8;
   VAR_5->vht_capabilities_len = VAR_11;
   break;
  case 129:
   VAR_5->vht_operation = VAR_8;
   VAR_5->vht_operation_len = VAR_11;
   break;
  case 128:
   VAR_5->vht_op_mode_notify = VAR_8;
   VAR_5->vht_op_mode_notify_len = VAR_11;
   break;
  default:
   VAR_9++;
   if (!VAR_6)
    break;
   FUNC_0("IEEE 802.11 element parse "
       "ignored unknown element (id =%d elen =%d)\n",
       VAR_10, VAR_11);
   break;
  }

  VAR_7 -= VAR_11;
  VAR_8 += VAR_11;
 }

 if (VAR_7)
  return VAR_0;

 return VAR_9 ? VAR_2 : VAR_1;
}
