
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {scalar_t__ pvid; } ;
struct i40e_vsi {int back; int mac_filter_hash_lock; TYPE_1__ info; } ;


 int VAR_0 ;
 int FUNC_0 (struct i40e_vsi*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct i40e_vsi *VAR_1, u16 VAR_2)
{
 int VAR_3;

 if (VAR_1->info.pvid)
  return -VAR_0;
 if (!VAR_2)
  return 0;


 FUNC_2(&VAR_1->mac_filter_hash_lock);
 VAR_3 = FUNC_0(VAR_1, VAR_2);
 FUNC_3(&VAR_1->mac_filter_hash_lock);
 if (VAR_3)
  return VAR_3;




 FUNC_1(VAR_1->back);
 return 0;
}
