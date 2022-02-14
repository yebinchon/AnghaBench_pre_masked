
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {scalar_t__ uapsd; } ;
struct TYPE_4__ {TYPE_1__ sta; } ;
struct ath10k_vif {int vdev_id; TYPE_2__ u; struct ath10k* ar; } ;
struct ath10k {int conf_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ath10k*,char*,int ,int ,int) ;
 int FUNC_1 (struct ath10k*,int ,int ,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct ath10k_vif *VAR_3)
{
 struct ath10k *VAR_4 = VAR_3->ar;
 u32 VAR_5;
 u32 VAR_6;
 int VAR_7;

 FUNC_2(&VAR_3->ar->conf_mutex);

 if (VAR_3->u.sta.uapsd)
  VAR_6 = VAR_2;
 else
  VAR_6 = VAR_1;

 VAR_5 = VAR_0;
 VAR_7 = FUNC_1(VAR_4, VAR_3->vdev_id,
       VAR_5, VAR_6);
 if (VAR_7) {
  FUNC_0(VAR_4, "failed to submit ps poll count %u on vdev %i: %d\n",
       VAR_6, VAR_3->vdev_id, VAR_7);
  return VAR_7;
 }

 return 0;
}
