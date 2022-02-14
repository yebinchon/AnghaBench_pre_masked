
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int state; int mac_work; } ;
struct mt76x02_dev {TYPE_1__ mt76; int wdt_work; } ;
struct ieee80211_hw {struct mt76x02_dev* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (struct mt76x02_dev*) ;
 int FUNC_2 (struct mt76x02_dev*) ;
 int FUNC_3 (struct mt76x02_dev*) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static int
FUNC_5(struct ieee80211_hw *VAR_3)
{
 struct mt76x02_dev *VAR_4 = VAR_3->priv;
 int VAR_5;

 VAR_5 = FUNC_2(VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_3(VAR_4);
 if (VAR_5)
  return VAR_5;

 FUNC_0(FUNC_1(VAR_4), &VAR_4->mt76.mac_work,
         VAR_1);
 FUNC_0(FUNC_1(VAR_4), &VAR_4->wdt_work,
         VAR_2);

 FUNC_4(VAR_0, &VAR_4->mt76.state);
 return 0;
}
