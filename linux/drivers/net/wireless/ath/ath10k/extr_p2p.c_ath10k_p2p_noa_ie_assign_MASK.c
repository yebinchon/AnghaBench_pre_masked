
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t noa_len; void* noa_data; } ;
struct TYPE_4__ {TYPE_1__ ap; } ;
struct ath10k_vif {TYPE_2__ u; struct ath10k* ar; } ;
struct ath10k {int data_lock; } ;


 int FUNC_0 (void*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct ath10k_vif *VAR_0, void *VAR_1,
         size_t VAR_2)
{
 struct ath10k *VAR_3 = VAR_0->ar;

 FUNC_1(&VAR_3->data_lock);

 FUNC_0(VAR_0->u.ap.noa_data);

 VAR_0->u.ap.noa_data = VAR_1;
 VAR_0->u.ap.noa_len = VAR_2;
}
