
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ath10k_vif {scalar_t__ num_legacy_stations; int vdev_id; struct ath10k* ar; } ;
struct TYPE_3__ {TYPE_2__* vdev_param; } ;
struct ath10k {TYPE_1__ wmi; int conf_mutex; } ;
struct TYPE_4__ {int enable_rtscts; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct ath10k*,int ,char*,int ,int ) ;
 int FUNC_2 (struct ath10k*,int ,int ,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct ath10k_vif *VAR_6)
{
 struct ath10k *VAR_7 = VAR_6->ar;
 u32 VAR_8, VAR_9 = 0;

 FUNC_3(&VAR_7->conf_mutex);

 VAR_8 = VAR_7->wmi.vdev_param->enable_rtscts;

 VAR_9 |= FUNC_0(VAR_2, VAR_5);

 if (VAR_6->num_legacy_stations > 0)
  VAR_9 |= FUNC_0(VAR_1,
         VAR_4);
 else
  VAR_9 |= FUNC_0(VAR_3,
         VAR_4);

 FUNC_1(VAR_7, VAR_0, "mac vdev %d recalc rts/cts prot %d\n",
     VAR_6->vdev_id, VAR_9);

 return FUNC_2(VAR_7, VAR_6->vdev_id, VAR_8,
      VAR_9);
}
