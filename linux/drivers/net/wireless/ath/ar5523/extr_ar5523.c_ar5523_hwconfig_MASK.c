
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ieee80211_hw {struct ar5523* priv; } ;
struct ar5523 {int mutex; } ;


 int VAR_0 ;
 int FUNC_0 (struct ar5523*,char*) ;
 int FUNC_1 (struct ar5523*) ;
 int FUNC_2 (struct ar5523*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct ieee80211_hw *VAR_1, u32 VAR_2)
{
 struct ar5523 *VAR_3 = VAR_1->priv;

 FUNC_0(VAR_3, "config called\n");
 FUNC_3(&VAR_3->mutex);
 if (VAR_2 & VAR_0) {
  FUNC_0(VAR_3, "Do channel switch\n");
  FUNC_1(VAR_3);
  FUNC_2(VAR_3);
 }
 FUNC_4(&VAR_3->mutex);
 return 0;
}
