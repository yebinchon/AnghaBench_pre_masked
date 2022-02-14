
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_4__ {TYPE_1__* hmc_obj; } ;
struct i40e_hw {TYPE_2__ hmc; } ;
typedef int i40e_status ;
typedef enum i40e_hmc_lan_rsrc_type { ____Placeholder_i40e_hmc_lan_rsrc_type } i40e_hmc_lan_rsrc_type ;
struct TYPE_3__ {scalar_t__ size; } ;


 int FUNC_0 (int *,int ,int ) ;

__attribute__((used)) static i40e_status FUNC_1(struct i40e_hw *VAR_0,
     u8 *VAR_1,
     enum i40e_hmc_lan_rsrc_type VAR_2)
{

 FUNC_0(VAR_1, 0, (u32)VAR_0->hmc.hmc_obj[VAR_2].size);

 return 0;
}
