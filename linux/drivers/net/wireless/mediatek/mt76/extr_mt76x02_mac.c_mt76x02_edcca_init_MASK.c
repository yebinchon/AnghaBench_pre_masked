
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {struct ieee80211_channel* chan; } ;
struct TYPE_4__ {TYPE_1__ chandef; } ;
struct mt76x02_dev {int ed_monitor_learning; int ed_time; TYPE_2__ mt76; scalar_t__ ed_monitor; scalar_t__ ed_silent; scalar_t__ ed_trigger; } ;
struct ieee80211_channel {scalar_t__ band; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_2 (struct mt76x02_dev*) ;
 int FUNC_3 () ;
 int FUNC_4 (struct mt76x02_dev*,int ,int ) ;
 int FUNC_5 (struct mt76x02_dev*,int ,int ,int) ;
 int FUNC_6 (struct mt76x02_dev*,int ) ;
 int FUNC_7 (struct mt76x02_dev*,int ,int ) ;
 int FUNC_8 (struct mt76x02_dev*,int ,int) ;
 int FUNC_9 (struct mt76x02_dev*,int) ;

void FUNC_10(struct mt76x02_dev *VAR_9)
{
 VAR_9->ed_trigger = 0;
 VAR_9->ed_silent = 0;

 if (VAR_9->ed_monitor) {
  struct ieee80211_channel *VAR_10 = VAR_9->mt76.chandef.chan;
  u8 VAR_11 = VAR_10->band == VAR_8 ? 0x0e : 0x20;

  FUNC_4(VAR_9, VAR_7, VAR_6);
  FUNC_7(VAR_9, VAR_2, VAR_3);
  FUNC_5(VAR_9, FUNC_1(VAR_0, 2), FUNC_0(15, 0),
    VAR_11 << 8 | VAR_11);
  FUNC_7(VAR_9, VAR_4, VAR_5);
 } else {
  FUNC_7(VAR_9, VAR_7, VAR_6);
  FUNC_4(VAR_9, VAR_2, VAR_3);
  if (FUNC_2(VAR_9)) {
   FUNC_8(VAR_9, FUNC_1(VAR_0, 2), 0x00007070);
   FUNC_7(VAR_9, VAR_4,
     VAR_5);
  } else {
   FUNC_8(VAR_9, FUNC_1(VAR_0, 2), 0x003a6464);
   FUNC_4(VAR_9, VAR_4,
       VAR_5);
  }
 }
 FUNC_9(VAR_9, 1);
 VAR_9->ed_monitor_learning = 1;


 FUNC_6(VAR_9, VAR_1);
 VAR_9->ed_time = FUNC_3();
}
