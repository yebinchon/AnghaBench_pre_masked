
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct p54_common {unsigned int filter_flags; } ;
struct ieee80211_hw {struct p54_common* priv; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct p54_common*) ;
 int FUNC_1 (struct p54_common*) ;

__attribute__((used)) static void FUNC_2(struct ieee80211_hw *VAR_2,
     unsigned int VAR_3,
     unsigned int *VAR_4,
     u64 VAR_5)
{
 struct p54_common *VAR_6 = VAR_2->priv;

 *VAR_4 &= VAR_0 | VAR_1;

 VAR_6->filter_flags = *VAR_4;

 if (VAR_3 & VAR_1)
  FUNC_1(VAR_6);

 if (VAR_3 & VAR_0 || VAR_5)
  FUNC_0(VAR_6);
}
