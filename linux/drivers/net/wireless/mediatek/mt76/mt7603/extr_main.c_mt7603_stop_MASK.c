
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mac_work; int state; } ;
struct mt7603_dev {TYPE_1__ mt76; } ;
struct ieee80211_hw {struct mt7603_dev* priv; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct mt7603_dev*) ;

__attribute__((used)) static void
FUNC_3(struct ieee80211_hw *VAR_1)
{
 struct mt7603_dev *VAR_2 = VAR_1->priv;

 FUNC_1(VAR_0, &VAR_2->mt76.state);
 FUNC_0(&VAR_2->mt76.mac_work);
 FUNC_2(VAR_2);
}
