
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct ndis_80211_var_ie {unsigned int Length; int* data; } ;
struct ht_priv {int ht_option; int stbc_cap; int ldpc_cap; } ;
struct mlme_priv {struct ht_priv htpriv; } ;
struct TYPE_5__ {int AMPDU_para; int * MCS_rate; } ;
struct TYPE_6__ {int* HT_cap; TYPE_1__ HT_cap_element; } ;
struct TYPE_7__ {TYPE_2__ u; } ;
struct mlme_ext_info {int HT_caps_enable; TYPE_3__ HT_caps; } ;
struct mlme_ext_priv {int cur_bwmode; int * default_supported_mcs_set; struct mlme_ext_info mlmext_info; } ;
struct adapter {struct mlme_priv mlmepriv; struct mlme_ext_priv mlmeextpriv; } ;
struct TYPE_8__ {int wifi_spec; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int*) ;
 scalar_t__ FUNC_2 (int*) ;
 scalar_t__ FUNC_3 (int*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 int FUNC_4 (int,int) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_5 (int,int) ;
 int VAR_9 ;
 scalar_t__ FUNC_6 (struct mlme_priv*,int ) ;
 TYPE_4__* VAR_10 ;
 int FUNC_7 (struct adapter*,int ,int*) ;
 int FUNC_8 (int *,int ) ;

void FUNC_9(struct adapter *VAR_11, struct ndis_80211_var_ie *VAR_12)
{
 unsigned int VAR_13;
 u8 VAR_14;
 u8 VAR_15, VAR_16;
 u8 VAR_17 = 0, VAR_18 = 0;
 struct mlme_ext_priv *VAR_19 = &VAR_11->mlmeextpriv;
 struct mlme_ext_info *VAR_20 = &(VAR_19->mlmext_info);
 struct mlme_priv *VAR_21 = &VAR_11->mlmepriv;
 struct ht_priv *VAR_22 = &VAR_21->htpriv;

 if (!VAR_12)
  return;

 if (VAR_22->ht_option == 0)
  return;

 VAR_20->HT_caps_enable = 1;

 for (VAR_13 = 0; VAR_13 < (VAR_12->Length); VAR_13++) {
  if (VAR_13 != 2) {


   VAR_20->HT_caps.u.HT_cap[VAR_13] &= (VAR_12->data[VAR_13]);
  } else {

   if ((VAR_20->HT_caps.u.HT_cap_element.AMPDU_para & 0x3) > (VAR_12->data[VAR_13] & 0x3))
    VAR_15 = (VAR_12->data[VAR_13] & 0x3);
   else
    VAR_15 = (VAR_20->HT_caps.u.HT_cap_element.AMPDU_para & 0x3);

   if ((VAR_20->HT_caps.u.HT_cap_element.AMPDU_para & 0x1c) > (VAR_12->data[VAR_13] & 0x1c))
    VAR_16 = (VAR_20->HT_caps.u.HT_cap_element.AMPDU_para & 0x1c);
   else
    VAR_16 = (VAR_12->data[VAR_13] & 0x1c);

   VAR_20->HT_caps.u.HT_cap_element.AMPDU_para = VAR_15 | VAR_16;
  }
 }
 FUNC_7(VAR_11, VAR_1, (u8 *)(&VAR_14));


 for (VAR_13 = 0; VAR_13 < 16; VAR_13++)
  VAR_20->HT_caps.u.HT_cap_element.MCS_rate[VAR_13] &= VAR_19->default_supported_mcs_set[VAR_13];


 switch (VAR_14) {
 case 130:
 case 129:
  FUNC_8(VAR_20->HT_caps.u.HT_cap_element.MCS_rate, VAR_4);
  break;
 case 128:
 default:






  FUNC_8(VAR_20->HT_caps.u.HT_cap_element.MCS_rate, VAR_5);

 }

 if (FUNC_6(VAR_21, VAR_9)) {

  if (FUNC_5(VAR_22->stbc_cap, VAR_8) && FUNC_3(VAR_12->data)) {
   FUNC_4(VAR_18, VAR_8);
   FUNC_0("Enable HT Tx STBC !\n");
  }
  VAR_22->stbc_cap = VAR_18;
 } else {

  if (FUNC_5(VAR_22->ldpc_cap, VAR_3) && FUNC_1(VAR_12->data)) {
   FUNC_4(VAR_17, (VAR_3 | VAR_2));
   FUNC_0("Enable HT Tx LDPC!\n");
  }
  VAR_22->ldpc_cap = VAR_17;


  if (FUNC_5(VAR_22->stbc_cap, VAR_8) && FUNC_2(VAR_12->data)) {
   FUNC_4(VAR_18, (VAR_8 | VAR_7));
   FUNC_0("Enable HT Tx STBC!\n");
  }
  VAR_22->stbc_cap = VAR_18;
 }
}
