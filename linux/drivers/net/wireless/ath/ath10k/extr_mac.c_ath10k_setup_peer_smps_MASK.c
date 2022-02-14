
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ieee80211_sta_ht_cap {int cap; int ht_supported; } ;
struct ath10k_vif {int vdev_id; } ;
struct ath10k {int dummy; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_1 (struct ath10k*,int ,int const*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct ath10k *VAR_5, struct ath10k_vif *VAR_6,
      const u8 *VAR_7,
      const struct ieee80211_sta_ht_cap *VAR_8)
{
 int VAR_9;

 if (!VAR_8->ht_supported)
  return 0;

 VAR_9 = VAR_8->cap & VAR_1;
 VAR_9 >>= VAR_2;

 if (VAR_9 >= FUNC_0(VAR_4))
  return -VAR_0;

 return FUNC_1(VAR_5, VAR_6->vdev_id, VAR_7,
      VAR_3,
      VAR_4[VAR_9]);
}
