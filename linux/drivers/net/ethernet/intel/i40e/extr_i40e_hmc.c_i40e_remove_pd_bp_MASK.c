
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
typedef size_t u32 ;
struct i40e_hw {int dummy; } ;
struct TYPE_7__ {scalar_t__ va; } ;
struct i40e_hmc_pd_table {int pd_entry_virt_mem; int ref_cnt; TYPE_3__ pd_page_addr; struct i40e_hmc_pd_entry* pd_entry; } ;
struct TYPE_5__ {struct i40e_hmc_pd_table pd_table; } ;
struct i40e_hmc_sd_entry {scalar_t__ entry_type; TYPE_1__ u; } ;
struct TYPE_8__ {int addr; scalar_t__ ref_cnt; } ;
struct i40e_hmc_pd_entry {int valid; TYPE_4__ bp; int rsrc_pg; } ;
struct TYPE_6__ {size_t sd_cnt; struct i40e_hmc_sd_entry* sd_entry; } ;
struct i40e_hmc_info {TYPE_2__ sd_table; } ;
typedef scalar_t__ i40e_status ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (struct i40e_hmc_pd_table*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int FUNC_2 (struct i40e_hw*,size_t,size_t) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (struct i40e_hw*,char*) ;
 scalar_t__ FUNC_4 (struct i40e_hw*,int *) ;
 int FUNC_5 (struct i40e_hw*,int *) ;
 int FUNC_6 (int *,int ,int) ;

i40e_status FUNC_7(struct i40e_hw *VAR_4,
     struct i40e_hmc_info *VAR_5,
     u32 VAR_6)
{
 i40e_status VAR_7 = 0;
 struct i40e_hmc_pd_entry *VAR_8;
 struct i40e_hmc_pd_table *VAR_9;
 struct i40e_hmc_sd_entry *VAR_10;
 u32 VAR_11, VAR_12;
 u64 *VAR_13;


 VAR_11 = VAR_6 / VAR_2;
 VAR_12 = VAR_6 % VAR_2;
 if (VAR_11 >= VAR_5->sd_table.sd_cnt) {
  VAR_7 = VAR_0;
  FUNC_3(VAR_4, "i40e_remove_pd_bp: bad idx\n");
  goto exit;
 }
 VAR_10 = &VAR_5->sd_table.sd_entry[VAR_11];
 if (VAR_3 != VAR_10->entry_type) {
  VAR_7 = VAR_1;
  FUNC_3(VAR_4, "i40e_remove_pd_bp: wrong sd_entry type\n");
  goto exit;
 }

 VAR_9 = &VAR_5->sd_table.sd_entry[VAR_11].u.pd_table;
 VAR_8 = &VAR_9->pd_entry[VAR_12];
 FUNC_0(&VAR_8->bp);
 if (VAR_8->bp.ref_cnt)
  goto exit;


 VAR_8->valid = 0;
 FUNC_1(VAR_9);
 VAR_13 = (u64 *)VAR_9->pd_page_addr.va;
 VAR_13 += VAR_12;
 FUNC_6(VAR_13, 0, sizeof(u64));
 FUNC_2(VAR_4, VAR_11, VAR_6);


 if (!VAR_8->rsrc_pg)
  VAR_7 = FUNC_4(VAR_4, &VAR_8->bp.addr);
 if (VAR_7)
  goto exit;
 if (!VAR_9->ref_cnt)
  FUNC_5(VAR_4, &VAR_9->pd_entry_virt_mem);
exit:
 return VAR_7;
}
