
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
typedef int u8 ;
struct mlme_ext_priv {int TSFValue; } ;
struct ieee80211_hdr_3addr {int dummy; } ;
typedef int __le32 ;


 int FUNC_0 (int ) ;

void FUNC_1(struct mlme_ext_priv *VAR_0, u8 *VAR_1, uint VAR_2)
{
 u8 *VAR_3;
 __le32 *VAR_4;

 VAR_3 = VAR_1 + sizeof(struct ieee80211_hdr_3addr);
 VAR_4 = (__le32 *)VAR_3;

 VAR_0->TSFValue = FUNC_0(*(VAR_4+1));

 VAR_0->TSFValue = VAR_0->TSFValue << 32;

 VAR_0->TSFValue |= FUNC_0(*VAR_4);
}
