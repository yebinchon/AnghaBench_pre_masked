
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef size_t u32 ;
struct i40e_hw {int dummy; } ;
struct i40e_hmc_pd_table {TYPE_3__* pd_entry; } ;
struct i40e_hmc_lan_delete_obj_info {scalar_t__ start_idx; size_t rsrc_type; scalar_t__ count; TYPE_6__* hmc_info; } ;
typedef scalar_t__ i40e_status ;
struct TYPE_15__ {size_t sd_cnt; TYPE_4__* sd_entry; } ;
struct TYPE_16__ {scalar_t__ signature; TYPE_5__ sd_table; TYPE_1__* hmc_obj; } ;
struct TYPE_12__ {struct i40e_hmc_pd_table pd_table; } ;
struct TYPE_14__ {int entry_type; int valid; TYPE_2__ u; } ;
struct TYPE_13__ {scalar_t__ valid; } ;
struct TYPE_11__ {scalar_t__ cnt; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_6__*,size_t,scalar_t__,scalar_t__,size_t*,size_t*) ;
 int FUNC_1 (TYPE_6__*,size_t,scalar_t__,scalar_t__,size_t*,size_t*) ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;


 int FUNC_2 (struct i40e_hw*,char*,...) ;
 scalar_t__ FUNC_3 (struct i40e_hw*,TYPE_6__*,size_t) ;
 scalar_t__ FUNC_4 (struct i40e_hw*,TYPE_6__*,size_t) ;
 scalar_t__ FUNC_5 (struct i40e_hw*,TYPE_6__*,size_t) ;

__attribute__((used)) static i40e_status FUNC_6(struct i40e_hw *VAR_6,
    struct i40e_hmc_lan_delete_obj_info *VAR_7)
{
 i40e_status VAR_8 = 0;
 struct i40e_hmc_pd_table *VAR_9;
 u32 VAR_10, VAR_11, VAR_12;
 u32 VAR_13, VAR_14;
 u32 VAR_15, VAR_16;

 if (((void*)0) == VAR_7) {
  VAR_8 = VAR_0;
  FUNC_2(VAR_6, "i40e_delete_hmc_object: bad info ptr\n");
  goto exit;
 }
 if (((void*)0) == VAR_7->hmc_info) {
  VAR_8 = VAR_0;
  FUNC_2(VAR_6, "i40e_delete_hmc_object: bad info->hmc_info ptr\n");
  goto exit;
 }
 if (VAR_4 != VAR_7->hmc_info->signature) {
  VAR_8 = VAR_0;
  FUNC_2(VAR_6, "i40e_delete_hmc_object: bad hmc_info->signature\n");
  goto exit;
 }

 if (((void*)0) == VAR_7->hmc_info->sd_table.sd_entry) {
  VAR_8 = VAR_0;
  FUNC_2(VAR_6, "i40e_delete_hmc_object: bad sd_entry\n");
  goto exit;
 }

 if (((void*)0) == VAR_7->hmc_info->hmc_obj) {
  VAR_8 = VAR_0;
  FUNC_2(VAR_6, "i40e_delete_hmc_object: bad hmc_info->hmc_obj\n");
  goto exit;
 }
 if (VAR_7->start_idx >= VAR_7->hmc_info->hmc_obj[VAR_7->rsrc_type].cnt) {
  VAR_8 = VAR_2;
  FUNC_2(VAR_6, "i40e_delete_hmc_object: returns error %d\n",
     VAR_8);
  goto exit;
 }

 if ((VAR_7->start_idx + VAR_7->count) >
     VAR_7->hmc_info->hmc_obj[VAR_7->rsrc_type].cnt) {
  VAR_8 = VAR_1;
  FUNC_2(VAR_6, "i40e_delete_hmc_object: returns error %d\n",
     VAR_8);
  goto exit;
 }

 FUNC_0(VAR_7->hmc_info, VAR_7->rsrc_type,
     VAR_7->start_idx, VAR_7->count, &VAR_10,
     &VAR_11);

 for (VAR_16 = VAR_10; VAR_16 < VAR_11; VAR_16++) {
  VAR_13 = VAR_16 / VAR_5;

  if (128 !=
      VAR_7->hmc_info->sd_table.sd_entry[VAR_13].entry_type)
   continue;

  VAR_12 = VAR_16 % VAR_5;

  VAR_9 =
   &VAR_7->hmc_info->sd_table.sd_entry[VAR_13].u.pd_table;
  if (VAR_9->pd_entry[VAR_12].valid) {
   VAR_8 = FUNC_3(VAR_6, VAR_7->hmc_info, VAR_16);
   if (VAR_8)
    goto exit;
  }
 }


 FUNC_1(VAR_7->hmc_info, VAR_7->rsrc_type,
     VAR_7->start_idx, VAR_7->count,
     &VAR_13, &VAR_14);
 if (VAR_13 >= VAR_7->hmc_info->sd_table.sd_cnt ||
     VAR_14 > VAR_7->hmc_info->sd_table.sd_cnt) {
  VAR_8 = VAR_3;
  goto exit;
 }

 for (VAR_15 = VAR_13; VAR_15 < VAR_14; VAR_15++) {
  if (!VAR_7->hmc_info->sd_table.sd_entry[VAR_15].valid)
   continue;
  switch (VAR_7->hmc_info->sd_table.sd_entry[VAR_15].entry_type) {
  case 129:
   VAR_8 = FUNC_5(VAR_6, VAR_7->hmc_info, VAR_15);
   if (VAR_8)
    goto exit;
   break;
  case 128:
   VAR_8 = FUNC_4(VAR_6, VAR_7->hmc_info, VAR_15);
   if (VAR_8)
    goto exit;
   break;
  default:
   break;
  }
 }
exit:
 return VAR_8;
}
