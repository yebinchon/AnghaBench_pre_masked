
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_txq {int ac; int sta; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct ieee80211_txq *VAR_1)
{
 if (!VAR_1->sta)
  return VAR_0;

 return VAR_1->ac;
}
