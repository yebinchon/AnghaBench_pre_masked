
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct i40e_hw {int dummy; } ;
struct TYPE_18__ {int pa; } ;
struct TYPE_19__ {TYPE_4__ addr; } ;
struct TYPE_16__ {int pa; } ;
struct TYPE_17__ {TYPE_2__ pd_page_addr; } ;
struct TYPE_20__ {TYPE_5__ bp; TYPE_3__ pd_table; } ;
struct i40e_hmc_sd_entry {int entry_type; int valid; TYPE_6__ u; } ;
struct i40e_hmc_lan_create_obj_info {scalar_t__ start_idx; size_t rsrc_type; scalar_t__ count; scalar_t__ direct_mode_sz; TYPE_8__* hmc_info; int entry_type; } ;
typedef scalar_t__ i40e_status ;
struct TYPE_21__ {scalar_t__ sd_cnt; struct i40e_hmc_sd_entry* sd_entry; } ;
struct TYPE_22__ {scalar_t__ signature; TYPE_7__ sd_table; TYPE_1__* hmc_obj; } ;
struct TYPE_15__ {scalar_t__ cnt; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_8__*,size_t,scalar_t__,scalar_t__,scalar_t__*,scalar_t__*) ;
 int FUNC_1 (TYPE_8__*,size_t,scalar_t__,scalar_t__,scalar_t__*,scalar_t__*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;


 int FUNC_2 (struct i40e_hw*,int ,scalar_t__,int) ;
 int FUNC_3 (struct i40e_hw*,char*,...) ;
 scalar_t__ FUNC_4 (struct i40e_hw*,TYPE_8__*,scalar_t__,int *) ;
 scalar_t__ FUNC_5 (struct i40e_hw*,TYPE_8__*,scalar_t__,int ,scalar_t__) ;
 int FUNC_6 (struct i40e_hw*,TYPE_8__*,scalar_t__) ;
 int FUNC_7 (struct i40e_hw*,TYPE_8__*,scalar_t__) ;
 int FUNC_8 (struct i40e_hw*,TYPE_8__*,scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__,scalar_t__) ;

__attribute__((used)) static i40e_status FUNC_11(struct i40e_hw *VAR_8,
    struct i40e_hmc_lan_create_obj_info *VAR_9)
{
 i40e_status VAR_10 = 0;
 struct i40e_hmc_sd_entry *VAR_11;
 u32 VAR_12 = 0, VAR_13 = 0;
 u32 VAR_14 = 0, VAR_15 = 0;
 bool VAR_16 = 0;
 u32 VAR_17, VAR_18;
 u64 VAR_19;
 u32 VAR_20, VAR_21;

 if (((void*)0) == VAR_9) {
  VAR_10 = VAR_0;
  FUNC_3(VAR_8, "i40e_create_lan_hmc_object: bad info ptr\n");
  goto exit;
 }
 if (((void*)0) == VAR_9->hmc_info) {
  VAR_10 = VAR_0;
  FUNC_3(VAR_8, "i40e_create_lan_hmc_object: bad hmc_info ptr\n");
  goto exit;
 }
 if (VAR_6 != VAR_9->hmc_info->signature) {
  VAR_10 = VAR_0;
  FUNC_3(VAR_8, "i40e_create_lan_hmc_object: bad signature\n");
  goto exit;
 }

 if (VAR_9->start_idx >= VAR_9->hmc_info->hmc_obj[VAR_9->rsrc_type].cnt) {
  VAR_10 = VAR_2;
  FUNC_3(VAR_8, "i40e_create_lan_hmc_object: returns error %d\n",
     VAR_10);
  goto exit;
 }
 if ((VAR_9->start_idx + VAR_9->count) >
     VAR_9->hmc_info->hmc_obj[VAR_9->rsrc_type].cnt) {
  VAR_10 = VAR_1;
  FUNC_3(VAR_8, "i40e_create_lan_hmc_object: returns error %d\n",
     VAR_10);
  goto exit;
 }


 FUNC_1(VAR_9->hmc_info, VAR_9->rsrc_type,
     VAR_9->start_idx, VAR_9->count,
     &VAR_17, &VAR_18);
 if (VAR_17 >= VAR_9->hmc_info->sd_table.sd_cnt ||
     VAR_18 > VAR_9->hmc_info->sd_table.sd_cnt) {
   VAR_10 = VAR_3;
   goto exit;
 }

 FUNC_0(VAR_9->hmc_info, VAR_9->rsrc_type,
     VAR_9->start_idx, VAR_9->count, &VAR_14,
     &VAR_15);





 if (VAR_9->direct_mode_sz == 0)
  VAR_19 = VAR_5;
 else
  VAR_19 = VAR_9->direct_mode_sz;




 for (VAR_21 = VAR_17; VAR_21 < VAR_18; VAR_21++) {

  VAR_10 = FUNC_5(VAR_8, VAR_9->hmc_info, VAR_21,
         VAR_9->entry_type,
         VAR_19);
  if (VAR_10)
   goto exit_sd_error;
  VAR_11 = &VAR_9->hmc_info->sd_table.sd_entry[VAR_21];
  if (128 == VAR_11->entry_type) {





   VAR_12 = FUNC_9(VAR_14, (VAR_21 * VAR_7));
   VAR_13 = FUNC_10(VAR_15,
          ((VAR_21 + 1) * VAR_7));
   for (VAR_20 = VAR_12; VAR_20 < VAR_13; VAR_20++) {

    VAR_10 = FUNC_4(VAR_8,
        VAR_9->hmc_info,
        VAR_20, ((void*)0));
    if (VAR_10) {
     VAR_16 = 1;
     break;
    }
   }
   if (VAR_16) {

    while (VAR_20 && (VAR_20 > VAR_12)) {
     FUNC_6(VAR_8, VAR_9->hmc_info,
         (VAR_20 - 1));
     VAR_20--;
    }
   }
  }
  if (!VAR_11->valid) {
   VAR_11->valid = 1;
   switch (VAR_11->entry_type) {
   case 128:
    FUNC_2(VAR_8,
     VAR_11->u.pd_table.pd_page_addr.pa,
     VAR_21, VAR_11->entry_type);
    break;
   case 129:
    FUNC_2(VAR_8, VAR_11->u.bp.addr.pa,
           VAR_21, VAR_11->entry_type);
    break;
   default:
    VAR_10 = VAR_4;
    goto exit;
   }
  }
 }
 goto exit;

exit_sd_error:

 while (VAR_21 && (VAR_21 > VAR_17)) {
  VAR_11 = &VAR_9->hmc_info->sd_table.sd_entry[VAR_21 - 1];
  switch (VAR_11->entry_type) {
  case 128:
   VAR_12 = FUNC_9(VAR_14,
          ((VAR_21 - 1) * VAR_7));
   VAR_13 = FUNC_10(VAR_15, (VAR_21 * VAR_7));
   for (VAR_20 = VAR_12; VAR_20 < VAR_13; VAR_20++)
    FUNC_6(VAR_8, VAR_9->hmc_info, VAR_20);
   FUNC_7(VAR_8, VAR_9->hmc_info, (VAR_21 - 1));
   break;
  case 129:
   FUNC_8(VAR_8, VAR_9->hmc_info, (VAR_21 - 1));
   break;
  default:
   VAR_10 = VAR_4;
   break;
  }
  VAR_21--;
 }
exit:
 return VAR_10;
}
