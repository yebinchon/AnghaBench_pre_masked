
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_3__ {struct ieee80211_channel* chan; } ;
struct TYPE_4__ {TYPE_1__ chandef; } ;
struct mt76x02_dev {TYPE_2__ mt76; } ;
struct ieee80211_channel {scalar_t__ band; } ;
typedef int s16 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct mt76x02_dev*,int ,int ) ;
 int FUNC_3 (struct mt76x02_dev*,int ,int ,int ,int) ;
 int FUNC_4 (struct mt76x02_dev*,int ) ;
 int FUNC_5 (struct mt76x02_dev*,int ,int) ;

__attribute__((used)) static int
FUNC_6(struct mt76x02_dev *VAR_3, s16 *VAR_4,
         u8 *VAR_5)
{
 struct ieee80211_channel *VAR_6 = VAR_3->mt76.chandef.chan;
 u32 VAR_7;

 VAR_7 = (VAR_6->band == VAR_2) ? 0x80055 : 0x80050;
 FUNC_5(VAR_3, FUNC_1(VAR_0, 34), VAR_7);

 if (!FUNC_3(VAR_3, FUNC_1(VAR_0, 34), FUNC_0(4), 0, 200)) {
  FUNC_2(VAR_3, FUNC_1(VAR_0, 34), FUNC_0(4));
  return -VAR_1;
 }

 *VAR_4 = FUNC_4(VAR_3, FUNC_1(VAR_0, 35)) & 0xff;
 if (VAR_6->band == VAR_2)
  *VAR_4 += 128;


 FUNC_5(VAR_3, FUNC_1(VAR_0, 34), 0x80041);
 VAR_5[0] = FUNC_4(VAR_3, FUNC_1(VAR_0, 35)) & 0xff;


 FUNC_5(VAR_3, FUNC_1(VAR_0, 34), 0x80042);
 VAR_5[1] = FUNC_4(VAR_3, FUNC_1(VAR_0, 35)) & 0xff;


 FUNC_5(VAR_3, FUNC_1(VAR_0, 34), 0x80043);
 VAR_5[2] = FUNC_4(VAR_3, FUNC_1(VAR_0, 35)) & 0xff;

 return 0;
}
