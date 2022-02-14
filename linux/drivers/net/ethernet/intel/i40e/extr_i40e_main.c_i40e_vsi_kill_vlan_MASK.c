
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {scalar_t__ pvid; } ;
struct i40e_vsi {int back; int mac_filter_hash_lock; TYPE_1__ info; } ;


 int FUNC_0 (struct i40e_vsi*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct i40e_vsi *VAR_0, u16 VAR_1)
{
 if (!VAR_1 || VAR_0->info.pvid)
  return;

 FUNC_2(&VAR_0->mac_filter_hash_lock);
 FUNC_0(VAR_0, VAR_1);
 FUNC_3(&VAR_0->mac_filter_hash_lock);




 FUNC_1(VAR_0->back);
}
