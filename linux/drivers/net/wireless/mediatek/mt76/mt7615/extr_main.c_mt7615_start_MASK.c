
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mac_work; int state; int survey_time; } ;
struct mt7615_dev {TYPE_1__ mt76; } ;
struct ieee80211_hw {struct mt7615_dev* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (struct mt7615_dev*) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct ieee80211_hw *VAR_2)
{
 struct mt7615_dev *VAR_3 = VAR_2->priv;

 VAR_3->mt76.survey_time = FUNC_1();
 FUNC_3(VAR_1, &VAR_3->mt76.state);
 FUNC_0(FUNC_2(VAR_3), &VAR_3->mt76.mac_work,
         VAR_0);

 return 0;
}
