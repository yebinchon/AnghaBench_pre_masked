
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath5k_ini_rfgain {scalar_t__ rfg_register; int * rfg_value; } ;
struct ath5k_hw {int ah_radio; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;


 int FUNC_0 (unsigned int) ;







 unsigned int FUNC_1 (struct ath5k_ini_rfgain*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct ath5k_hw*,int ,int ) ;
 struct ath5k_ini_rfgain* VAR_2 ;
 struct ath5k_ini_rfgain* VAR_3 ;
 struct ath5k_ini_rfgain* VAR_4 ;
 struct ath5k_ini_rfgain* VAR_5 ;
 struct ath5k_ini_rfgain* VAR_6 ;
 struct ath5k_ini_rfgain* VAR_7 ;

__attribute__((used)) static int
FUNC_3(struct ath5k_hw *VAR_8, enum nl80211_band VAR_9)
{
 const struct ath5k_ini_rfgain *VAR_10;
 unsigned int VAR_11, VAR_12, VAR_13;

 switch (VAR_8->ah_radio) {
 case 130:
  VAR_10 = VAR_5;
  VAR_12 = FUNC_1(VAR_5);
  break;
 case 129:
  VAR_10 = VAR_6;
  VAR_12 = FUNC_1(VAR_6);
  break;
 case 132:
  VAR_10 = VAR_3;
  VAR_12 = FUNC_1(VAR_3);
  break;
 case 134:
  VAR_10 = VAR_2;
  VAR_12 = FUNC_1(VAR_2);
  break;
 case 128:
  VAR_10 = VAR_7;
  VAR_12 = FUNC_1(VAR_7);
  break;
 case 133:
 case 131:
  VAR_10 = VAR_4;
  VAR_12 = FUNC_1(VAR_4);
  break;
 default:
  return -VAR_0;
 }

 VAR_13 = (VAR_9 == VAR_1) ? 1 : 0;

 for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++) {
  FUNC_0(VAR_11);
  FUNC_2(VAR_8, VAR_10[VAR_11].rfg_value[VAR_13],
   (u32)VAR_10[VAR_11].rfg_register);
 }

 return 0;
}
