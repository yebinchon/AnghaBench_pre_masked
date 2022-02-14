
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct mac80211_hwsim_data {scalar_t__ ps; int hw; } ;
typedef enum ps_mode { ____Placeholder_ps_mode } ps_mode ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ,int ,struct mac80211_hwsim_data*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(void *VAR_9, u64 VAR_10)
{
 struct mac80211_hwsim_data *VAR_11 = VAR_9;
 enum ps_mode VAR_12;

 if (VAR_10 != VAR_3 && VAR_10 != VAR_4 && VAR_10 != VAR_2 &&
     VAR_10 != VAR_5)
  return -VAR_0;

 if (VAR_10 == VAR_5) {
  if (VAR_11->ps != VAR_4)
   return -VAR_0;
  FUNC_1();
  FUNC_0(
   VAR_11->hw, VAR_1,
   VAR_8, VAR_11);
  FUNC_2();
  return 0;
 }
 VAR_12 = VAR_11->ps;
 VAR_11->ps = VAR_10;

 FUNC_1();
 if (VAR_12 == VAR_3 && VAR_10 != VAR_3) {
  FUNC_0(
   VAR_11->hw, VAR_1,
   VAR_7, VAR_11);
 } else if (VAR_12 != VAR_3 && VAR_10 == VAR_3) {
  FUNC_0(
   VAR_11->hw, VAR_1,
   VAR_6, VAR_11);
 }
 FUNC_2();

 return 0;
}
