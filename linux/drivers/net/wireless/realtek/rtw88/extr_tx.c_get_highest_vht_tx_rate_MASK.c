
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_6__ {int nss; } ;
struct rtw_efuse {TYPE_3__ hw_cap; } ;
struct rtw_dev {struct rtw_efuse efuse; } ;
struct TYPE_4__ {int tx_mcs_map; } ;
struct TYPE_5__ {TYPE_1__ vht_mcs; } ;
struct ieee80211_sta {TYPE_2__ vht_cap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int FUNC_0 (int ) ;

__attribute__((used)) static u8 FUNC_1(struct rtw_dev *VAR_6,
      struct ieee80211_sta *VAR_7)
{
 struct rtw_efuse *VAR_8 = &VAR_6->efuse;
 u8 VAR_9;
 u16 VAR_10;

 VAR_10 = FUNC_0(VAR_7->vht_cap.vht_mcs.tx_mcs_map);
 if (VAR_8->hw_cap.nss == 1) {
  switch (VAR_10 & 0x3) {
  case 130:
   VAR_9 = VAR_0;
   break;
  case 129:
   VAR_9 = VAR_1;
   break;
  default:
  case 128:
   VAR_9 = VAR_2;
   break;
  }
 } else if (VAR_8->hw_cap.nss >= 2) {
  switch ((VAR_10 & 0xc) >> 2) {
  case 130:
   VAR_9 = VAR_3;
   break;
  case 129:
   VAR_9 = VAR_4;
   break;
  default:
  case 128:
   VAR_9 = VAR_5;
   break;
  }
 } else {
  VAR_9 = VAR_2;
 }

 return VAR_9;
}
