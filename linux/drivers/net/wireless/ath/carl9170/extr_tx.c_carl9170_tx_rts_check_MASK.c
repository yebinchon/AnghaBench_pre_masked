
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_tx_rate {int flags; } ;
struct ar9170 {int erp_mode; } ;





 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static bool FUNC_1(struct ar9170 *VAR_1,
      struct ieee80211_tx_rate *VAR_2,
      bool VAR_3, bool VAR_4)
{
 switch (VAR_1->erp_mode) {
 case 130:
  if (VAR_3)
   break;


 case 129:
  if (!(VAR_2->flags & VAR_0))
   break;


 case 128:
  if (FUNC_0(!VAR_4))
   return 1;

 default:
  break;
 }

 return 0;
}
