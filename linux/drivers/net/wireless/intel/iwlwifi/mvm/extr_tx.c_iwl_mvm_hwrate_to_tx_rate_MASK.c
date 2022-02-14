
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ieee80211_tx_rate {int idx; int flags; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;


 int VAR_0 ;
 int VAR_1 ;
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
 int FUNC_0 (struct ieee80211_tx_rate*,int,int) ;
 int FUNC_1 (int,int) ;

void FUNC_2(u32 VAR_16,
          enum nl80211_band VAR_17,
          struct ieee80211_tx_rate *VAR_18)
{
 if (VAR_16 & VAR_7)
  VAR_18->flags |= VAR_3;
 switch (VAR_16 & VAR_9) {
 case 130:
  break;
 case 129:
  VAR_18->flags |= VAR_1;
  break;
 case 128:
  VAR_18->flags |= VAR_2;
  break;
 case 131:
  VAR_18->flags |= VAR_0;
  break;
 }
 if (VAR_16 & VAR_11)
  VAR_18->flags |= VAR_5;
 if (VAR_16 & VAR_10) {
  VAR_18->flags |= VAR_4;
  VAR_18->idx = VAR_16 & VAR_8;
 } else if (VAR_16 & VAR_12) {
  FUNC_0(
   VAR_18, VAR_16 & VAR_15,
   ((VAR_16 & VAR_13) >>
      VAR_14) + 1);
  VAR_18->flags |= VAR_6;
 } else {
  VAR_18->idx = FUNC_1(VAR_16,
            VAR_17);
 }
}
