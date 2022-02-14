
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct mt76x02_dev {int dummy; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mt76x02_dev*,int ,int ,int) ;
 int FUNC_1 (struct mt76x02_dev*,int ,int) ;
 scalar_t__ FUNC_2 (struct mt76x02_dev*,int) ;

void FUNC_3(struct mt76x02_dev *VAR_4,
          enum nl80211_band VAR_5, u8 VAR_6)
{
 u32 VAR_7, VAR_8;

 if (FUNC_2(VAR_4, VAR_5)) {
  VAR_7 = VAR_6 ? 0x000b0c01 : 0x00101101;
  VAR_8 = 0x00011414;
 } else {
  VAR_7 = VAR_6 ? 0x000b0b01 : 0x00101001;
  VAR_8 = 0x00021414;
 }
 FUNC_1(VAR_4, VAR_0, VAR_7);
 FUNC_1(VAR_4, VAR_1, VAR_8);

 FUNC_0(VAR_4, VAR_2, VAR_3, 15);
}
