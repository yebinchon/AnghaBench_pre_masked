
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_hw {int wiphy; struct cw1200_common* priv; } ;
struct cw1200_common {int pm_state; } ;


 int FUNC_0 (struct cw1200_common*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct cw1200_common*) ;
 int FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct ieee80211_hw *VAR_0)
{
 struct cw1200_common *VAR_1 = VAR_0->priv;
 int VAR_2;
 VAR_2 = FUNC_3(VAR_0);
 if (VAR_2) {
  FUNC_4("Cannot register device (%d).\n",
         VAR_2);



  return VAR_2;
 }

 FUNC_0(VAR_1);

 FUNC_5("Registered as '%s'\n", FUNC_6(VAR_0->wiphy));
 return 0;
}
