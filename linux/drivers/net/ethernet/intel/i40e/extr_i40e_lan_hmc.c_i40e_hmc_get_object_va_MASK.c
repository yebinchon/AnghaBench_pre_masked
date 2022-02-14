
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef size_t u32 ;
struct TYPE_9__ {struct i40e_hmc_sd_entry* sd_entry; } ;
struct i40e_hmc_info {scalar_t__ signature; TYPE_2__* hmc_obj; TYPE_1__ sd_table; } ;
struct i40e_hw {struct i40e_hmc_info hmc; } ;
struct TYPE_14__ {scalar_t__ va; } ;
struct TYPE_15__ {TYPE_6__ addr; } ;
struct TYPE_11__ {struct i40e_hmc_pd_entry* pd_entry; } ;
struct TYPE_16__ {TYPE_7__ bp; TYPE_3__ pd_table; } ;
struct i40e_hmc_sd_entry {scalar_t__ entry_type; TYPE_8__ u; } ;
struct TYPE_12__ {scalar_t__ va; } ;
struct TYPE_13__ {TYPE_4__ addr; } ;
struct i40e_hmc_pd_entry {TYPE_5__ bp; } ;
typedef int i40e_status ;
typedef enum i40e_hmc_lan_rsrc_type { ____Placeholder_i40e_hmc_lan_rsrc_type } i40e_hmc_lan_rsrc_type ;
struct TYPE_10__ {size_t cnt; int base; size_t size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i40e_hmc_info*,int,size_t,int,size_t*,size_t*) ;
 int FUNC_1 (struct i40e_hmc_info*,int,size_t,int,size_t*,size_t*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (struct i40e_hw*,char*,...) ;

__attribute__((used)) static
i40e_status FUNC_3(struct i40e_hw *VAR_7, u8 **VAR_8,
       enum i40e_hmc_lan_rsrc_type VAR_9,
       u32 VAR_10)
{
 struct i40e_hmc_info *VAR_11 = &VAR_7->hmc;
 u32 VAR_12, VAR_13;
 struct i40e_hmc_sd_entry *VAR_14;
 struct i40e_hmc_pd_entry *VAR_15;
 u32 VAR_16, VAR_17, VAR_18;
 i40e_status VAR_19 = 0;
 u64 VAR_20;
 u32 VAR_21, VAR_22;

 if (((void*)0) == VAR_11) {
  VAR_19 = VAR_0;
  FUNC_2(VAR_7, "i40e_hmc_get_object_va: bad hmc_info ptr\n");
  goto exit;
 }
 if (((void*)0) == VAR_11->hmc_obj) {
  VAR_19 = VAR_0;
  FUNC_2(VAR_7, "i40e_hmc_get_object_va: bad hmc_info->hmc_obj ptr\n");
  goto exit;
 }
 if (((void*)0) == VAR_8) {
  VAR_19 = VAR_0;
  FUNC_2(VAR_7, "i40e_hmc_get_object_va: bad object_base ptr\n");
  goto exit;
 }
 if (VAR_3 != VAR_11->signature) {
  VAR_19 = VAR_0;
  FUNC_2(VAR_7, "i40e_hmc_get_object_va: bad hmc_info->signature\n");
  goto exit;
 }
 if (VAR_10 >= VAR_11->hmc_obj[VAR_9].cnt) {
  FUNC_2(VAR_7, "i40e_hmc_get_object_va: returns error %d\n",
     VAR_19);
  VAR_19 = VAR_1;
  goto exit;
 }

 FUNC_1(VAR_11, VAR_9, VAR_10, 1,
     &VAR_21, &VAR_22);

 VAR_14 = &VAR_11->sd_table.sd_entry[VAR_21];
 VAR_20 = VAR_11->hmc_obj[VAR_9].base +
       VAR_11->hmc_obj[VAR_9].size * VAR_10;

 if (VAR_6 == VAR_14->entry_type) {
  FUNC_0(VAR_11, VAR_9, VAR_10, 1,
      &VAR_16, &VAR_17);
  VAR_18 = VAR_16 % VAR_5;
  VAR_15 = &VAR_14->u.pd_table.pd_entry[VAR_18];
  VAR_13 = (u32)(VAR_20 %
      VAR_4);
  *VAR_8 = (u8 *)VAR_15->bp.addr.va + VAR_13;
 } else {
  VAR_12 = (u32)(VAR_20 %
      VAR_2);
  *VAR_8 = (u8 *)VAR_14->u.bp.addr.va + VAR_12;
 }
exit:
 return VAR_19;
}
