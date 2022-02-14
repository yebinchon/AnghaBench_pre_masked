
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int tssi_dc; } ;
struct TYPE_4__ {struct ieee80211_channel* chan; } ;
struct TYPE_5__ {TYPE_1__ chandef; } ;
struct mt76x02_dev {TYPE_3__ cal; TYPE_2__ mt76; } ;
struct ieee80211_channel {scalar_t__ band; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct mt76x02_dev*,int ,int) ;
 int FUNC_4 (struct mt76x02_dev*,int ,int,int ,int) ;
 int FUNC_5 (struct mt76x02_dev*,int ) ;
 int FUNC_6 (struct mt76x02_dev*,int ,int) ;
 int FUNC_7 (struct mt76x02_dev*,int ,int) ;
 int FUNC_8 (struct mt76x02_dev*,int ,int) ;
 int FUNC_9 (struct mt76x02_dev*,int ,int,int) ;
 int FUNC_10 (int,int) ;

__attribute__((used)) static void FUNC_11(struct mt76x02_dev *VAR_5)
{
 struct ieee80211_channel *VAR_6 = VAR_5->mt76.chandef.chan;
 u32 VAR_7;

 if (VAR_6->band == VAR_3)
  FUNC_8(VAR_5, FUNC_2(0, 67), 0xf);


 FUNC_7(VAR_5, VAR_2, 0x60002237);
 FUNC_7(VAR_5, VAR_1, 0xffffffff);


 FUNC_6(VAR_5, FUNC_1(VAR_0, 4), FUNC_0(0));
 FUNC_10(500, 1000);
 FUNC_3(VAR_5, FUNC_1(VAR_0, 4), FUNC_0(0));

 VAR_7 = (VAR_6->band == VAR_3) ? 0x80055 : 0x80050;
 FUNC_7(VAR_5, FUNC_1(VAR_0, 34), VAR_7);


 FUNC_7(VAR_5, FUNC_1(VAR_4, 6), FUNC_0(31));

 FUNC_4(VAR_5, FUNC_1(VAR_0, 34), FUNC_0(4), 0, 200);
 VAR_5->cal.tssi_dc = FUNC_5(VAR_5, FUNC_1(VAR_0, 35)) & 0xff;


 FUNC_7(VAR_5, VAR_1, 0);

 FUNC_7(VAR_5, FUNC_1(VAR_4, 6), 0);

 FUNC_6(VAR_5, FUNC_1(VAR_0, 4), FUNC_0(0));
 FUNC_10(500, 1000);
 FUNC_3(VAR_5, FUNC_1(VAR_0, 4), FUNC_0(0));

 if (VAR_6->band == VAR_3)
  FUNC_9(VAR_5, FUNC_2(0, 67), 0xf, 0x4);
}
