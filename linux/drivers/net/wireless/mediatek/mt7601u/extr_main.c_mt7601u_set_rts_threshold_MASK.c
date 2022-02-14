
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mt7601u_dev {int dummy; } ;
struct ieee80211_hw {struct mt7601u_dev* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mt7601u_dev*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct ieee80211_hw *VAR_2, u32 VAR_3)
{
 struct mt7601u_dev *VAR_4 = VAR_2->priv;

 FUNC_0(VAR_4, VAR_0, VAR_1, VAR_3);

 return 0;
}
