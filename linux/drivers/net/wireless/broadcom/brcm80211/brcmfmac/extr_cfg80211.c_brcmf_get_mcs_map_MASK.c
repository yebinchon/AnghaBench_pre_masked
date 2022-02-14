
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
typedef enum ieee80211_vht_mcs_support { ____Placeholder_ieee80211_vht_mcs_support } ieee80211_vht_mcs_support ;
typedef int __le16 ;


 int FUNC_0 (int) ;

__attribute__((used)) static __le16 FUNC_1(u32 VAR_0, enum ieee80211_vht_mcs_support VAR_1)
{
 u16 VAR_2;
 int VAR_3;

 for (VAR_3 = 0, VAR_2 = 0xFFFF; VAR_3 < VAR_0; VAR_3++)
  VAR_2 = (VAR_2 << 2) | VAR_1;

 return FUNC_0(VAR_2);
}
