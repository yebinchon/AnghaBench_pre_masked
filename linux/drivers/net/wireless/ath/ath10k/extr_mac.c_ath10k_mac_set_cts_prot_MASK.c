
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ath10k_vif {scalar_t__ use_cts_prot; int vdev_id; struct ath10k* ar; } ;
struct TYPE_4__ {TYPE_1__* vdev_param; } ;
struct ath10k {TYPE_2__ wmi; int conf_mutex; } ;
struct TYPE_3__ {int protection_mode; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath10k*,int ,char*,int ,scalar_t__) ;
 int FUNC_1 (struct ath10k*,int ,int ,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct ath10k_vif *VAR_1)
{
 struct ath10k *VAR_2 = VAR_1->ar;
 u32 VAR_3;

 FUNC_2(&VAR_2->conf_mutex);

 VAR_3 = VAR_2->wmi.vdev_param->protection_mode;

 FUNC_0(VAR_2, VAR_0, "mac vdev %d cts_protection %d\n",
     VAR_1->vdev_id, VAR_1->use_cts_prot);

 return FUNC_1(VAR_2, VAR_1->vdev_id, VAR_3,
      VAR_1->use_cts_prot ? 1 : 0);
}
