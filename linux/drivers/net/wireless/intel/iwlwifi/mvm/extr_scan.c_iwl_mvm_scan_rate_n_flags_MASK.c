
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iwl_mvm {int scan_last_antenna_idx; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;
typedef int __le32 ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct iwl_mvm*,int *) ;

__attribute__((used)) static inline __le32
FUNC_3(struct iwl_mvm *VAR_5, enum nl80211_band VAR_6,
     bool VAR_7)
{
 u32 VAR_8;

 FUNC_2(VAR_5, &VAR_5->scan_last_antenna_idx);
 VAR_8 = FUNC_0(VAR_5->scan_last_antenna_idx) << VAR_3;

 if (VAR_6 == VAR_2 && !VAR_7)
  return FUNC_1(VAR_0 | VAR_4 |
       VAR_8);
 else
  return FUNC_1(VAR_1 | VAR_8);
}
