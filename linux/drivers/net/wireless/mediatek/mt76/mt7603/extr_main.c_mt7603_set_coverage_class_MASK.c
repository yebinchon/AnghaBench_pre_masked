
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt7603_dev {int coverage_class; } ;
struct ieee80211_hw {struct mt7603_dev* priv; } ;
typedef int s16 ;


 int FUNC_0 (struct mt7603_dev*) ;

__attribute__((used)) static void
FUNC_1(struct ieee80211_hw *VAR_0, s16 VAR_1)
{
 struct mt7603_dev *VAR_2 = VAR_0->priv;

 VAR_2->coverage_class = VAR_1;
 FUNC_0(VAR_2);
}
