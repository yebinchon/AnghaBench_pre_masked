
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath_common {scalar_t__ macaddr; } ;
struct ath5k_hw {scalar_t__ ah_version; } ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ath5k_hw*,int ,int ) ;
 int FUNC_1 (struct ath5k_hw*,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (struct ath5k_hw*,int ,char*,int) ;
 int VAR_13 ;
 int VAR_14 ;





 struct ath_common* FUNC_3 (struct ath5k_hw*) ;
 int FUNC_4 (struct ath5k_hw*,int ) ;
 int FUNC_5 (struct ath5k_hw*,int,int ) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;

int
FUNC_8(struct ath5k_hw *VAR_15, enum nl80211_iftype VAR_16)
{
 struct ath_common *VAR_17 = FUNC_3(VAR_15);
 u32 VAR_18, VAR_19, VAR_20, VAR_21;

 FUNC_2(VAR_15, VAR_13, "mode %d\n", VAR_16);


 VAR_18 = FUNC_4(VAR_15, VAR_7) & 0xffff0000;
 VAR_18 &= ~(VAR_8 | VAR_9
   | VAR_10
   | (VAR_15->ah_version == VAR_0 ?
   (VAR_12 | VAR_11) : 0));

 VAR_19 = 0;

 switch (VAR_16) {
 case 132:
  VAR_18 |= VAR_8 | VAR_10;
  VAR_19 |= VAR_2;
  if (VAR_15->ah_version == VAR_0)
   VAR_18 |= VAR_11;
  else
   FUNC_1(VAR_15, VAR_4, VAR_5);
  break;

 case 131:
 case 130:
  VAR_18 |= VAR_9 | VAR_10;
  VAR_19 |= VAR_3;
  if (VAR_15->ah_version == VAR_0)
   VAR_18 |= VAR_11;
  else
   FUNC_0(VAR_15, VAR_4, VAR_5);
  break;

 case 128:
  VAR_18 |= VAR_10
   | (VAR_15->ah_version == VAR_0 ?
    VAR_12 : 0);

 case 129:
  VAR_18 |= VAR_10
   | (VAR_15->ah_version == VAR_0 ?
    VAR_11 : 0);
  break;

 default:
  return -VAR_14;
 }




 VAR_20 = FUNC_7(VAR_17->macaddr);
 VAR_21 = FUNC_6(VAR_17->macaddr + 4);
 FUNC_5(VAR_15, VAR_20, VAR_6);
 FUNC_5(VAR_15, VAR_18 | VAR_21, VAR_7);




 if (VAR_15->ah_version == VAR_0)
  FUNC_5(VAR_15, VAR_19, VAR_1);

 return 0;
}
