
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int rcr; } ;
struct rtw_dev {int mutex; TYPE_1__ hal; } ;
struct ieee80211_hw {struct rtw_dev* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct rtw_dev*,int ,char*,unsigned int,unsigned int,int) ;
 int FUNC_3 (struct rtw_dev*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct ieee80211_hw *VAR_12,
         unsigned int VAR_13,
         unsigned int *VAR_14,
         u64 VAR_15)
{
 struct rtw_dev *VAR_16 = VAR_12->priv;

 *VAR_14 &= VAR_6 | VAR_9 | VAR_8 |
        VAR_7;

 FUNC_0(&VAR_16->mutex);

 if (VAR_13 & VAR_6) {
  if (*VAR_14 & VAR_6)
   VAR_16->hal.rcr |= VAR_3 | VAR_1;
  else
   VAR_16->hal.rcr &= ~(VAR_3 | VAR_1);
 }
 if (VAR_13 & VAR_8) {
  if (*VAR_14 & VAR_8)
   VAR_16->hal.rcr |= VAR_2;
  else
   VAR_16->hal.rcr &= ~(VAR_2);
 }
 if (VAR_13 & VAR_9) {
  if (*VAR_14 & VAR_9)
   VAR_16->hal.rcr |= VAR_0;
  else
   VAR_16->hal.rcr &= ~(VAR_0);
 }
 if (VAR_13 & VAR_7) {
  if (*VAR_14 & VAR_7)
   VAR_16->hal.rcr &= ~(VAR_4 | VAR_5);
  else
   VAR_16->hal.rcr |= VAR_4;
 }

 FUNC_2(VAR_16, VAR_11,
  "config rx filter, changed=0x%08x, new=0x%08x, rcr=0x%08x\n",
  VAR_13, *VAR_14, VAR_16->hal.rcr);

 FUNC_3(VAR_16, VAR_10, VAR_16->hal.rcr);

 FUNC_1(&VAR_16->mutex);
}
