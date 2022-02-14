
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rt2x00_dev {int dummy; } ;
struct ieee80211_hw {struct rt2x00_dev* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct rt2x00_dev*,int ) ;

__attribute__((used)) static int FUNC_2(struct ieee80211_hw *VAR_2)
{
 struct rt2x00_dev *VAR_3 = VAR_2->priv;
 u32 VAR_4;

 VAR_4 = FUNC_1(VAR_3, VAR_0);
 return FUNC_0(VAR_4, VAR_1);
}
