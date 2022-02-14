
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_hw {struct ar9170* priv; } ;
struct ar9170 {int mutex; int beacon_iter; int hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct ar9170*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct ar9170*) ;
 int FUNC_3 (struct ar9170*,int ) ;
 int FUNC_4 (struct ar9170*,int ,int ) ;
 int FUNC_5 (struct ar9170*) ;
 int FUNC_6 (struct ar9170*,int ,int ) ;
 int FUNC_7 (struct ar9170*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(struct ieee80211_hw *VAR_3)
{
 struct ar9170 *VAR_4 = VAR_3->priv;

 FUNC_4(VAR_4, VAR_2, VAR_1);

 FUNC_8(VAR_4->hw);

 FUNC_9(&VAR_4->mutex);
 if (FUNC_0(VAR_4)) {
  FUNC_1(VAR_4->beacon_iter, ((void*)0));

  FUNC_3(VAR_4, 0);


  FUNC_6(VAR_4, VAR_0, 0);
  FUNC_5(VAR_4);
 }

 FUNC_7(VAR_4);
 FUNC_10(&VAR_4->mutex);

 FUNC_2(VAR_4);
}
