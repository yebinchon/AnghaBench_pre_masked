
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {struct i40e_hmc_obj_info* hmc_obj; int hmc_fn_id; } ;
struct i40e_hw {TYPE_1__ hmc; } ;
struct i40e_hmc_obj_info {int base; int cnt; int size; } ;
struct i40e_hmc_lan_create_obj_info {size_t rsrc_type; int count; int entry_type; int direct_mode_sz; scalar_t__ start_idx; TYPE_1__* hmc_info; } ;
typedef int i40e_status ;
typedef enum i40e_hmc_model { ____Placeholder_i40e_hmc_model } i40e_hmc_model ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_4 ;
 int FUNC_7 (int ) ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;



 int VAR_10 ;
 int VAR_11 ;
 int FUNC_8 (struct i40e_hw*,char*,int ) ;
 int FUNC_9 (struct i40e_hw*,struct i40e_hmc_lan_create_obj_info*) ;
 int FUNC_10 (struct i40e_hw*,int ,int ) ;

i40e_status FUNC_11(struct i40e_hw *VAR_12,
          enum i40e_hmc_model VAR_13)
{
 struct i40e_hmc_lan_create_obj_info VAR_14;
 i40e_status VAR_15 = 0;
 u8 VAR_16 = VAR_12->hmc.hmc_fn_id;
 struct i40e_hmc_obj_info *VAR_17;


 VAR_14.hmc_info = &VAR_12->hmc;
 VAR_14.rsrc_type = VAR_7;
 VAR_14.start_idx = 0;
 VAR_14.direct_mode_sz = VAR_12->hmc.hmc_obj[VAR_7].size;


 switch (VAR_13) {
 case 129:
 case 130:
  VAR_14.entry_type = VAR_10;

  VAR_14.count = 1;
  VAR_15 = FUNC_9(VAR_12, &VAR_14);
  if (VAR_15 && (VAR_13 == 129))
   goto try_type_paged;
  else if (VAR_15)
   goto configure_lan_hmc_out;

  break;
 case 128:
try_type_paged:
  VAR_14.entry_type = VAR_11;

  VAR_14.count = 1;
  VAR_15 = FUNC_9(VAR_12, &VAR_14);
  if (VAR_15)
   goto configure_lan_hmc_out;
  break;
 default:

  VAR_15 = VAR_0;
  FUNC_8(VAR_12, "i40e_configure_lan_hmc: Unknown SD type: %d\n",
     VAR_15);
  goto configure_lan_hmc_out;
 }




 VAR_17 = &VAR_12->hmc.hmc_obj[VAR_9];
 FUNC_10(VAR_12, FUNC_6(VAR_16),
      (u32)((VAR_17->base & VAR_4) / 512));
 FUNC_10(VAR_12, FUNC_7(VAR_16), VAR_17->cnt);


 VAR_17 = &VAR_12->hmc.hmc_obj[VAR_8];
 FUNC_10(VAR_12, FUNC_4(VAR_16),
      (u32)((VAR_17->base & VAR_3) / 512));
 FUNC_10(VAR_12, FUNC_5(VAR_16), VAR_17->cnt);


 VAR_17 = &VAR_12->hmc.hmc_obj[VAR_5];
 FUNC_10(VAR_12, FUNC_0(VAR_16),
  (u32)((VAR_17->base & VAR_1) / 512));
 FUNC_10(VAR_12, FUNC_1(VAR_16), VAR_17->cnt);


 VAR_17 = &VAR_12->hmc.hmc_obj[VAR_6];
 FUNC_10(VAR_12, FUNC_2(VAR_16),
      (u32)((VAR_17->base & VAR_2) / 512));
 FUNC_10(VAR_12, FUNC_3(VAR_16), VAR_17->cnt);

configure_lan_hmc_out:
 return VAR_15;
}
