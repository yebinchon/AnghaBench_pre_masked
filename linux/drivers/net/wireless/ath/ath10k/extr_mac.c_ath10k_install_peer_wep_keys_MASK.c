
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct ath10k_vif {int def_wep_key_idx; int vdev_id; struct ath10k* ar; TYPE_1__* vif; int ** wep_keys; } ;
struct ath10k_peer {int ** keys; } ;
struct TYPE_6__ {TYPE_2__* vdev_param; } ;
struct ath10k {TYPE_3__ wmi; int data_lock; int conf_mutex; } ;
struct TYPE_5__ {int def_keyid; } ;
struct TYPE_4__ {int type; } ;


 int FUNC_0 (int **) ;
 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct ath10k_vif*,int *,int ,int const*,int ) ;
 struct ath10k_peer* FUNC_3 (struct ath10k*,int ,int const*) ;
 int FUNC_4 (struct ath10k*,char*,int ,int) ;
 int FUNC_5 (struct ath10k*,int ,int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct ath10k_vif *VAR_7,
     const u8 *VAR_8)
{
 struct ath10k *VAR_9 = VAR_7->ar;
 struct ath10k_peer *VAR_10;
 int VAR_11;
 int VAR_12;
 u32 VAR_13;

 FUNC_6(&VAR_9->conf_mutex);

 if (FUNC_1(VAR_7->vif->type != 128 &&
      VAR_7->vif->type != 129 &&
      VAR_7->vif->type != VAR_2))
  return -VAR_0;

 FUNC_7(&VAR_9->data_lock);
 VAR_10 = FUNC_3(VAR_9, VAR_7->vdev_id, VAR_8);
 FUNC_8(&VAR_9->data_lock);

 if (!VAR_10)
  return -VAR_1;

 for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_7->wep_keys); VAR_12++) {
  if (VAR_7->wep_keys[VAR_12] == ((void*)0))
   continue;

  switch (VAR_7->vif->type) {
  case 128:
   VAR_13 = VAR_5;

   if (VAR_7->def_wep_key_idx == VAR_12)
    VAR_13 |= VAR_6;

   VAR_11 = FUNC_2(VAR_7, VAR_7->wep_keys[VAR_12],
       VAR_3, VAR_8, VAR_13);
   if (VAR_11 < 0)
    return VAR_11;
   break;
  case 129:
   VAR_11 = FUNC_2(VAR_7, VAR_7->wep_keys[VAR_12],
       VAR_3, VAR_8,
       VAR_5);
   if (VAR_11 < 0)
    return VAR_11;

   VAR_11 = FUNC_2(VAR_7, VAR_7->wep_keys[VAR_12],
       VAR_3, VAR_8, VAR_4);
   if (VAR_11 < 0)
    return VAR_11;
   break;
  default:
   FUNC_1(1);
   return -VAR_0;
  }

  FUNC_7(&VAR_9->data_lock);
  VAR_10->keys[VAR_12] = VAR_7->wep_keys[VAR_12];
  FUNC_8(&VAR_9->data_lock);
 }
 if (VAR_7->vif->type != 129)
  return 0;

 if (VAR_7->def_wep_key_idx == -1)
  return 0;

 VAR_11 = FUNC_5(VAR_7->ar,
     VAR_7->vdev_id,
     VAR_7->ar->wmi.vdev_param->def_keyid,
     VAR_7->def_wep_key_idx);
 if (VAR_11) {
  FUNC_4(VAR_9, "failed to re-set def wpa key idxon vdev %i: %d\n",
       VAR_7->vdev_id, VAR_11);
  return VAR_11;
 }

 return 0;
}
