
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int* data; } ;
struct TYPE_4__ {TYPE_1__ eeprom; } ;
struct mt7615_dev {TYPE_2__ mt76; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static inline bool
FUNC_0(struct mt7615_dev *VAR_4, enum nl80211_band VAR_5)
{
 u8 *VAR_6 = VAR_4->mt76.eeprom.data;

 if (VAR_5 == VAR_3)
  return !(VAR_6[VAR_0 + 1] & VAR_2);
 else
  return !(VAR_6[VAR_0 + 1] & VAR_1);
}
