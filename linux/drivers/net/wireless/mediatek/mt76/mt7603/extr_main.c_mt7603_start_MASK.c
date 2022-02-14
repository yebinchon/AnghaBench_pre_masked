
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int work; } ;
struct TYPE_4__ {TYPE_1__ mac_work; int state; int survey_time; } ;
struct mt7603_dev {TYPE_2__ mt76; } ;
struct ieee80211_hw {struct mt7603_dev* priv; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct mt7603_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static int
FUNC_4(struct ieee80211_hw *VAR_1)
{
 struct mt7603_dev *VAR_2 = VAR_1->priv;

 FUNC_1(VAR_2);
 VAR_2->mt76.survey_time = FUNC_0();
 FUNC_3(VAR_0, &VAR_2->mt76.state);
 FUNC_2(&VAR_2->mt76.mac_work.work);

 return 0;
}
