
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u32 ;
struct il3945_tpt_entry {scalar_t__ min_rssi; int idx; } ;
typedef scalar_t__ s32 ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;


 size_t FUNC_0 (struct il3945_tpt_entry*) ;
 int FUNC_1 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;


 struct il3945_tpt_entry* VAR_2 ;
 struct il3945_tpt_entry* VAR_3 ;
 size_t FUNC_2 (size_t,size_t) ;

__attribute__((used)) static u8
FUNC_3(s32 VAR_4, enum nl80211_band VAR_5)
{
 u32 VAR_6 = 0;
 u32 VAR_7 = 0;
 struct il3945_tpt_entry *VAR_8 = ((void*)0);

 if (VAR_4 < VAR_1 || VAR_4 > VAR_0)
  VAR_4 = VAR_1;

 switch (VAR_5) {
 case 129:
  VAR_8 = VAR_3;
  VAR_7 = FUNC_0(VAR_3);
  break;
 case 128:
  VAR_8 = VAR_2;
  VAR_7 = FUNC_0(VAR_2);
  break;
 default:
  FUNC_1();
  break;
 }

 while (VAR_6 < VAR_7 && VAR_4 < VAR_8[VAR_6].min_rssi)
  VAR_6++;

 VAR_6 = FUNC_2(VAR_6, VAR_7 - 1);

 return VAR_8[VAR_6].idx;
}
