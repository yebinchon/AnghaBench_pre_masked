
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct ieee80211_vendor_ie {int* oui; int oui_type; } ;


 int const VAR_0 ;
 int const* FUNC_0 (int const,int const*,int) ;
 int const* FUNC_1 (int,int ,int const*,int) ;

__attribute__((used)) static const u8 *FUNC_2(const u8 *VAR_1, u16 VAR_2, const u8 *VAR_3,
           u16 VAR_4)
{
 struct ieee80211_vendor_ie *VAR_5;
 u32 VAR_6;


 if (VAR_4 < 2 || 2 + VAR_3[1] > VAR_4)
  return ((void*)0);

 if (VAR_3[0] != VAR_0)
  return FUNC_0(VAR_3[0], VAR_1, VAR_2);


 if (VAR_3[1] < 4)
  return ((void*)0);
 VAR_5 = (struct ieee80211_vendor_ie *)VAR_3;
 VAR_6 = VAR_5->oui[0] << 16 | VAR_5->oui[1] << 8 | VAR_5->oui[2];
 return FUNC_1(VAR_6, VAR_5->oui_type, VAR_1,
           VAR_2);
}
