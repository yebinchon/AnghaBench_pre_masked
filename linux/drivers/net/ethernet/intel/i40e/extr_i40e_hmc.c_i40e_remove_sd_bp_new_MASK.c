
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct i40e_hw {int dummy; } ;
struct TYPE_5__ {int addr; } ;
struct TYPE_6__ {TYPE_2__ bp; } ;
struct i40e_hmc_sd_entry {TYPE_3__ u; } ;
struct TYPE_4__ {struct i40e_hmc_sd_entry* sd_entry; } ;
struct i40e_hmc_info {TYPE_1__ sd_table; } ;
typedef int i40e_status ;


 int FUNC_0 (struct i40e_hw*,size_t,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct i40e_hw*,int *) ;

i40e_status FUNC_2(struct i40e_hw *VAR_2,
         struct i40e_hmc_info *VAR_3,
         u32 VAR_4, bool VAR_5)
{
 struct i40e_hmc_sd_entry *VAR_6;

 if (!VAR_5)
  return VAR_0;


 VAR_6 = &VAR_3->sd_table.sd_entry[VAR_4];
 FUNC_0(VAR_2, VAR_4, VAR_1);

 return FUNC_1(VAR_2, &VAR_6->u.bp.addr);
}
