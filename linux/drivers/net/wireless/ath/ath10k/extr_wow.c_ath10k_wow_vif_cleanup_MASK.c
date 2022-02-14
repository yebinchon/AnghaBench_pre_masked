
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath10k_vif {int vdev_id; struct ath10k* ar; } ;
struct TYPE_2__ {int max_num_patterns; } ;
struct ath10k {TYPE_1__ wow; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath10k*,char*,int,int ,int) ;
 int FUNC_1 (struct ath10k*,int ,int,int ) ;
 int FUNC_2 (struct ath10k*,int ,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct ath10k_vif *VAR_1)
{
 struct ath10k *VAR_2 = VAR_1->ar;
 int VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_4 = FUNC_1(VAR_2, VAR_1->vdev_id, VAR_3, 0);
  if (VAR_4) {
   FUNC_0(VAR_2, "failed to issue wow wakeup for event %s on vdev %i: %d\n",
        FUNC_3(VAR_3), VAR_1->vdev_id, VAR_4);
   return VAR_4;
  }
 }

 for (VAR_3 = 0; VAR_3 < VAR_2->wow.max_num_patterns; VAR_3++) {
  VAR_4 = FUNC_2(VAR_2, VAR_1->vdev_id, VAR_3);
  if (VAR_4) {
   FUNC_0(VAR_2, "failed to delete wow pattern %d for vdev %i: %d\n",
        VAR_3, VAR_1->vdev_id, VAR_4);
   return VAR_4;
  }
 }

 return 0;
}
