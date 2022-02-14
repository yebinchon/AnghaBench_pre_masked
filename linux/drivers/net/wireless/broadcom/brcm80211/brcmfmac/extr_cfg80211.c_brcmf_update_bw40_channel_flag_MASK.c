
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ieee80211_channel {int flags; } ;
struct brcmu_chan {scalar_t__ sb; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_0(struct ieee80211_channel *VAR_4,
        struct brcmu_chan *VAR_5)
{
 u32 VAR_6;

 VAR_6 = VAR_4->flags & VAR_1;
 if (VAR_5->sb == VAR_0) {
  if (VAR_6 == VAR_1)
   VAR_4->flags &= ~VAR_1;
  VAR_4->flags |= VAR_3;
 } else {




  VAR_4->flags &= ~VAR_1;
  if (VAR_6 == VAR_1)
   VAR_4->flags |= VAR_2;
 }
}
