
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt2x00lib_conf {struct ieee80211_conf* conf; } ;
struct rt2x00_dev {int dummy; } ;
struct ieee80211_conf {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct rt2x00_dev*,struct rt2x00lib_conf*,int ) ;

__attribute__((used)) static void FUNC_1(struct rt2x00_dev *VAR_1)
{
 struct ieee80211_conf VAR_2 = { .flags = 0 };
 struct rt2x00lib_conf VAR_3 = { .conf = &VAR_2 };

 FUNC_0(VAR_1, &VAR_3, VAR_0);
}
