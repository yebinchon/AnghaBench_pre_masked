
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_tx_rate {int flags; int idx; } ;
struct ieee80211_tx_info {scalar_t__ band; } ;
struct ar9170 {int dummy; } ;
typedef int __le32 ;


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
 scalar_t__ VAR_16 ;
 int FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (int ,unsigned int,int) ;
 int FUNC_2 (struct ar9170*,struct ieee80211_tx_info*,struct ieee80211_tx_rate*,unsigned int*,unsigned int*,unsigned int*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static __le32 FUNC_4(struct ar9170 *VAR_17,
 struct ieee80211_tx_info *VAR_18, struct ieee80211_tx_rate *VAR_19)
{
 unsigned int VAR_20 = 0, VAR_21 = 0, VAR_22 = 0;
 __le32 VAR_23;

 VAR_23 = FUNC_3(0);

 if (VAR_19->flags & VAR_12)
  VAR_23 |= FUNC_3(VAR_0 <<
   VAR_2);

 if (VAR_19->flags & VAR_13)
  VAR_23 |= FUNC_3(VAR_1 <<
   VAR_2);

 if (VAR_19->flags & VAR_15)
  VAR_23 |= FUNC_3(VAR_8);

 if (VAR_19->flags & VAR_14) {
  FUNC_1(VAR_3, VAR_22, VAR_19->idx);


  VAR_23 |= FUNC_3((VAR_19->idx & 0x7) <<
   VAR_10);

  VAR_23 |= FUNC_3(VAR_5);







 } else {
  if (VAR_18->band == VAR_16) {
   if (VAR_19->idx <= VAR_7)
    VAR_23 |= FUNC_3(VAR_4);
   else
    VAR_23 |= FUNC_3(VAR_6);
  } else {
   VAR_23 |= FUNC_3(VAR_6);
  }







 }
 FUNC_2(VAR_17, VAR_18, VAR_19,
        &VAR_22, &VAR_20, &VAR_21);

 VAR_23 |= FUNC_3(FUNC_0(VAR_3, VAR_22));
 VAR_23 |= FUNC_3(FUNC_0(VAR_11, VAR_20));
 VAR_23 |= FUNC_3(FUNC_0(VAR_9, VAR_21));
 return VAR_23;
}
