
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ath10k_vif {int vdev_id; struct ath10k* ar; } ;
struct TYPE_4__ {TYPE_1__* vdev_param; } ;
struct ath10k {TYPE_2__ wmi; } ;
struct TYPE_3__ {int rts_threshold; } ;


 int FUNC_0 (struct ath10k*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct ath10k_vif *VAR_0, u32 VAR_1)
{
 struct ath10k *VAR_2 = VAR_0->ar;
 u32 VAR_3;

 VAR_3 = VAR_2->wmi.vdev_param->rts_threshold;
 return FUNC_0(VAR_2, VAR_0->vdev_id, VAR_3, VAR_1);
}
