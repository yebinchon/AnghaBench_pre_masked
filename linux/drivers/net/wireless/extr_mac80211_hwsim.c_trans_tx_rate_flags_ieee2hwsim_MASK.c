
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ieee80211_tx_rate {int flags; } ;


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
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;

__attribute__((used)) static inline u16 FUNC_0(struct ieee80211_tx_rate *VAR_22)
{
 u16 VAR_23 = 0;

 if (VAR_22->flags & VAR_8)
  VAR_23 |= VAR_19;
 if (VAR_22->flags & VAR_7)
  VAR_23 |= VAR_18;
 if (VAR_22->flags & VAR_9)
  VAR_23 |= VAR_20;
 if (VAR_22->flags & VAR_5)
  VAR_23 |= VAR_16;
 if (VAR_22->flags & VAR_4)
  VAR_23 |= VAR_15;
 if (VAR_22->flags & VAR_1)
  VAR_23 |= VAR_12;
 if (VAR_22->flags & VAR_3)
  VAR_23 |= VAR_14;
 if (VAR_22->flags & VAR_6)
  VAR_23 |= VAR_17;
 if (VAR_22->flags & VAR_10)
  VAR_23 |= VAR_21;
 if (VAR_22->flags & VAR_2)
  VAR_23 |= VAR_13;
 if (VAR_22->flags & VAR_0)
  VAR_23 |= VAR_11;

 return VAR_23;
}
