
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint ;
typedef scalar_t__ u8 ;
typedef int u32 ;
struct rtw_ieee80211_ht_cap {int ampdu_params_info; int supp_mcs_set; int cap_info; } ;
struct registry_priv {int bw_mode; int rx_stbc; int wifi_spec; } ;
struct ht_priv {int ht_option; int stbc_cap; scalar_t__ sgi_40m; scalar_t__ sgi_20m; } ;
struct mlme_priv {struct ht_priv htpriv; } ;
struct mlme_ext_priv {scalar_t__ cur_bwmode; int default_supported_mcs_set; } ;
struct ieee80211_ht_addt_info {int dummy; } ;
struct TYPE_2__ {scalar_t__ dot11PrivacyAlgrthm; } ;
struct adapter {int driver_rx_ampdu_factor; TYPE_1__ securitypriv; struct mlme_ext_priv mlmeextpriv; struct mlme_priv mlmepriv; struct registry_priv registrypriv; } ;
struct HT_info_element {int* infos; } ;
typedef enum HT_CAP_AMPDU_FACTOR { ____Placeholder_HT_CAP_AMPDU_FACTOR } HT_CAP_AMPDU_FACTOR ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;



 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ FUNC_3 (struct mlme_priv*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (struct rtw_ieee80211_ht_cap*,int ,int) ;
 unsigned char* FUNC_7 (scalar_t__*,int ,int*,int) ;
 int FUNC_8 (struct adapter*,int ,int*) ;
 int FUNC_9 (struct adapter*,int ,scalar_t__*) ;
 unsigned char* FUNC_10 (scalar_t__*,int ,int,unsigned char*,int*) ;
 int FUNC_11 (int ,int ) ;

unsigned int FUNC_12(struct adapter *VAR_24, u8 *VAR_25, u8 *VAR_26, uint VAR_27, uint *VAR_28, u8 VAR_29)
{
 u32 VAR_30, VAR_31;
 enum HT_CAP_AMPDU_FACTOR VAR_32;
 unsigned char *VAR_33, *VAR_34;
 struct rtw_ieee80211_ht_cap VAR_35;
 u8 VAR_36 = 0, VAR_37 = 0, VAR_38 = 0, VAR_39 = 0;
 struct registry_priv *VAR_40 = &VAR_24->registrypriv;
 struct mlme_priv *VAR_41 = &VAR_24->mlmepriv;
 struct ht_priv *VAR_42 = &VAR_41->htpriv;
 struct mlme_ext_priv *VAR_43 = &VAR_24->mlmeextpriv;

 VAR_42->ht_option = 0;

 VAR_31 = *VAR_28;

 FUNC_6(&VAR_35, 0, sizeof(struct rtw_ieee80211_ht_cap));

 VAR_35.cap_info = FUNC_4(VAR_7);

 if (VAR_42->sgi_20m)
  VAR_35.cap_info |= FUNC_4(VAR_10);


 if (VAR_25 == ((void*)0)) {

  if (FUNC_3(VAR_41, VAR_20)) {
   VAR_39 = VAR_24->mlmeextpriv.cur_bwmode;
   if (VAR_39 > VAR_1)
    VAR_39 = VAR_1;
  } else

   VAR_39 = VAR_1;
 } else {
  VAR_33 = FUNC_7(VAR_25, VAR_22, &VAR_30, VAR_27);
  if (VAR_33 && (VAR_30 == sizeof(struct ieee80211_ht_addt_info))) {
   struct HT_info_element *VAR_44 = (struct HT_info_element *)(VAR_33+2);
   if (VAR_44->infos[0] & FUNC_0(2)) {
    switch (VAR_44->infos[0] & 0x3) {
    case 1:
    case 3:
     VAR_39 = VAR_1;
     break;
    default:
     VAR_39 = VAR_0;
     break;
    }
   } else {
    VAR_39 = VAR_0;
   }
  }
 }


 if (VAR_29 > 14) {
  if ((VAR_40->bw_mode & 0xf0) > 0)
   VAR_36 = 1;
 } else {
  if ((VAR_40->bw_mode & 0x0f) > 0)
   VAR_36 = 1;
 }

 if ((VAR_36 == 1) && (VAR_39 == VAR_1)) {
  VAR_35.cap_info |= FUNC_4(VAR_13);
  if (VAR_42->sgi_40m)
   VAR_35.cap_info |= FUNC_4(VAR_11);
 }

 if (FUNC_2(VAR_42->stbc_cap, VAR_19))
  VAR_35.cap_info |= FUNC_4(VAR_14);


 VAR_35.cap_info |= FUNC_4(VAR_12);

 if (FUNC_2(VAR_42->stbc_cap, VAR_18)) {
  if ((VAR_29 <= 14 && VAR_40->rx_stbc == 0x1) ||
   (VAR_40->wifi_spec == 1)) {
   VAR_37 = 1;
   FUNC_1("declare supporting RX STBC\n");
  }
 }


 FUNC_5(VAR_35.supp_mcs_set, VAR_43->default_supported_mcs_set, 16);


 FUNC_9(VAR_24, VAR_5, (u8 *)(&VAR_38));

 switch (VAR_38) {
 case 130:
  if (VAR_37)
   VAR_35.cap_info |= FUNC_4(VAR_8);

  FUNC_11(VAR_35.supp_mcs_set, VAR_15);
  break;

 case 128:
 case 129:
 default:
  if (VAR_37)
   VAR_35.cap_info |= FUNC_4(VAR_9);







   FUNC_11(VAR_35.supp_mcs_set, VAR_16);

  break;
 }

 {
  u32 VAR_45, VAR_46;
  FUNC_8(VAR_24, VAR_3, &VAR_45);
  FUNC_8(VAR_24, VAR_2, &VAR_46);
 }

 if (VAR_24->driver_rx_ampdu_factor != 0xFF)
  VAR_32 =
    (enum HT_CAP_AMPDU_FACTOR)VAR_24->driver_rx_ampdu_factor;
 else
  FUNC_8(VAR_24, VAR_4,
        &VAR_32);


 VAR_35.ampdu_params_info = (VAR_32&0x03);

 if (VAR_24->securitypriv.dot11PrivacyAlgrthm == VAR_21)
  VAR_35.ampdu_params_info |= (VAR_6&(0x07<<2));
 else
  VAR_35.ampdu_params_info |= (VAR_6&0x00);

 VAR_34 = FUNC_10(VAR_26+VAR_31, VAR_23,
      sizeof(struct rtw_ieee80211_ht_cap), (unsigned char *)&VAR_35, VAR_28);

 VAR_42->ht_option = 1;

 if (VAR_25 != ((void*)0)) {
  VAR_33 = FUNC_7(VAR_25, VAR_22, &VAR_30, VAR_27);
  if (VAR_33 && (VAR_30 == sizeof(struct ieee80211_ht_addt_info))) {
   VAR_31 = *VAR_28;
   VAR_34 = FUNC_10(VAR_26+VAR_31, VAR_22, VAR_30, VAR_33+2, VAR_28);
  }
 }

 return VAR_42->ht_option;

}
