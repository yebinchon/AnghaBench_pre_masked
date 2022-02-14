
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ pvid; } ;
struct i40e_vsi {int mac_filter_hash_lock; TYPE_1__ info; } ;


 int FUNC_0 (struct i40e_vsi*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static bool FUNC_3(struct i40e_vsi *VAR_0)
{
 bool VAR_1;




 if (VAR_0->info.pvid)
  return 0;




 FUNC_1(&VAR_0->mac_filter_hash_lock);
 VAR_1 = FUNC_0(VAR_0);
 FUNC_2(&VAR_0->mac_filter_hash_lock);

 return VAR_1;
}
