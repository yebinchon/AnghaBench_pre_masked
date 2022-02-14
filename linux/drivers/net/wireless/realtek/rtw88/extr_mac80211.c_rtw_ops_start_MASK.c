
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtw_dev {int mutex; } ;
struct ieee80211_hw {struct rtw_dev* priv; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct rtw_dev*) ;

__attribute__((used)) static int FUNC_3(struct ieee80211_hw *VAR_0)
{
 struct rtw_dev *VAR_1 = VAR_0->priv;
 int VAR_2;

 FUNC_0(&VAR_1->mutex);
 VAR_2 = FUNC_2(VAR_1);
 FUNC_1(&VAR_1->mutex);

 return VAR_2;
}
