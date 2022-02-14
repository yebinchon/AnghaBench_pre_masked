
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rt2x00_dev {int rx; int conf_mutex; int default_ant; int flags; } ;
struct ieee80211_conf {int dummy; } ;
struct ieee80211_hw {struct ieee80211_conf conf; struct rt2x00_dev* priv; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct rt2x00_dev*,struct ieee80211_conf*,int ) ;
 int FUNC_3 (struct rt2x00_dev*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int *) ;

int FUNC_7(struct ieee80211_hw *VAR_1, u32 VAR_2)
{
 struct rt2x00_dev *VAR_3 = VAR_1->priv;
 struct ieee80211_conf *VAR_4 = &VAR_1->conf;





 if (!FUNC_6(VAR_0, &VAR_3->flags))
  return 0;
 FUNC_5(VAR_3->rx);


 FUNC_0(&VAR_3->conf_mutex);





 FUNC_2(VAR_3, VAR_4, VAR_2);
 FUNC_3(VAR_3, VAR_3->default_ant);

 FUNC_1(&VAR_3->conf_mutex);


 FUNC_4(VAR_3->rx);

 return 0;
}
