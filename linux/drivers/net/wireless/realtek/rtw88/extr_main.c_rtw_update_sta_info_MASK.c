
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct rtw_sta_info {int rssi_level; int bw_mode; int stbc_en; int ldpc_en; int rf_type; int wireless_set; int sgi_enable; int vht_enable; int ra_mask; int rate_id; struct ieee80211_sta* sta; } ;
struct rtw_hal {scalar_t__ current_band_type; } ;
struct TYPE_6__ {int nss; } ;
struct rtw_efuse {TYPE_2__ hw_cap; } ;
struct rtw_dev {struct rtw_hal hal; struct rtw_efuse efuse; } ;
struct TYPE_5__ {int* rx_mask; } ;
struct TYPE_8__ {int cap; scalar_t__ ht_supported; TYPE_1__ mcs; } ;
struct TYPE_7__ {int cap; scalar_t__ vht_supported; } ;
struct ieee80211_sta {int* supp_rates; int bandwidth; TYPE_4__ ht_cap; TYPE_3__ vht_cap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_0 (int,int,int) ;
 int FUNC_1 (struct ieee80211_sta*) ;
 int FUNC_2 (struct rtw_dev*,char*) ;
 int FUNC_3 (struct rtw_dev*,struct rtw_sta_info*) ;

void FUNC_4(struct rtw_dev *VAR_33, struct rtw_sta_info *VAR_34)
{
 struct ieee80211_sta *VAR_35 = VAR_34->sta;
 struct rtw_efuse *VAR_36 = &VAR_33->efuse;
 struct rtw_hal *VAR_37 = &VAR_33->hal;
 u8 VAR_38;
 u8 VAR_39;
 u8 VAR_40;
 u8 VAR_41;
 u8 VAR_42 = VAR_20;
 u8 VAR_43 = 0;
 u8 VAR_44 = 0;
 u8 VAR_45 = 1;
 u64 VAR_46 = 0;
 bool VAR_47 = 0;
 bool VAR_48 = 0;

 if (VAR_35->vht_cap.vht_supported) {
  VAR_47 = 1;
  VAR_46 |= FUNC_1(VAR_35);
  if (VAR_35->vht_cap.cap & VAR_7)
   VAR_43 = VAR_28;
  if (VAR_35->vht_cap.cap & VAR_6)
   VAR_44 = VAR_27;
  if (VAR_35->vht_cap.cap & VAR_8)
   VAR_48 = 1;
 } else if (VAR_35->ht_cap.ht_supported) {
  VAR_46 |= (VAR_35->ht_cap.mcs.rx_mask[VAR_10] << 20) |
      (VAR_35->ht_cap.mcs.rx_mask[VAR_9] << 12);
  if (VAR_35->ht_cap.cap & VAR_3)
   VAR_43 = VAR_1;
  if (VAR_35->ht_cap.cap & VAR_2)
   VAR_44 = VAR_0;
  if (VAR_35->ht_cap.cap & VAR_4 ||
      VAR_35->ht_cap.cap & VAR_5)
   VAR_48 = 1;
 }

 if (VAR_37->current_band_type == VAR_23) {
  VAR_46 |= (u64)VAR_35->supp_rates[VAR_10] << 4;
  if (VAR_35->vht_cap.vht_supported) {
   VAR_46 &= VAR_18 | VAR_17;
   VAR_39 = VAR_31 | VAR_32;
  } else if (VAR_35->ht_cap.ht_supported) {
   VAR_46 &= VAR_13 | VAR_16;
   VAR_39 = VAR_31 | VAR_30;
  } else {
   VAR_39 = VAR_31;
  }
 } else if (VAR_37->current_band_type == VAR_22) {
  VAR_46 |= VAR_35->supp_rates[VAR_9];
  if (VAR_35->vht_cap.vht_supported) {
   VAR_46 &= VAR_18 | VAR_12 |
       VAR_17;
   VAR_39 = VAR_29 | VAR_31 |
           VAR_30 | VAR_32;
  } else if (VAR_35->ht_cap.ht_supported) {
   VAR_46 &= VAR_13 | VAR_11 |
       VAR_15;
   VAR_39 = VAR_29 | VAR_31 |
           VAR_30;
  } else if (VAR_35->supp_rates[0] <= 0xf) {
   VAR_39 = VAR_29;
  } else {
   VAR_39 = VAR_29 | VAR_31;
  }
 } else {
  FUNC_2(VAR_33, "Unknown band type\n");
  VAR_39 = 0;
 }

 if (VAR_36->hw_cap.nss == 1) {
  VAR_46 &= VAR_19;
  VAR_46 &= VAR_14;
 }

 switch (VAR_35->bandwidth) {
 case 128:
  VAR_40 = VAR_26;
  break;
 case 129:
  VAR_40 = VAR_25;
  break;
 default:
  VAR_40 = VAR_24;
  break;
 }

 if (VAR_35->vht_cap.vht_supported && VAR_46 & 0xffc00000) {
  VAR_45 = 2;
  VAR_42 = VAR_21;
 } else if (VAR_35->ht_cap.ht_supported && VAR_46 & 0xfff00000) {
  VAR_45 = 2;
  VAR_42 = VAR_21;
 }

 VAR_41 = FUNC_0(VAR_39, VAR_40, VAR_45);

 if (VAR_39 != VAR_29) {
  VAR_38 = VAR_34->rssi_level;
  if (VAR_38 == 0)
   VAR_46 &= 0xffffffffffffffffULL;
  else if (VAR_38 == 1)
   VAR_46 &= 0xfffffffffffffff0ULL;
  else if (VAR_38 == 2)
   VAR_46 &= 0xffffffffffffefe0ULL;
  else if (VAR_38 == 3)
   VAR_46 &= 0xffffffffffffcfc0ULL;
  else if (VAR_38 == 4)
   VAR_46 &= 0xffffffffffff8f80ULL;
  else if (VAR_38 >= 5)
   VAR_46 &= 0xffffffffffff0f00ULL;
 }

 VAR_34->bw_mode = VAR_40;
 VAR_34->stbc_en = VAR_43;
 VAR_34->ldpc_en = VAR_44;
 VAR_34->rf_type = VAR_42;
 VAR_34->wireless_set = VAR_39;
 VAR_34->sgi_enable = VAR_48;
 VAR_34->vht_enable = VAR_47;
 VAR_34->ra_mask = VAR_46;
 VAR_34->rate_id = VAR_41;

 FUNC_3(VAR_33, VAR_34);
}
