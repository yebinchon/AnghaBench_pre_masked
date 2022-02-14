
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k_vif {int is_started; struct ath10k* ar; } ;
struct ath10k {int conf_mutex; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath10k*,int ,char*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static bool FUNC_2(struct ath10k_vif *VAR_1)
{
 struct ath10k *VAR_2 = VAR_1->ar;

 FUNC_1(&VAR_2->conf_mutex);

 if (!VAR_1->is_started) {
  FUNC_0(VAR_2, VAR_0, "defer cts setup, vdev is not ready yet\n");
  return 0;
 }

 return 1;
}
