
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct p54s_priv {scalar_t__ fw_state; int mutex; TYPE_1__* spi; int fw_comp; } ;
struct ieee80211_hw {struct p54s_priv* priv; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*) ;
 unsigned long FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct p54s_priv*) ;
 int FUNC_6 (struct p54s_priv*) ;
 int FUNC_7 (struct ieee80211_hw*) ;
 unsigned long FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_9(struct ieee80211_hw *VAR_3)
{
 struct p54s_priv *VAR_4 = VAR_3->priv;
 unsigned long VAR_5;
 int VAR_6 = 0;

 if (FUNC_3(&VAR_4->mutex)) {
  VAR_6 = -VAR_0;
  goto out;
 }

 VAR_4->fw_state = VAR_1;

 FUNC_6(VAR_4);

 VAR_6 = FUNC_7(VAR_3);
 if (VAR_6 < 0) {
  FUNC_5(VAR_4);
  goto out_unlock;
 }

 FUNC_4(&VAR_4->mutex);

 VAR_5 = FUNC_2(2000);
 VAR_5 = FUNC_8(&VAR_4->fw_comp,
           VAR_5);
 if (!VAR_5) {
  FUNC_1(&VAR_4->spi->dev, "firmware boot failed");
  FUNC_5(VAR_4);
  VAR_6 = -1;
  goto out;
 }

 if (FUNC_3(&VAR_4->mutex)) {
  VAR_6 = -VAR_0;
  FUNC_5(VAR_4);
  goto out;
 }

 FUNC_0(VAR_4->fw_state != VAR_2);

out_unlock:
 FUNC_4(&VAR_4->mutex);

out:
 return VAR_6;
}
