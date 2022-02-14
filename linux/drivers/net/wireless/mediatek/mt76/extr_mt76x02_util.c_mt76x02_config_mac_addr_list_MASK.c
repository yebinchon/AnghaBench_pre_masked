
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct wiphy {int n_addresses; TYPE_2__* addresses; } ;
struct TYPE_3__ {int macaddr; } ;
struct mt76x02_dev {TYPE_2__* macaddr_list; TYPE_1__ mt76; } ;
struct ieee80211_hw {struct wiphy* wiphy; } ;
struct TYPE_4__ {int* addr; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int*,int ,int ) ;
 struct ieee80211_hw* FUNC_3 (struct mt76x02_dev*) ;

void FUNC_4(struct mt76x02_dev *VAR_1)
{
 struct ieee80211_hw *VAR_2 = FUNC_3(VAR_1);
 struct wiphy *VAR_3 = VAR_2->wiphy;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1->macaddr_list); VAR_4++) {
  u8 *VAR_5 = VAR_1->macaddr_list[VAR_4].addr;

  FUNC_2(VAR_5, VAR_1->mt76.macaddr, VAR_0);

  if (!VAR_4)
   continue;

  VAR_5[0] |= FUNC_1(1);
  VAR_5[0] ^= ((VAR_4 - 1) << 2);
 }
 VAR_3->addresses = VAR_1->macaddr_list;
 VAR_3->n_addresses = FUNC_0(VAR_1->macaddr_list);
}
