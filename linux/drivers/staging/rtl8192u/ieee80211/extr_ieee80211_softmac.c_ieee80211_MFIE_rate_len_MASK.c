
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_device {int modulation; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static unsigned int FUNC_0(struct ieee80211_device *VAR_4)
{
 unsigned int VAR_5 = 0;

 if (VAR_4->modulation & VAR_0)
  VAR_5 = VAR_1 + 2;

 if (VAR_4->modulation & VAR_2)
  VAR_5 += VAR_3 + 2;

 return VAR_5;
}
