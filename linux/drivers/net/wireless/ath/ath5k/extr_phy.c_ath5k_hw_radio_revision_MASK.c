
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct ath5k_hw {scalar_t__ ah_version; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;


 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (struct ath5k_hw*,int ) ;
 int FUNC_3 (struct ath5k_hw*,int,int ) ;
 int FUNC_4 (int,int) ;

u16
FUNC_5(struct ath5k_hw *VAR_3, enum nl80211_band VAR_4)
{
 unsigned int VAR_5;
 u32 VAR_6;
 u16 VAR_7;




 switch (VAR_4) {
 case 129:
  FUNC_3(VAR_3, VAR_1, FUNC_0(0));
  break;
 case 128:
  FUNC_3(VAR_3, VAR_2, FUNC_0(0));
  break;
 default:
  return 0;
 }

 FUNC_4(2000, 2500);


 FUNC_3(VAR_3, 0x00001c16, FUNC_0(0x34));

 for (VAR_5 = 0; VAR_5 < 8; VAR_5++)
  FUNC_3(VAR_3, 0x00010000, FUNC_0(0x20));

 if (VAR_3->ah_version == VAR_0) {
  VAR_6 = (FUNC_2(VAR_3, FUNC_0(256)) >> 28) & 0xf;
  VAR_7 = (u16)FUNC_1(VAR_6, 4) + 1;
 } else {
  VAR_6 = (FUNC_2(VAR_3, FUNC_0(0x100)) >> 24) & 0xff;
  VAR_7 = (u16)FUNC_1(((VAR_6 & 0xf0) >> 4) |
    ((VAR_6 & 0x0f) << 4), 8);
 }


 FUNC_3(VAR_3, VAR_2, FUNC_0(0));

 return VAR_7;
}
