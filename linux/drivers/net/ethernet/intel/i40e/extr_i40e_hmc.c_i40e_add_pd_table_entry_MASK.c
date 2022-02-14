
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
typedef size_t u32 ;
struct i40e_hw {int dummy; } ;
struct TYPE_9__ {scalar_t__ va; } ;
struct i40e_hmc_pd_table {TYPE_4__ pd_page_addr; struct i40e_hmc_pd_entry* pd_entry; } ;
struct i40e_dma_mem {int pa; } ;
struct TYPE_10__ {size_t sd_pd_index; scalar_t__ entry_type; struct i40e_dma_mem addr; } ;
struct i40e_hmc_pd_entry {int valid; int rsrc_pg; size_t sd_index; TYPE_5__ bp; } ;
struct TYPE_8__ {size_t sd_cnt; TYPE_2__* sd_entry; } ;
struct i40e_hmc_info {TYPE_3__ sd_table; } ;
typedef scalar_t__ i40e_status ;
struct TYPE_6__ {struct i40e_hmc_pd_table pd_table; } ;
struct TYPE_7__ {scalar_t__ entry_type; TYPE_1__ u; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (struct i40e_hmc_pd_table*) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct i40e_hw*,char*) ;
 scalar_t__ FUNC_3 (struct i40e_hw*,struct i40e_dma_mem*,int ,int ,int ) ;
 int VAR_5 ;
 int FUNC_4 (int*,int*,int) ;

i40e_status FUNC_5(struct i40e_hw *VAR_6,
           struct i40e_hmc_info *VAR_7,
           u32 VAR_8,
           struct i40e_dma_mem *VAR_9)
{
 i40e_status VAR_10 = 0;
 struct i40e_hmc_pd_table *VAR_11;
 struct i40e_hmc_pd_entry *VAR_12;
 struct i40e_dma_mem VAR_13;
 struct i40e_dma_mem *VAR_14 = &VAR_13;
 u32 VAR_15, VAR_16;
 u64 *VAR_17;
 u64 VAR_18;

 if (VAR_8 / VAR_3 >= VAR_7->sd_table.sd_cnt) {
  VAR_10 = VAR_0;
  FUNC_2(VAR_6, "i40e_add_pd_table_entry: bad pd_index\n");
  goto exit;
 }


 VAR_15 = (VAR_8 / VAR_3);
 if (VAR_4 !=
     VAR_7->sd_table.sd_entry[VAR_15].entry_type)
  goto exit;

 VAR_16 = (VAR_8 % VAR_3);
 VAR_11 = &VAR_7->sd_table.sd_entry[VAR_15].u.pd_table;
 VAR_12 = &VAR_11->pd_entry[VAR_16];
 if (!VAR_12->valid) {
  if (VAR_9) {
   VAR_12->rsrc_pg = 1;
   VAR_14 = VAR_9;
  } else {

   VAR_10 = FUNC_3(VAR_6, VAR_14, VAR_5,
      VAR_1,
      VAR_2);
   if (VAR_10)
    goto exit;
   VAR_12->rsrc_pg = 0;
  }

  VAR_12->bp.addr = *VAR_14;
  VAR_12->bp.sd_pd_index = VAR_8;
  VAR_12->bp.entry_type = VAR_4;

  VAR_18 = VAR_14->pa | 0x1;

  VAR_17 = (u64 *)VAR_11->pd_page_addr.va;
  VAR_17 += VAR_16;


  FUNC_4(VAR_17, &VAR_18, sizeof(u64));

  VAR_12->sd_index = VAR_15;
  VAR_12->valid = 1;
  FUNC_1(VAR_11);
 }
 FUNC_0(&VAR_12->bp);
exit:
 return VAR_10;
}
