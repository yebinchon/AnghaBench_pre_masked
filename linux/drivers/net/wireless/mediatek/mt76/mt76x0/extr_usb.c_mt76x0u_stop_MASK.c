
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; int state; int mac_work; } ;
struct mt76x02_dev {TYPE_1__ mt76; int cal_work; } ;
struct ieee80211_hw {struct mt76x02_dev* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct mt76x02_dev*,int ,int ,int ,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct mt76x02_dev*) ;
 int FUNC_6 (struct mt76x02_dev*) ;
 scalar_t__ FUNC_7 (int ,int *) ;

__attribute__((used)) static void FUNC_8(struct ieee80211_hw *VAR_5)
{
 struct mt76x02_dev *VAR_6 = VAR_5->priv;

 FUNC_1(VAR_1, &VAR_6->mt76.state);
 FUNC_0(&VAR_6->cal_work);
 FUNC_0(&VAR_6->mt76.mac_work);
 FUNC_4(&VAR_6->mt76);
 FUNC_5(VAR_6);

 if (FUNC_7(VAR_0, &VAR_6->mt76.state))
  return;

 if (!FUNC_3(VAR_6, VAR_2, VAR_4, 0, 1000))
  FUNC_2(VAR_6->mt76.dev, "TX DMA did not stop\n");

 FUNC_6(VAR_6);

 if (!FUNC_3(VAR_6, VAR_2, VAR_3, 0, 1000))
  FUNC_2(VAR_6->mt76.dev, "RX DMA did not stop\n");
}
