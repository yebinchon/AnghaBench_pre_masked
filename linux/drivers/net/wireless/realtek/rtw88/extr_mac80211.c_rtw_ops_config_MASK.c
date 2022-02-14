
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rtw_dev {int mutex; } ;
struct TYPE_2__ {int flags; } ;
struct ieee80211_hw {TYPE_1__ conf; struct rtw_dev* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct rtw_dev*) ;
 int FUNC_3 (struct rtw_dev*,char*) ;
 int FUNC_4 (struct rtw_dev*) ;
 int FUNC_5 (struct rtw_dev*) ;

__attribute__((used)) static int FUNC_6(struct ieee80211_hw *VAR_3, u32 VAR_4)
{
 struct rtw_dev *VAR_5 = VAR_3->priv;
 int VAR_6 = 0;

 FUNC_0(&VAR_5->mutex);

 if (VAR_4 & VAR_1) {
  if (VAR_3->conf.flags & VAR_2) {
   FUNC_2(VAR_5);
  } else {
   VAR_6 = FUNC_4(VAR_5);
   if (VAR_6) {
    FUNC_3(VAR_5, "failed to leave idle state\n");
    goto out;
   }
  }
 }

 if (VAR_4 & VAR_0)
  FUNC_5(VAR_5);

out:
 FUNC_1(&VAR_5->mutex);
 return VAR_6;
}
