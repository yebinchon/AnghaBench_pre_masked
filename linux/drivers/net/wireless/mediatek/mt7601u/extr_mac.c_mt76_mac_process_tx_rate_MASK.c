
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct ieee80211_tx_rate {int idx; int count; int flags; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(struct ieee80211_tx_rate *VAR_9, u16 VAR_10)
{
 u8 VAR_11 = FUNC_0(VAR_6, VAR_10);

 VAR_9->idx = 0;
 VAR_9->flags = 0;
 VAR_9->count = 1;

 switch (FUNC_0(VAR_7, VAR_10)) {
 case 128:
  VAR_9->idx = VAR_11 + 4;
  return;
 case 131:
  if (VAR_11 >= 8)
   VAR_11 -= 8;

  VAR_9->idx = VAR_11;
  return;
 case 129:
  VAR_9->flags |= VAR_1;

 case 130:
  VAR_9->flags |= VAR_2;
  VAR_9->idx = VAR_11;
  break;
 default:
  FUNC_1(1);
  return;
 }

 if (FUNC_0(VAR_5, VAR_10) == VAR_4)
  VAR_9->flags |= VAR_0;

 if (VAR_10 & VAR_8)
  VAR_9->flags |= VAR_3;
}
