
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt2x00_dev {int dummy; } ;
struct ieee80211_channel {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rt2x00_dev*,struct ieee80211_channel*,int) ;
 int FUNC_1 (struct rt2x00_dev*,struct ieee80211_channel*,int) ;
 int FUNC_2 (struct rt2x00_dev*,struct ieee80211_channel*,int) ;
 scalar_t__ FUNC_3 (struct rt2x00_dev*,int ) ;

__attribute__((used)) static void FUNC_4(struct rt2x00_dev *VAR_3,
      struct ieee80211_channel *VAR_4,
      int VAR_5)
{
 if (FUNC_3(VAR_3, VAR_0) ||
     FUNC_3(VAR_3, VAR_1))
  FUNC_1(VAR_3, VAR_4, VAR_5);
 else if (FUNC_3(VAR_3, VAR_2))
  FUNC_2(VAR_3, VAR_4, VAR_5);
 else
  FUNC_0(VAR_3, VAR_4, VAR_5);
}
