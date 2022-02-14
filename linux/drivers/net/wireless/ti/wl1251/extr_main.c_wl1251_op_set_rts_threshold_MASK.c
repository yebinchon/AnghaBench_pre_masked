
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct wl1251 {int mutex; } ;
struct ieee80211_hw {struct wl1251* priv; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct wl1251*,int ) ;
 int FUNC_3 (struct wl1251*) ;
 int FUNC_4 (struct wl1251*) ;
 int FUNC_5 (char*,int) ;

__attribute__((used)) static int FUNC_6(struct ieee80211_hw *VAR_0, u32 VAR_1)
{
 struct wl1251 *VAR_2 = VAR_0->priv;
 int VAR_3;

 FUNC_0(&VAR_2->mutex);

 VAR_3 = FUNC_4(VAR_2);
 if (VAR_3 < 0)
  goto out;

 VAR_3 = FUNC_2(VAR_2, (u16) VAR_1);
 if (VAR_3 < 0)
  FUNC_5("wl1251_op_set_rts_threshold failed: %d", VAR_3);

 FUNC_3(VAR_2);

out:
 FUNC_1(&VAR_2->mutex);

 return VAR_3;
}
