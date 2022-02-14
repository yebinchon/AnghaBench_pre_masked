
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ieee80211_channel {int dummy; } ;
struct ath5k_hw {int ah_ant_mode; int ah_def_ant; int ah_tx_ant; struct ieee80211_channel* ah_current_channel; } ;
 int FUNC_0 (struct ath5k_hw*,int ,int ) ;
 int FUNC_1 (struct ath5k_hw*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct ath5k_hw*,struct ieee80211_channel*) ;
 int FUNC_3 (struct ath5k_hw*,int) ;
 int FUNC_4 (struct ath5k_hw*,int) ;
 int FUNC_5 (struct ath5k_hw*,int,int) ;

void
FUNC_6(struct ath5k_hw *VAR_6, u8 VAR_7)
{
 struct ieee80211_channel *VAR_8 = VAR_6->ah_current_channel;
 bool VAR_9, VAR_10, VAR_11, VAR_12;
 bool VAR_13;
 int VAR_14;
 u8 VAR_15, VAR_16;
 u32 VAR_17 = 0;



 if (VAR_8 == ((void*)0)) {
  VAR_6->ah_ant_mode = VAR_7;
  return;
 }

 VAR_15 = VAR_6->ah_def_ant;

 VAR_14 = FUNC_2(VAR_6, VAR_8);

 switch (VAR_7) {
 case 133:
  VAR_16 = 0;
  VAR_9 = 0;
  VAR_10 = 0;
  VAR_11 = 0;
  VAR_13 = 0;
  VAR_12 = 1;
  break;
 case 132:
  VAR_15 = 1;
  VAR_16 = 1;
  VAR_9 = 1;
  VAR_10 = 0;
  VAR_11 = 1;
  VAR_13 = 1;
  VAR_12 = 0;
  break;
 case 131:
  VAR_15 = 2;
  VAR_16 = 2;
  VAR_9 = 1;
  VAR_10 = 0;
  VAR_11 = 1;
  VAR_13 = 1;
  VAR_12 = 0;
  break;
 case 128:
  VAR_15 = 1;
  VAR_16 = 0;
  VAR_9 = 1;
  VAR_10 = 1;
  VAR_11 = 1;
  VAR_13 = 1;
  VAR_12 = 1;
  break;
 case 130:
  VAR_16 = 1;
  VAR_9 = 0;
  VAR_10 = 0;
  VAR_11 = 1;
  VAR_13 = 0;
  VAR_12 = 0;
  break;
 case 129:
  VAR_16 = 1;
  VAR_9 = 1;
  VAR_10 = 0;
  VAR_11 = 1;
  VAR_13 = 0;
  VAR_12 = 1;
  break;
 case 134:
  VAR_15 = 1;
  VAR_16 = 2;
  VAR_9 = 0;
  VAR_10 = 0;
  VAR_11 = 0;
  VAR_13 = 0;
  VAR_12 = 0;
  break;
 default:
  return;
 }

 VAR_6->ah_tx_ant = VAR_16;
 VAR_6->ah_ant_mode = VAR_7;
 VAR_6->ah_def_ant = VAR_15;

 VAR_17 |= VAR_9 ? VAR_2 : 0;
 VAR_17 |= VAR_10 ? VAR_3 : 0;
 VAR_17 |= VAR_11 ? VAR_4 : 0;
 VAR_17 |= VAR_13 ? VAR_5 : 0;

 FUNC_0(VAR_6, VAR_0, VAR_1);

 if (VAR_17)
  FUNC_1(VAR_6, VAR_0, VAR_17);

 FUNC_3(VAR_6, VAR_14);


 FUNC_5(VAR_6, VAR_14, VAR_12);
 FUNC_4(VAR_6, VAR_15);
}
