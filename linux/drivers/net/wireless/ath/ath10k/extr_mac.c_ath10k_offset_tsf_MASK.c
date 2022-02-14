
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ieee80211_vif {scalar_t__ drv_priv; } ;
struct ieee80211_hw {struct ath10k* priv; } ;
struct ath10k_vif {int vdev_id; } ;
struct TYPE_4__ {TYPE_1__* vdev_param; } ;
struct ath10k {TYPE_2__ wmi; } ;
typedef int s64 ;
struct TYPE_3__ {int inc_tsf; int dec_tsf; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath10k*,char*,int ,int ,int) ;
 int FUNC_1 (struct ath10k*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct ieee80211_hw *VAR_1,
         struct ieee80211_vif *VAR_2, s64 VAR_3)
{
 struct ath10k *VAR_4 = VAR_1->priv;
 struct ath10k_vif *VAR_5 = (void *)VAR_2->drv_priv;
 u32 VAR_6, VAR_7;
 int VAR_8;

 if (VAR_3 < 0) {
  VAR_7 = VAR_4->wmi.vdev_param->dec_tsf;
  VAR_6 = -VAR_3;
 } else {
  VAR_7 = VAR_4->wmi.vdev_param->inc_tsf;
  VAR_6 = VAR_3;
 }

 VAR_8 = FUNC_1(VAR_4, VAR_5->vdev_id,
     VAR_7, VAR_6);

 if (VAR_8 && VAR_8 != -VAR_0)
  FUNC_0(VAR_4, "failed to set tsf offset %d cmd %d: %d\n",
       VAR_6, VAR_7, VAR_8);
}
