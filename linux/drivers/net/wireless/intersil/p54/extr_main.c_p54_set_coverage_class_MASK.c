
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p54_common {int conf_mutex; int coverage_class; } ;
struct ieee80211_hw {struct p54_common* priv; } ;
typedef int s16 ;


 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct p54_common*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_4(struct ieee80211_hw *VAR_1,
       s16 VAR_2)
{
 struct p54_common *VAR_3 = VAR_1->priv;

 FUNC_1(&VAR_3->conf_mutex);

 VAR_3->coverage_class = FUNC_0(VAR_0, VAR_2, 0, 31);
 FUNC_3(VAR_3);
 FUNC_2(&VAR_3->conf_mutex);
}
